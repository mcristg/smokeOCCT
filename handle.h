//tkernel
#ifndef HANDLE_STANDARD_TRANSIENT
#define HANDLE_STANDARD_TRANSIENT

#include <AIS_InteractiveContext.hxx>
#include <AIS_Shape.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom2d_Ellipse.hxx>
#include <Geom_Surface.hxx>
#include <Geom2d_TrimmedCurve.hxx>
#include <Graphic3d_SequenceOfHClipPlane.hxx>
#include <Graphic3d_TransformPers.hxx>
#include <Graphic3d_ViewAffinity.hxx>
#include <Prs3d_Drawer.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_Presentation.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_Selection.hxx>
#include <Standard_Type.hxx>
#include <TopLoc_Datum3D.hxx>

#define DEFINE_GET(C1) static C1 *get_##C1(void* handle) { return dynamic_cast<C1*>(static_cast<opencascade::handle< C1 >*>(handle)->get());}

class handle
{
public:
  handle(Standard_Transient *theobj) {hobj = theobj;}
  Standard_Transient *get() {return hobj.get();}
  bool IsNull(void) {return hobj.IsNull();}
  void Nullify() {hobj.Nullify();}
  opencascade::handle< Standard_Transient >& get_handle() {return hobj;}
  static Standard_Transient *get(void* handle) {return dynamic_cast<Standard_Transient*>(static_cast<opencascade::handle< Standard_Transient >*>(handle)->get());}
  static bool IsNull(void* handle) {return static_cast<opencascade::handle< Standard_Transient >*>(handle)->IsNull();}
  static void Nullify(void* handle) {static_cast<opencascade::handle< Standard_Transient >*>(handle)->Nullify();}

  DEFINE_GET(AIS_InteractiveContext)
  DEFINE_GET(AIS_Shape)
  DEFINE_GET(Geom_CylindricalSurface)
  DEFINE_GET(Geom2d_Ellipse)
  DEFINE_GET(Geom_Surface)
  DEFINE_GET(Geom2d_TrimmedCurve)
  DEFINE_GET(Graphic3d_SequenceOfHClipPlane)
  DEFINE_GET(Graphic3d_TransformPers)
  DEFINE_GET(Graphic3d_ViewAffinity)
  DEFINE_GET(Prs3d_Drawer)
  DEFINE_GET(Prs3d_LineAspect)
  DEFINE_GET(Prs3d_Presentation)
  DEFINE_GET(SelectMgr_Selection)
  DEFINE_GET(Standard_Type)
  DEFINE_GET(TopLoc_Datum3D)
private:
  opencascade::handle< Standard_Transient > hobj;
};


#endif
