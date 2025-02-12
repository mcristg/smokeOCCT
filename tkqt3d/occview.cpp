/*****************************************************************************
**                                                                          **
** This file is part of occQt6, a simple OpenCASCADE Qt demo, updated       **
** for Qt6 and OpenCASCADE 7.5.0                                            **
**                                                                          **
**  occview.h is copied almost 1:1 from                                     **
**  OpenCASCADE/samples/qt/Common/src/View.h                                **
*****************************************************************************/

#if !defined _WIN32
#define QT_CLEAN_NAMESPACE         /* avoid definition of INT32 and INT8 */
#endif

#include "occview.h"

// Qt headers
#include <Standard_WarningsDisable.hxx>
#include <QActionGroup>
#include <QApplication>
#include <QColorDialog>
#include <QCursor>
#include <QDebug>
#include <QFileInfo>
#include <QFileDialog>
#include <QDebug>
#include <QMouseEvent>
#include <QOperatingSystemVersion>
#include <QPalette>
#include <QStyleFactory>
#include <QSurfaceFormat>
#include <QWheelEvent>
#include <Standard_WarningsRestore.hxx>

// occ headers
#include <Aspect_DisplayConnection.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_TextureEnv.hxx>
#include <OpenGl_GraphicDriver.hxx>

// private headers
#include "occwindow.h"

//! Map Qt buttons bitmask to virtual keys.
Aspect_VKeyMouse qtMouseButtons2VKeys (Qt::MouseButtons buttons)
{
    Aspect_VKeyMouse button = Aspect_VKeyMouse_NONE;
    if ((buttons & Qt::LeftButton) != 0)
    {
        button |= Aspect_VKeyMouse_LeftButton;
    }
    if ((buttons & Qt::MiddleButton) != 0)
    {
        button |= Aspect_VKeyMouse_MiddleButton;
    }
    if ((buttons & Qt::RightButton) != 0)
    {
        button |= Aspect_VKeyMouse_RightButton;
    }
    return button;
}

//! Map Qt mouse modifiers bitmask to virtual keys.
Aspect_VKeyFlags qtMouseModifiers2VKeys (Qt::KeyboardModifiers modifiers)
{
    Aspect_VKeyFlags flags = Aspect_VKeyFlags_NONE;
    if ((modifiers & Qt::ShiftModifier) != 0)
    {
        flags |= Aspect_VKeyFlags_SHIFT;
    }
    if ((modifiers & Qt::ControlModifier) != 0)
    {
        flags |= Aspect_VKeyFlags_CTRL;
    }
    if ((modifiers & Qt::AltModifier) != 0)
    {
        flags |= Aspect_VKeyFlags_ALT;
    }
    return flags;
}

static QCursor* defCursor     = nullptr;
static QCursor* handCursor    = nullptr;
static QCursor* panCursor     = nullptr;
static QCursor* globPanCursor = nullptr;
static QCursor* zoomCursor    = nullptr;
static QCursor* rotCursor     = nullptr;


occView::occView(QWidget *parent) : QWidget(parent), _devPx(devicePixelRatio())
{
    init();

    _mouseDefaultGestures = myMouseGestureMap;
    _curMode = curAction3d::Nothing;

    initCursors();

    // set focus policy to threat QContextMenuEvent from keyboard
    setFocusPolicy(Qt::StrongFocus);
    setAttribute(Qt::WA_PaintOnScreen);

    // Enable mouse tracking, by default mouse tracking is disabled.
    setMouseTracking(true);

    this->update();
}

occView::~occView()
{
    delete _backMenu;
}


// ------------------------------------------------------------------------------------------------
// protected functions
// ------------------------------------------------------------------------------------------------
void occView::init()
{
    Handle(Aspect_DisplayConnection) aDisplayConnection;
    Handle_OpenGl_GraphicDriver aGraphicDriver;

    // Create a 3D viewer.
    aDisplayConnection = new Aspect_DisplayConnection();
    aGraphicDriver = new OpenGl_GraphicDriver(aDisplayConnection);

    // fix OpenGL issues on MacOS: https://old.opencascade.com/content/ray-tracing-requires-opengl-31-and-higher
#if __APPLE__
    aGraphicDriver->ChangeOptions().contextCompatible = false;
    // below command is not needed, kept here in case it is required in the future
    // aGraphicDriver->ChangeOptions().ffpEnable=false;
#endif

    _viewer = new V3d_Viewer(aGraphicDriver);

    // Create a graphic structure in this Viewer
    _struct = new Graphic3d_Structure (_viewer->StructureManager());

    // Create an interactive context.
    _context = new AIS_InteractiveContext(_viewer);
    _context->SetDisplayMode(AIS_Shaded, Standard_True);

    _curDrawStyle = drawStyle::shadedWithEdges;

    if ( _view.IsNull() )
        _view = _context->CurrentViewer()->CreateView();

    Handle(occWindow) hWnd = new occWindow(this);

    _view->SetWindow (hWnd);
    if ( !hWnd->IsMapped() )
        hWnd->Map();

    _view->MustBeResized();

    // Set up lights etc
    _viewer->SetDefaultLights();
    _viewer->SetLightOn();

    // set up selection style
    auto style = _context->SelectionStyle();
    style->SetColor(Quantity_NOC_GREEN);
    style->SetDisplayMode(AIS_Shaded);
    _context->SetSelectionStyle(style);

    auto bgcolor = Quantity_Color(.13, .13, .13, Quantity_TOC_sRGB);
    _view->SetBackgroundColor(bgcolor);
    _view->MustBeResized();

    // Initialize position, color and length of Trihedron axes. The scale is in percent of the window width.
    auto trihedronScale = this->devicePixelRatio() * 0.1;
    _view->TriedronDisplay(Aspect_TOTP_LEFT_LOWER, Quantity_NOC_GOLD, trihedronScale, V3d_ZBUFFER);

    if (_isRaytracing)
        _view->ChangeRenderingParams().Method = Graphic3d_RM_RAYTRACING;
}

//Get paint engine for the OpenGL viewer.
QPaintEngine* occView::paintEngine() const
{
    return nullptr;
}

void occView::paintEvent( QPaintEvent* /*event*/ )
{
    _view->InvalidateImmediate();
    FlushViewEvents(_context, _view, true);
    //    _view->Redraw();
}

void occView::resizeEvent( QResizeEvent* /*event*/ )
{
    if(!_view.IsNull())
        _view->MustBeResized();
}

void occView::OnSelectionChanged(const Handle(AIS_InteractiveContext)&,
                                 const Handle(V3d_View)&)
{
    emit selectionChanged();
}

void occView::wireframe()
{
    QApplication::setOverrideCursor(Qt::WaitCursor);
    _view->SetComputedMode(false);
    _context->SetDisplayMode(AIS_Shaded, Standard_False);
    _context->SetDisplayMode(AIS_WireFrame, Standard_True);
    _curDrawStyle = drawStyle::wireframe;
    _view->Redraw();
    QApplication::restoreOverrideCursor();
}

void occView::hlrOn()
{
    QApplication::setOverrideCursor(Qt::WaitCursor);
    _view->SetComputedMode(true);
    _view->Redraw();
    _curDrawStyle = drawStyle::hlrOn;
    QApplication::restoreOverrideCursor();
}

void occView::hlrOff()
{
    QApplication::setOverrideCursor(Qt::WaitCursor);
    _view->SetComputedMode(false);
    _view->Redraw();
    QApplication::restoreOverrideCursor();
}

void occView::shaded()
{
    QApplication::setOverrideCursor(Qt::WaitCursor);
    _context->SetDisplayMode(AIS_Shaded, Standard_True);
    _view->SetComputedMode(false);
    _view->Redraw();
    _curDrawStyle = drawStyle::shaded;
    QApplication::restoreOverrideCursor();

}

void occView::setRaytracedShadows(bool state)
{
    _view->ChangeRenderingParams().IsShadowEnabled = state;
    _isShadowsEnabled = state;
    _context->UpdateCurrentViewer();
}

void occView::setRaytracedReflections(bool state)
{
    _view->ChangeRenderingParams().IsReflectionEnabled = state;
    _isReflectionsEnabled = state;
    _context->UpdateCurrentViewer();
}


void occView::onRaytraceAction()
{
    auto sentBy = qobject_cast<QAction*>(sender());

    if (sentBy == _raytraceActions->at(toolRaytracingId))
    {
        bool state = _raytraceActions->at(toolRaytracingId)->isChecked();
        QApplication::setOverrideCursor(Qt::WaitCursor);
        if (state)
            enableRaytracing();
        else
            disableRaytracing();
        QApplication::restoreOverrideCursor();
    }

    if (sentBy == _raytraceActions->at(toolShadowsId))
        setRaytracedShadows(_raytraceActions->at(toolShadowsId)->isChecked());

    if (sentBy == _raytraceActions->at(toolReflectionsId))
        setRaytracedReflections(_raytraceActions->at(toolReflectionsId)->isChecked());

    if (sentBy == _raytraceActions->at(toolAntialiasingId))
        setRaytracedAntialiasing (_raytraceActions->at(toolAntialiasingId)->isChecked());
}


void occView::setRaytracedAntialiasing(bool state)
{
    _view->ChangeRenderingParams().IsAntialiasingEnabled = state;
    _isAntialiasingEnabled = state;
    _context->UpdateCurrentViewer();
}

void occView::enableRaytracing()
{
    if (!_isRaytracing)
        _view->ChangeRenderingParams().Method = Graphic3d_RM_RAYTRACING;


    _isRaytracing = true;
    _context->UpdateCurrentViewer();
}

void occView::disableRaytracing()
{
    if (_isRaytracing)
        _view->ChangeRenderingParams().Method = Graphic3d_RM_RASTERIZATION;

    _isRaytracing = false;
    _context->UpdateCurrentViewer();
}

void occView::updateToggled(bool isOn)
{
    auto sentBy = qobject_cast<QAction*>(sender());

    if( !isOn )
        return;

    for (int i = viewFitAll; i < viewHlrOff; i++ )
    {
        QAction* action = _viewActions->at(i);

        if ( ( action == _viewActions->at( viewFitArea ) ) ||
             ( action == _viewActions->at( viewZoom ) ) ||
             ( action == _viewActions->at( viewPan ) ) ||
             ( action == _viewActions->at( viewGlobalPan ) ) ||
             ( action == _viewActions->at( viewRotation ) ) )
        {
            if ( action && ( action != sentBy ) )
            {
                action->setCheckable(true);
                action->setChecked(false);
            }
            else
            {
                if (sentBy == _viewActions->at(viewFitArea))
                    setCursor( *handCursor );
                else if ( sentBy == _viewActions->at(viewZoom) )
                    setCursor( *zoomCursor );
                else if ( sentBy == _viewActions->at(viewPan) )
                    setCursor( *panCursor );
                else if ( sentBy == _viewActions->at(viewGlobalPan) )
                    setCursor( *globPanCursor );
                else if ( sentBy == _viewActions->at(viewRotation) )
                    setCursor( *rotCursor );
                else
                    setCursor( *defCursor );

                sentBy->setCheckable( false );
            }
        }
    }
}

void occView::initCursors()
{
    if ( !defCursor )
        defCursor = new QCursor( Qt::ArrowCursor );
    if ( !handCursor )
        handCursor = new QCursor( Qt::PointingHandCursor );
    if ( !panCursor )
        panCursor = new QCursor( Qt::SizeAllCursor );
    if ( !globPanCursor )
        globPanCursor = new QCursor( Qt::CrossCursor );
    if ( !zoomCursor )
        zoomCursor = new QCursor (Qt::SizeVerCursor);//new QCursor( QPixmap( ApplicationCommonWindow::getResourceDir() + QString( "/" ) + QObject::tr( "ICON_CURSOR_ZOOM" ) ) );
    if ( !rotCursor )
        rotCursor = new QCursor (Qt::SizeHorCursor); //new QCursor( QPixmap( ApplicationCommonWindow::getResourceDir() + QString( "/" ) + QObject::tr( "ICON_CURSOR_ROTATE" ) ) );
}

QList<QAction*>* occView::getRaytraceActions()
{
    initRaytraceActions();
    return _raytraceActions;
}

void occView::initRaytraceActions()
{
    if ( _raytraceActions )
        return;

    _raytraceActions = new QList<QAction*>();
    QAction* a;

    a = new QAction(QObject::tr("MNU_TOOL_RAYTRACING"), this );
    a->setToolTip( QObject::tr("TBR_TOOL_RAYTRACING") );
    a->setStatusTip( QObject::tr("TBR_TOOL_RAYTRACING") );
    a->setCheckable( true );
    a->setChecked( false );
    connect( a, &QAction::triggered, this, &occView::onRaytraceAction);
    _raytraceActions->insert(toolRaytracingId, a );

    a = new QAction(QObject::tr("MNU_TOOL_SHADOWS"), this );
    a->setToolTip( QObject::tr("TBR_TOOL_SHADOWS") );
    a->setStatusTip( QObject::tr("TBR_TOOL_SHADOWS") );
    a->setCheckable( true );
    a->setChecked( true );
    connect(a, &QAction::triggered, this, &occView::onRaytraceAction);
    _raytraceActions->insert(toolShadowsId, a );

    a = new QAction(QObject::tr("MNU_TOOL_REFLECTIONS"), this );
    a->setToolTip( QObject::tr("TBR_TOOL_REFLECTIONS") );
    a->setStatusTip( QObject::tr("TBR_TOOL_REFLECTIONS") );
    a->setCheckable( true );
    a->setChecked( false );
    connect(a, &QAction::triggered, this, &occView::onRaytraceAction);
    _raytraceActions->insert(toolReflectionsId, a );

    a = new QAction(QObject::tr("MNU_TOOL_ANTIALIASING"), this );
    a->setToolTip( QObject::tr("TBR_TOOL_ANTIALIASING") );
    a->setStatusTip( QObject::tr("TBR_TOOL_ANTIALIASING") );
    a->setCheckable( true );
    a->setChecked( false );
    connect(a, &QAction::triggered, this, &occView::onRaytraceAction);
    _raytraceActions->insert(toolAntialiasingId, a );
}


void occView::activateCursor(curAction3d mode)
{
    switch( mode )
    {
    case curAction3d::DynamicPanning:
        setCursor( *panCursor );
        break;
    case curAction3d::DynamicZooming:
        setCursor( *zoomCursor );
        break;
    case curAction3d::DynamicRotation:
        setCursor( *rotCursor );
        break;
    case curAction3d::GlobalPanning:
        setCursor( *globPanCursor );
        break;
    case curAction3d::WindowZooming:
        setCursor( *handCursor );
        break;
    case curAction3d::Nothing:
    default:
        setCursor( *defCursor );
        break;
    }
}

void occView::mousePressEvent(QMouseEvent* event)
{
    Graphic3d_Vec2i point;
    point.SetValues(_devPx*event->pos().x(), _devPx*event->pos().y());
    const Aspect_VKeyFlags flags = qtMouseModifiers2VKeys (event->modifiers());
    if (!_view.IsNull() && UpdateMouseButtons(point, qtMouseButtons2VKeys (event->buttons()), flags, false))
        updateView();

    _clickPos = point;
}

void occView::mouseReleaseEvent(QMouseEvent* event)
{
    Graphic3d_Vec2i point;
    point.SetValues(_devPx*event->pos().x(), _devPx*event->pos().y());
    const Aspect_VKeyFlags flags = qtMouseModifiers2VKeys(event->modifiers());
    if (!_view.IsNull() && UpdateMouseButtons(point, qtMouseButtons2VKeys(event->buttons()), flags, false))
        updateView();


    if (_curMode == curAction3d::GlobalPanning)
        _view->Place(point.x(), point.y(), _curZoom);

    // required to reset mouse mode, e.g. after WindowZooming
    if (_curMode != curAction3d::Nothing)
        setCurAction(curAction3d::Nothing);

    if (event->button() == Qt::RightButton && (flags & Aspect_VKeyFlags_CTRL) == 0 && (_clickPos - point).cwiseAbs().maxComp() <= 4)
        popup(point.x(), point.y());
}

void occView::mouseMoveEvent(QMouseEvent* event)
{
    Graphic3d_Vec2i point;
    point.SetValues(_devPx*event->pos().x(), _devPx*event->pos().y());
    if (!_view.IsNull() && UpdateMousePosition(point, qtMouseButtons2VKeys(event->buttons()), qtMouseModifiers2VKeys(event->modifiers()), false))
        updateView();
}


void occView::wheelEvent(QWheelEvent* event)
{
    Graphic3d_Vec2i pos;
    pos.SetValues(event->position().x(), event->position().y());
    int numPixels = event->pixelDelta().y();
    int numDegrees = event->angleDelta().y() / 8;

    Standard_Real delta {0.};
    if (numPixels != 0)
        delta = numPixels;
    else if (numDegrees != 0)
        delta = numDegrees / 15;

    if (!_view.IsNull() && UpdateZoom(Aspect_ScrollDelta(pos, delta)))
        updateView();
}

void occView::updateView()
{
    this->update();
}


void occView::defineMouseGestures()
{
    myMouseGestureMap.Clear();
    AIS_MouseGesture aRot = AIS_MouseGesture_RotateOrbit;
    activateCursor(_curMode);
    switch (_curMode)
    {
    case curAction3d::Nothing:
        //noActiveActions();
        myMouseGestureMap = _mouseDefaultGestures;
        break;
    case curAction3d::DynamicZooming:
        myMouseGestureMap.Bind (Aspect_VKeyMouse_LeftButton, AIS_MouseGesture_Zoom);
        break;
    case curAction3d::GlobalPanning:
        break;
    case curAction3d::WindowZooming:
        myMouseGestureMap.Bind (Aspect_VKeyMouse_LeftButton, AIS_MouseGesture_ZoomWindow);
        break;
    case curAction3d::DynamicPanning:
        myMouseGestureMap.Bind (Aspect_VKeyMouse_LeftButton, AIS_MouseGesture_Pan);
        break;
    case curAction3d::DynamicRotation:
        myMouseGestureMap.Bind (Aspect_VKeyMouse_LeftButton, aRot);
        break;
    case curAction3d::Selecting:
        myMouseGestureMap.Bind(Aspect_VKeyMouse_LeftButton, AIS_MouseGesture_SelectRectangle);
        break;
    }
}


void occView::popup(int /*x*/, int /*y*/)
{
   //empty
}

void occView::addItemInPopup(QMenu* /* menu */)
{
    //empty
}

void occView::onBackground()
{
    QColor aColor ;
    Standard_Real R1;
    Standard_Real G1;
    Standard_Real B1;
    _view->BackgroundColor(Quantity_TOC_sRGB,R1,G1,B1);
    aColor.setRgb((Standard_Integer)(R1 * 255), (Standard_Integer)(G1 * 255), (Standard_Integer)(B1 * 255));

    QColor aRetColor = QColorDialog::getColor(aColor);

    if( aRetColor.isValid() )
    {
        R1 = aRetColor.red()/255.;
        G1 = aRetColor.green()/255.;
        B1 = aRetColor.blue()/255.;
        _view->SetBackgroundColor(Quantity_TOC_sRGB,R1,G1,B1);
    }
    _view->Redraw();
}


void occView::onEnvironmentMap()
{
    if (_backMenu->actions().at(1)->isChecked())
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",
                                                        tr("All Image Files (*.bmp *.gif *.jpg *.jpeg *.png *.tga)"));

        const TCollection_AsciiString anUtf8Path (fileName.toUtf8().data());

        Handle(Graphic3d_TextureEnv) aTexture = new Graphic3d_TextureEnv( anUtf8Path );

        _view->SetTextureEnv(aTexture);
    }
    else
        _view->SetTextureEnv (Handle(Graphic3d_TextureEnv)());

    _view->Redraw();
}

bool occView::dump(Standard_CString file)
{
    return _view->Dump(file);
}
