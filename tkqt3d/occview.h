/*****************************************************************************
**                                                                          **
** This file is part of occQt6, a simple OpenCASCADE Qt demo, updated       **
** for Qt6 and OpenCASCADE 7.5.0                                            **
**                                                                          **
**  occview.h is copied almost 1:1 from                                     **
**  OpenCASCADE/samples/qt/Common/src/View.h                                **
*****************************************************************************/

#ifndef OCCVIEW_H
#define OCCVIEW_H

// Qt headers
#include <Standard_WarningsDisable.hxx>
#include <QMenu>
#include <QWidget>
#include <Standard_WarningsRestore.hxx>

// occt headers
#include <AIS_InteractiveContext.hxx>
#include <AIS_ViewController.hxx>
#include <V3d_View.hxx>

//project headers

enum curAction3d {
    Nothing,
    DynamicZooming,
    WindowZooming,
    DynamicPanning,
    GlobalPanning,
    DynamicRotation,
    Selecting
};

enum viewAction {
    viewFitAll,
    viewFitArea,
    viewZoom,
    viewPan,
    viewGlobalPan,
    viewFront,
    viewBack,
    viewTop,
    viewBottom,
    viewLeft,
    viewRight,
    viewAxo,
    viewRotation,
    viewReset,
    viewHlrOff,
    viewHlrOn
};

enum raytraceAction { toolRaytracingId,
                      toolShadowsId,
                      toolReflectionsId,
                      toolAntialiasingId
                    };

enum drawStyle {
    points,
    wireframe,
    hlrOn,
    shaded,
    shadedWithEdges
};

class TopoDS_Shape;

class occView : public QWidget, public AIS_ViewController
{
    
   Q_OBJECT

public:

    // constructor
    occView(QWidget* parent = nullptr );

    // destructor
    ~occView();

    void init();
    bool dump (Standard_CString file);

//    void isShadingMode();

    void enableRaytracing();
    void disableRaytracing();

    void setRaytracedShadows(bool state);
    void setRaytracedReflections(bool state);
    void setRaytracedAntialiasing(bool state);

    bool isRaytracingMode() const {return _isRaytracing;}
    bool isShadowsEnabled() const {return _isShadowsEnabled;}
    bool isReflectionsEnabled() const {return _isReflectionsEnabled;}
    bool isAntialiasingEnabled() const {return _isAntialiasingEnabled;}

/*    static QString getMessages(int type,
                               TopAbs_ShapeEnum subShapeType,
                               TopAbs_ShapeEnum shapeType);
    static QString getShapeType(TopAbs_ShapeEnum shapeType);

    Standard_EXPORT static void onButtonUserAction(int ExerciseSTEP, Handle(AIS_InteractiveContext)& );
    Standard_EXPORT static void doSelection(int Id, Handle(AIS_InteractiveContext)& );
    Standard_EXPORT static void onSetSelectionMode(Handle(AIS_InteractiveContext)&,
                                                   Standard_Integer&,
                                                   TopAbs_ShapeEnum& SelectionMode,
                                                   Standard_Boolean& );*/

    //getters
    const Handle(V3d_View)& getView() const {return _view;}
    const Handle(AIS_InteractiveContext)& getContext() const {return _context;};
    const Handle(Graphic3d_Structure)& getStruct() const {return _struct;}

    QList<QAction*>* getRaytraceActions();

    void OnSelectionChanged (const Handle(AIS_InteractiveContext)& theCtx,
                             const Handle(V3d_View)& theView) Standard_OVERRIDE;
signals:
    void selectionChanged();

public slots:
    // mouse operations
    void orbit() {setCurAction(curAction3d::Nothing);}
    void select() {setCurAction(curAction3d::Selecting);}
    void zoom() {setCurAction(curAction3d::DynamicZooming);}
    void pan() {setCurAction(curAction3d::DynamicPanning);}
    void globalPan() { _curZoom = _view->Scale(); _view->FitAll(); setCurAction(curAction3d::GlobalPanning);}
    void rotation() {setCurAction(curAction3d::DynamicRotation);}
    //standard views
    void front() {_view->SetProj(V3d_Yneg);_view->FitAll();}
    void back() {_view->SetProj(V3d_Ypos);_view->FitAll();}
    void top() {_view->SetProj(V3d_Zpos);_view->FitAll();}
    void bottom() {_view->SetProj(V3d_Zneg);_view->FitAll();}
    void left() {_view->SetProj(V3d_Xneg);_view->FitAll();}
    void right() {_view->SetProj(V3d_Xpos);_view->FitAll();}
    void axo() {_view->SetProj(V3d_XposYnegZpos); _view->FitAll();}
    // fit to screen or selections
    void fitAll() { _view->FitAll(); _view->ZFitAll(); _view->Redraw();}
    void fitArea() {setCurAction(curAction3d::WindowZooming);}
    void reset() {axo();};

    // draw styles
    void wireframe();
    void hlrOn(); // hidden line removal on/off
    void hlrOff();
    void shaded();

    // change background or raytracing mode
    void updateToggled( bool );
    void onBackground();
    void onEnvironmentMap();
    void onRaytraceAction();

protected:
    virtual QPaintEngine* paintEngine() const override;

    // Paint events.
    virtual void paintEvent(QPaintEvent* event) override;
    virtual void resizeEvent(QResizeEvent* event) override;

    // Mouse events.
    virtual void mousePressEvent(QMouseEvent* event) override;
    virtual void mouseReleaseEvent(QMouseEvent* event) override;
    virtual void mouseMoveEvent(QMouseEvent* event) override;
    virtual void wheelEvent(QWheelEvent* event) override;

    virtual void addItemInPopup(QMenu* );

    // getters
    curAction3d getCurrentMode() {return _curMode;}
    drawStyle getCurrentDrawStyle() { return _curDrawStyle;}

    void activateCursor(curAction3d);
    void popup(int x, int y );
    void updateView();

    //! Setup mouse gestures.
    void defineMouseGestures();

    // Set current action.
    void setCurAction (curAction3d action) { _curMode = action;
                                             defineMouseGestures();
                                           }

    // Handle selection changed event.

private:

    bool _isRaytracing {false};
    bool _isShadowsEnabled {true};
    bool _isReflectionsEnabled {false};
    bool _isAntialiasingEnabled {false};

    const Standard_Real _devPx;

    //void dragEvent(int x, int y);
    //void drawRubberBand(int minX, int minY, int maxX, int maxY);

    // Occ viewer
    Handle(V3d_Viewer) _viewer;
    Handle(V3d_View) _view;

    // occ structure item (for 3d text display)
    Handle(Graphic3d_Structure) _struct;

    // Occ context
    Handle(AIS_InteractiveContext) _context;

    AIS_MouseGestureMap _mouseDefaultGestures;
    Graphic3d_Vec2i _clickPos;
    curAction3d _curMode;
    drawStyle _curDrawStyle;
    Standard_Real _curZoom {0};

    QList<QAction*>* _viewActions {0};
    QList<QAction*>* _raytraceActions {0};
    QMenu* _backMenu {nullptr};

    void initCursors();
//    void initViewActions();
    void initRaytraceActions();
};

#endif // OCCVIEW_H
