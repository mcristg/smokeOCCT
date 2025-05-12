//tkernel
#ifndef HANDLE_STANDARD_TRANSIENT
#define HANDLE_STANDARD_TRANSIENT

#include <AIS_InteractiveContext.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_Shape.hxx>
#include <AIS_Selection.hxx>
#include <Aspect_DisplayConnection.hxx>
#include <Aspect_Grid.hxx>
#include <Aspect_Window.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom2d_Ellipse.hxx>
#include <Geom2d_Geometry.hxx>
#include <Geom2d_TrimmedCurve.hxx>
#include <Geom_Surface.hxx>
#include <Graphic3d_ShaderProgram.hxx>
#include <Graphic3d_AspectText3d.hxx>
#include <Graphic3d_Camera.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_HatchStyle.hxx>
#include <Graphic3d_MarkerImage.hxx>
#include <Graphic3d_SequenceOfHClipPlane.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_TextureEnv.hxx>
#include <Graphic3d_TextureMap.hxx>
#include <Graphic3d_TransformPers.hxx>
#include <Graphic3d_ViewAffinity.hxx>
#include <Image_CompressedPixMap.hxx>
#include <Image_PixMap.hxx>
#include <Prs3d_Drawer.hxx>
#include <Prs3d_ShadingAspect.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_Presentation.hxx>
#include <Prs3d_TextAspect.hxx>
#include <PrsMgr_Presentation.hxx>
#include <PrsMgr_PresentationManager.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <SelectMgr_AndOrFilter.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_SelectableObject.hxx>
#include <SelectMgr_Selection.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <SelectMgr_ViewerSelector.hxx>
#include <Standard_Type.hxx>
#include <TopLoc_Datum3D.hxx>
#include <TopoDS_TShape.hxx>
#include <V3d_Trihedron.hxx>
#include <V3d_View.hxx>
#include <V3d_Viewer.hxx>


#define DEFINE_GET(C1) static C1 *get_##C1(void* handle) { return dynamic_cast<C1*>(static_cast<opencascade::handle< C1 >*>(handle)->get());}

class handle
{
public:
  handle(Standard_Transient *theobj) {hobj = theobj;}
  handle(opencascade::handle< Standard_Transient > &theobj) {hobj = theobj;}
  Standard_Transient *get() {return hobj.get();}
  bool IsNull(void) {return hobj.IsNull();}
  void Nullify() {hobj.Nullify();}
  opencascade::handle< Standard_Transient >& get_handle() {return hobj;}
  static Standard_Transient *get(void* handle) {return dynamic_cast<Standard_Transient*>(static_cast<opencascade::handle< Standard_Transient >*>(handle)->get());}
  static bool IsNull(void* handle) {return static_cast<opencascade::handle< Standard_Transient >*>(handle)->IsNull();}
  static void Nullify(void* handle) {static_cast<opencascade::handle< Standard_Transient >*>(handle)->Nullify();}

  DEFINE_GET(AIS_InteractiveContext)
  DEFINE_GET(AIS_InteractiveObject)
  DEFINE_GET(AIS_Shape)
  DEFINE_GET(AIS_Selection)
  DEFINE_GET(Aspect_Grid)
  DEFINE_GET(Aspect_DisplayConnection)
  DEFINE_GET(Aspect_Window)
  DEFINE_GET(Geom_CylindricalSurface)
  DEFINE_GET(Geom2d_Curve)
  DEFINE_GET(Geom2d_Ellipse)
  DEFINE_GET(Geom2d_Geometry)
  DEFINE_GET(Geom2d_TrimmedCurve)
  DEFINE_GET(Geom_Surface)
  DEFINE_GET(Graphic3d_AspectText3d)
  DEFINE_GET(Graphic3d_Camera)
  DEFINE_GET(Graphic3d_GraphicDriver)
  DEFINE_GET(Graphic3d_HatchStyle)
  DEFINE_GET(Graphic3d_MarkerImage)
  DEFINE_GET(Graphic3d_ShaderProgram)
  DEFINE_GET(Graphic3d_SequenceOfHClipPlane)
  DEFINE_GET(Graphic3d_Structure)
  DEFINE_GET(Graphic3d_StructureManager)
  DEFINE_GET(Graphic3d_TextureEnv)
  DEFINE_GET(Graphic3d_TextureMap)
  DEFINE_GET(Graphic3d_TextureParams)
  DEFINE_GET(Graphic3d_TextureSet)
  DEFINE_GET(Graphic3d_TransformPers)
  DEFINE_GET(Graphic3d_ViewAffinity)
  DEFINE_GET(Image_CompressedPixMap)
  DEFINE_GET(Image_PixMap)
  DEFINE_GET(NCollection_Buffer)
  DEFINE_GET(Prs3d_Drawer)
  DEFINE_GET(Prs3d_LineAspect)
  DEFINE_GET(Prs3d_ShadingAspect)
  DEFINE_GET(Prs3d_Presentation)
  DEFINE_GET(Prs3d_TextAspect)
  DEFINE_GET(PrsMgr_Presentation)
  DEFINE_GET(PrsMgr_PresentationManager)
  DEFINE_GET(Select3D_SensitiveEntity)
  DEFINE_GET(SelectMgr_AndOrFilter)
  DEFINE_GET(SelectMgr_EntityOwner)
  DEFINE_GET(SelectMgr_SelectableObject)
  DEFINE_GET(SelectMgr_Selection)
  DEFINE_GET(SelectMgr_SelectionManager)
  DEFINE_GET(SelectMgr_ViewerSelector)
  
  DEFINE_GET(Standard_Transient)  
  DEFINE_GET(Standard_Type)
  
  DEFINE_GET(TopLoc_Datum3D)
  DEFINE_GET(TopoDS_TShape)
  DEFINE_GET(V3d_Trihedron)
  DEFINE_GET(V3d_View)
  DEFINE_GET(V3d_Viewer)
private:
  opencascade::handle< Standard_Transient > hobj;
};


#endif
