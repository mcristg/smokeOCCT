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
  Make_TopTools_ListOfShape() {}
  
  const NCollection_List<TopoDS_Shape>& get(void) {return ListOfShape;}
  
  TopoDS_Shape& Append(const TopoDS_Shape& item) 
  {
    return ListOfShape.Append(item);
  }
  
  static TopoDS_Shape& Append(TopTools_ListOfShape &listOfShape, const TopoDS_Shape& item)
  {
    return listOfShape.Append(item);
  }
  
  TopoDS_Shape& First(void)
  {
    return ListOfShape.First();
  }
  
  static TopoDS_Shape& First(TopTools_ListOfShape &listOfShape)
  {
    return listOfShape.First();
  }
   
  TopoDS_Shape& Prepend(const TopoDS_Shape& item)
  {
    return ListOfShape.Prepend(item);
  }

  static TopoDS_Shape& Prepend(TopTools_ListOfShape &listOfShape, const TopoDS_Shape& item)
  {
    return listOfShape.Prepend(item);
  }

 private:
 NCollection_List< TopoDS_Shape > ListOfShape;
};

// wrapper to typedef NCollection_IndexedDataMap< TopoDS_Shape, TopTools_ListOfShape, TopTools_ShapeMapHasher > TopTools_IndexedDataMapOfShapeListOfShape
#include <TopTools_IndexedDataMapOfShapeListOfShape.hxx>

class Make_TopTools_IndexedDataMapOfShapeListOfShape {
 public:
  Make_TopTools_IndexedDataMapOfShapeListOfShape() {}
  
  const TopTools_IndexedDataMapOfShapeListOfShape & get(void)
  {
    return IndexedDataMapOfShapeListOfShape;
  }
  
  Standard_Integer Add(const TopoDS_Shape &theKey1, const TopTools_ListOfShape &theItem)
  {
    return IndexedDataMapOfShapeListOfShape.Add(theKey1,theItem);
  }
  
  Standard_Boolean Contains(const TopoDS_Shape &theKey1)
  {
    return IndexedDataMapOfShapeListOfShape.Contains(theKey1);
  }
 
  void Substitute(const Standard_Integer theIndex, const TopoDS_Shape &theKey1, const TopTools_ListOfShape &theItem)
  {
    IndexedDataMapOfShapeListOfShape.Substitute(theIndex,theKey1,theItem);
  }
   
  void Swap(const Standard_Integer theIndex1, const Standard_Integer theIndex2)
  {
    IndexedDataMapOfShapeListOfShape.Swap(theIndex1,theIndex2);
  }
  
  void RemoveLast(void)
  {
    IndexedDataMapOfShapeListOfShape.RemoveLast();
  }
  
  void RemoveFromIndex(const Standard_Integer theIndex)
  {
    IndexedDataMapOfShapeListOfShape.RemoveFromIndex(theIndex);
  }
   
  void RemoveKey(const TopoDS_Shape &theKey1)
  {
    IndexedDataMapOfShapeListOfShape.RemoveKey(theKey1);
  }
 
  const TopoDS_Shape* FindKey(const Standard_Integer theIndex)
  {
    return &IndexedDataMapOfShapeListOfShape.FindKey(theIndex);
  }
 
  const TopTools_ListOfShape* FindFromIndex(const Standard_Integer theIndex)
  {
    return &IndexedDataMapOfShapeListOfShape.FindFromIndex(theIndex);
  }
  
  TopTools_ListOfShape& ChangeFromIndex(const Standard_Integer theIndex)
  {
    return IndexedDataMapOfShapeListOfShape.ChangeFromIndex(theIndex);
  }
 
  const TopTools_ListOfShape* FindFromKey(const TopoDS_Shape &theKey1)
  {
    return &IndexedDataMapOfShapeListOfShape.FindFromKey(theKey1);
  }
 
  TopTools_ListOfShape& ChangeFromKey(const TopoDS_Shape &theKey1)
  {
    return IndexedDataMapOfShapeListOfShape.ChangeFromKey(theKey1);
  }
  
  const TopTools_ListOfShape* Seek(const TopoDS_Shape &theKey1)
  {
    return IndexedDataMapOfShapeListOfShape.Seek(theKey1);
  }
 
  TopTools_ListOfShape* ChangeSeek(const TopoDS_Shape &theKey1)
  {
    return IndexedDataMapOfShapeListOfShape.ChangeSeek(theKey1);
  }
 
  Standard_Boolean FindFromKey(const TopoDS_Shape &theKey1, TopTools_ListOfShape &theValue)
  {
    return IndexedDataMapOfShapeListOfShape.FindFromKey(theKey1,theValue);
  }
 
  void Clear(const Standard_Boolean doReleaseMemory=Standard_False)
  {
    IndexedDataMapOfShapeListOfShape.Clear(doReleaseMemory);
  }
  
  Standard_Integer Size(void)
  {
    return IndexedDataMapOfShapeListOfShape.Size();
  } 
  
  Standard_Integer NbBuckets(void)
  {
    return IndexedDataMapOfShapeListOfShape.NbBuckets();
  }
 
  Standard_Integer Extent(void)
  {
    return IndexedDataMapOfShapeListOfShape.Extent();
  }
 
  Standard_Boolean IsEmpty(void)
  {
    return IndexedDataMapOfShapeListOfShape.IsEmpty();
  }
  
  static Standard_Integer Add(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                              const TopoDS_Shape &theKey1,
                              const TopTools_ListOfShape &theItem)
  {
    return ListOfShape.Add(theKey1,theItem);
  }
 
  static Standard_Boolean Contains(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                                   const TopoDS_Shape &theKey1)
  {
    return ListOfShape.Contains(theKey1);
  }
   
  static void Substitute(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape, 
                         const Standard_Integer theIndex, const TopoDS_Shape &theKey1,
                         const TopTools_ListOfShape &theItem)
  {
    ListOfShape.Substitute(theIndex,theKey1,theItem);
  }                         
 
  static void Swap(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                   const Standard_Integer theIndex1,
                   const Standard_Integer theIndex2)
  {
    ListOfShape.Swap(theIndex1,theIndex2);
  }  
 
  static void RemoveLast(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape)
  {
    ListOfShape.RemoveLast();
  }  
  
  static void RemoveFromIndex(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                              const Standard_Integer theIndex)
  {
    ListOfShape.RemoveFromIndex(theIndex);
  }  
  
  static void RemoveKey(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                        const TopoDS_Shape &theKey1)
  {
    ListOfShape.RemoveKey(theKey1);
  }
   
  static const TopoDS_Shape& FindKey(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                                     const Standard_Integer theIndex)
  {
    return ListOfShape.FindKey(theIndex);
  }
   
  static const TopTools_ListOfShape& FindFromIndex(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                                                   const Standard_Integer theIndex)
  {
    return ListOfShape.FindFromIndex(theIndex);
  }

  static TopTools_ListOfShape& ChangeFromIndex(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                                               const Standard_Integer theIndex)
  {
    return ListOfShape.ChangeFromIndex(theIndex);
  }

  static const TopTools_ListOfShape& FindFromKey(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                                                 const TopoDS_Shape &theKey1)
  {
    return ListOfShape.FindFromKey(theKey1);
  }
    
  static TopTools_ListOfShape& ChangeFromKey(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                                             const TopoDS_Shape &theKey1)
  {
    return ListOfShape.ChangeFromKey(theKey1);
  }
  
  static const TopTools_ListOfShape* Seek(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                                          const TopoDS_Shape &theKey1)
  {
    return ListOfShape.Seek(theKey1);
  }
  
  static TopTools_ListOfShape* ChangeSeek(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                                          const TopoDS_Shape &theKey1)
  {
    return ListOfShape.ChangeSeek(theKey1);
  }

  static Standard_Boolean FindFromKey(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                                      const TopoDS_Shape &theKey1,
                                      TopTools_ListOfShape &theValue)
  {
    return ListOfShape.FindFromKey(theKey1, theValue);
  }
 
  static void Clear(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape,
                    const Standard_Boolean doReleaseMemory=Standard_False)
  {
    ListOfShape.Clear(doReleaseMemory);
  }  
    
  static Standard_Integer Size(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape)
  {
    return ListOfShape.Size();
  }
 
  static Standard_Integer NbBuckets(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape)
  {
    return ListOfShape.NbBuckets();
  }
  
  static Standard_Integer Extent(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape)
  {
    return ListOfShape.Extent();
  }
  
  static Standard_Boolean IsEmpty(TopTools_IndexedDataMapOfShapeListOfShape& ListOfShape)
  {
    return ListOfShape.IsEmpty();
  }
     
 private: 
  TopTools_IndexedDataMapOfShapeListOfShape IndexedDataMapOfShapeListOfShape;
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


