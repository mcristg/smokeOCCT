/***** MIT *******************************************************************
**                                                                          **
** This file is part of occQt6, a simple OpenCASCADE Qt demo, updated       **
** for Qt6 and OpenCASCADE 7.5.0                                            **
**                                                                          **
** Copyright (c) 2020 Marius Schollmeier (mschollmeier01@gmail.com)         **
**                                                                          **
** Permission is hereby granted, free of charge, to any person              **
** obtaining a copy of this software and associated documentation           **
** files (the "Software"), to deal in the Software without restriction,     **
** including without limitation the rights to use, copy, modify, merge,     **
** publish, distribute, sublicense, and/or sell copies of the Software,     **
** and to permit persons to whom the Software is furnished to do so,        **
** subject to the following conditions:                                     **
**                                                                          **
** The above copyright notice and this permission notice shall be included  **
** in all copies or substantial portions of the Software.                   **
**                                                                          **
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,          **
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES          **
** OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND                 **
** NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT              **
** HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,             **
** WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,       **
** OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER            **
** DEALINGS IN THE SOFTWARE.                                                **
*****************************************************************************/

#ifndef OCCTWINDOW_H
#define OCCTWINDOW_H

// Qt headers
#include <QWidget>

// occ headers
#include <Aspect_Window.hxx>

/*
  occWindow class implements Aspect_Window interface using Qt API
  as a platform-independent source of window geometry information.
  A similar class should be used instead of platform-specific OCC
  classes (WNT_Window, Xw_Window) in any Qt 5 application using OCC
  3D visualization.

  With Qt 5, the requirement for a Qt-based application to rely fully
  on Qt public API and stop using platform-specific APIs looks mandatory.
  An example of this is changed QWidget event sequence: when a widget is
  first shown on the screen, a resize event is generated before the
  underlying native window is resized correctly, however the QWidget instance
  already holds correct size information at that moment. The OCC classes
  acting as a source of window geometry for V3d_View class (WNT_Window, Xw_Window)
  are no longer compatible with changed Qt behavior because they rely on
  platform-specific API that cannot return correct window geometry information
  in some cases. A reasonable solution is to provide a Qt-based implementation
  of Aspect_Window interface at application level.
*/

class occWindow : public Aspect_Window
{
    DEFINE_STANDARD_RTTIEXT(occWindow, Aspect_Window)

public:

    // constructor
    occWindow(QWidget *parent = nullptr);

    virtual void Destroy();

    // destructor
    ~occWindow() {Destroy();}

    // Returns native Window handle
    virtual Aspect_Drawable NativeHandle() const override;

    // Returns parent of native Window handle.
    virtual Aspect_Drawable NativeParentHandle() const override;

    // Applies the resizing to the window <me>
    virtual Aspect_TypeOfResize DoResize() override;

    // Returns True if the window <me> is opened
    // and False if the window is closed.
    virtual Standard_Boolean IsMapped() const override;

    // Apply the mapping change to the window <me>
    // and returns TRUE if the window is mapped at screen.
    virtual Standard_Boolean DoMapping() const override { return Standard_True; }

    // Opens the window <me>.
    virtual void Map() const override;

    //! Closes the window <me>.
    virtual void Unmap() const override;

    virtual void Position( Standard_Integer& theX1,
                           Standard_Integer& theY1,
                           Standard_Integer& theX2,
                           Standard_Integer& theY2
                           ) const override;

    // Returns the window RATIO equal to the physical
    // WIDTH/HEIGHT dimensions.
    virtual Standard_Real Ratio() const override;

    virtual void Size(Standard_Integer& theWidth, Standard_Integer& theHeight ) const override;

    virtual Aspect_FBConfig NativeFBConfig() const Standard_OVERRIDE { return NULL; }

protected:
    Standard_Integer _xLeft;
    Standard_Integer _yTop;
    Standard_Integer _xRight;
    Standard_Integer _yBottom;
    const Standard_Real _devPx;
    QWidget* _myWidget;
};

#endif // OCCTWINDOW_H
