
#include <BRep_Builder.hxx>
#include <BRep_Curve3D.hxx>
#include <BRep_CurveOn2Surfaces.hxx>
#include <BRep_CurveOnClosedSurface.hxx>
#include <BRep_CurveOnSurface.hxx>
#include <BRep_CurveRepresentation.hxx>
#include <BRep_GCurve.hxx>
#include <BRep_PointOnCurve.hxx>
#include <BRep_PointOnCurveOnSurface.hxx>
#include <BRep_PointOnSurface.hxx>
#include <BRep_PointRepresentation.hxx>
#include <BRep_PointsOnSurface.hxx>
#include <BRep_Polygon3D.hxx>
#include <BRep_PolygonOnClosedSurface.hxx>
#include <BRep_PolygonOnClosedTriangulation.hxx>
#include <BRep_PolygonOnSurface.hxx>
#include <BRep_PolygonOnTriangulation.hxx>
#include <BRep_TEdge.hxx>
#include <BRep_TFace.hxx>
#include <BRep_Tool.hxx>
#include <BRep_TVertex.hxx>
#include <BRepAdaptor_CompCurve.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <BRepAdaptor_Curve2d.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepLProp.hxx>
#include <BRepLProp_CLProps.hxx>
#include <BRepLProp_CurveTool.hxx>
#include <BRepLProp_SLProps.hxx>
#include <BRepLProp_SurfaceTool.hxx>
#include <BRepTools.hxx>
#include <BRepTools_CopyModification.hxx>
#include <BRepTools_GTrsfModification.hxx>
#include <BRepTools_History.hxx>
#include <BRepTools_Modification.hxx>
#include <BRepTools_Modifier.hxx>
#include <BRepTools_NurbsConvertModification.hxx>
#include <BRepTools_PurgeLocations.hxx>
#include <BRepTools_Quilt.hxx>
#include <BRepTools_ReShape.hxx>
#include <BRepTools_ShapeSet.hxx>
#include <BRepTools_Substitution.hxx>
#include <BRepTools_TrsfModification.hxx>
#include <BRepTools_WireExplorer.hxx>
#include <BinTools.hxx>
#include <BinTools_Curve2dSet.hxx>
#include <BinTools_CurveSet.hxx>
#include <BinTools_IStream.hxx>
#include <BinTools_LocationSet.hxx>
#include <BinTools_OStream.hxx>
#include <BinTools_ShapeReader.hxx>
#include <BinTools_ShapeSet.hxx>
#include <BinTools_ShapeSetBase.hxx>
#include <BinTools_ShapeWriter.hxx>
#include <BinTools_SurfaceSet.hxx>
#include <TopExp.hxx>
#include <TopExp_Explorer.hxx>
#include <TopTools.hxx>
#include <TopTools_ListOfShape.hxx>
#include <TopTools_LocationSet.hxx>
#include <TopTools_MutexForShapeProvider.hxx>
#include <TopTools_OrientedShapeMapHasher.hxx>
#include <TopTools_ShapeMapHasher.hxx>
#include <TopTools_ShapeSet.hxx>
#include <TopoDS.hxx>
#include <TopoDS_AlertAttribute.hxx>
#include <TopoDS_AlertWithShape.hxx>
#include <TopoDS_Builder.hxx>
#include <TopoDS_Compound.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_HShape.hxx>
#include <TopoDS_Iterator.hxx>
#include <TopoDS_Shape.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_TCompound.hxx>
#include <TopoDS_TCompSolid.hxx>
#include <TopoDS_TEdge.hxx>
#include <TopoDS_TFace.hxx>
#include <TopoDS_TShape.hxx>
#include <TopoDS_TShell.hxx>
#include <TopoDS_TSolid.hxx>
#include <TopoDS_TVertex.hxx>
#include <TopoDS_TWire.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Wire.hxx>

// wrapper to typedef NCollection_List< TopoDS_Shape > 	TopTools_ListOfShape
class Make_TopTools_ListOfShape {
 public:
  Make_TopTools_ListOfShape() {_ListOfShape = new NCollection_List< TopoDS_Shape >();}
  Make_TopTools_ListOfShape(TopTools_ListOfShape& ListOfShape)
  {
    _ListOfShape = &ListOfShape;
  }
  ~Make_TopTools_ListOfShape() { delete _ListOfShape;}
  NCollection_List<TopoDS_Shape>* Get(void) {return _ListOfShape;}
  
  TopoDS_Shape& Append(const TopoDS_Shape& item) 
  {
    return _ListOfShape->Append(item);
  }
  
  TopoDS_Shape& Prepend(const TopoDS_Shape& item)
  {
    return _ListOfShape->Prepend(item);
  }
  
  TopTools_ListOfShape* ListOfShape(void) {return _ListOfShape;}
 private:
 NCollection_List< TopoDS_Shape > * _ListOfShape;
};


#include <../handle_class.h>

DEFINE_HANDLECLASS(BRep_Curve3D)
DEFINE_HANDLECLASS(BRep_CurveOn2Surfaces)
DEFINE_HANDLECLASS(BRep_CurveOnClosedSurface)
DEFINE_HANDLECLASS(BRep_CurveOnSurface)
DEFINE_HANDLECLASS(BRep_CurveRepresentation)
DEFINE_HANDLECLASS(BRep_GCurve)
DEFINE_HANDLECLASS(BRep_PointOnCurve)
DEFINE_HANDLECLASS(BRep_PointOnCurveOnSurface)
DEFINE_HANDLECLASS(BRep_PointOnSurface)
DEFINE_HANDLECLASS(BRep_PointRepresentation)
DEFINE_HANDLECLASS(BRep_PointsOnSurface)
DEFINE_HANDLECLASS(BRep_Polygon3D)
DEFINE_HANDLECLASS(BRep_PolygonOnClosedSurface)
DEFINE_HANDLECLASS(BRep_PolygonOnClosedTriangulation)
DEFINE_HANDLECLASS(BRep_PolygonOnSurface)
DEFINE_HANDLECLASS(BRep_PolygonOnTriangulation)
DEFINE_HANDLECLASS(BRep_TEdge)
DEFINE_HANDLECLASS(BRep_TFace)
DEFINE_HANDLECLASS(BRep_TVertex)
DEFINE_HANDLECLASS(BRepAdaptor_CompCurve)
DEFINE_HANDLECLASS(BRepAdaptor_Curve)
DEFINE_HANDLECLASS(BRepAdaptor_Curve2d)
DEFINE_HANDLECLASS(BRepAdaptor_Surface)
DEFINE_HANDLECLASS(BRepTools_CopyModification)
DEFINE_HANDLECLASS(BRepTools_GTrsfModification)
DEFINE_HANDLECLASS(BRepTools_History)
DEFINE_HANDLECLASS(BRepTools_Modification)
DEFINE_HANDLECLASS(BRepTools_NurbsConvertModification)
DEFINE_HANDLECLASS(BRepTools_ReShape)
DEFINE_HANDLECLASS(BRepTools_TrsfModification)
DEFINE_HANDLECLASS(TopoDS_HShape)
DEFINE_HANDLECLASS(TopoDS_TCompound)
DEFINE_HANDLECLASS(TopoDS_TCompSolid)
DEFINE_HANDLECLASS(TopoDS_TEdge)
DEFINE_HANDLECLASS(TopoDS_TFace)
DEFINE_HANDLECLASS(TopoDS_TShape)
DEFINE_HANDLECLASS(TopoDS_TShell)
DEFINE_HANDLECLASS(TopoDS_TSolid)
DEFINE_HANDLECLASS(TopoDS_TVertex)
DEFINE_HANDLECLASS(TopoDS_TWire)


