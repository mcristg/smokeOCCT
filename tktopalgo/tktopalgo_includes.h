#include <BRepApprox_Approx.hxx>
#include <BRepApprox_ApproxLine.hxx>
#include <BRepApprox_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_MyBSplGradientOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_MyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_MyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParFunctionOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientbisOfTheComputeLineOfApprox.hxx>
#include <BRepApprox_ResConstraintOfMyGradientOfTheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_SurfaceTool.hxx>
#include <BRepApprox_TheComputeLineBezierOfApprox.hxx>
#include <BRepApprox_TheComputeLineOfApprox.hxx>
#include <BRepApprox_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx>
#include <BRepApprox_TheImpPrmSvSurfacesOfApprox.hxx>
#include <BRepApprox_TheInt2SOfThePrmPrmSvSurfacesOfApprox.hxx>
#include <BRepApprox_TheMultiLineOfApprox.hxx>
#include <BRepApprox_TheMultiLineToolOfApprox.hxx>
#include <BRepApprox_ThePrmPrmSvSurfacesOfApprox.hxx>
#include <BRepApprox_TheZerImpFuncOfTheImpPrmSvSurfacesOfApprox.hxx>
#include <BRepBndLib.hxx>
#include <BRepBuilderAPI.hxx>
#include <BRepBuilderAPI_BndBoxTreeSelector.hxx>
#include <BRepBuilderAPI_Collect.hxx>
#include <BRepBuilderAPI_Command.hxx>
#include <BRepBuilderAPI_Copy.hxx>
#include <BRepBuilderAPI_FastSewing.hxx>
#include <BRepBuilderAPI_FindPlane.hxx>
#include <BRepBuilderAPI_GTransform.hxx>
#include <BRepBuilderAPI_MakeEdge.hxx>
#include <BRepBuilderAPI_MakeEdge2d.hxx>
#include <BRepBuilderAPI_MakeFace.hxx>
#include <BRepBuilderAPI_MakePolygon.hxx>
#include <BRepBuilderAPI_MakeShape.hxx>
#include <BRepBuilderAPI_MakeShapeOnMesh.hxx>
#include <BRepBuilderAPI_MakeShell.hxx>
#include <BRepBuilderAPI_MakeSolid.hxx>
#include <BRepBuilderAPI_MakeVertex.hxx>
#include <BRepBuilderAPI_MakeWire.hxx>
#include <BRepBuilderAPI_ModifyShape.hxx>
#include <BRepBuilderAPI_NurbsConvert.hxx>
#include <BRepBuilderAPI_Sewing.hxx>
#include <BRepBuilderAPI_Transform.hxx>
#include <BRepBuilderAPI_VertexInspector.hxx>
#include <BRepCheck.hxx>
#include <BRepCheck_Analyzer.hxx>
#include <BRepCheck_Edge.hxx>
#include <BRepCheck_Face.hxx>
#include <BRepCheck_Result.hxx>
#include <BRepCheck_Shell.hxx>
#include <BRepCheck_Solid.hxx>
#include <BRepCheck_Vertex.hxx>
#include <BRepCheck_Wire.hxx>
#include <BRepClass_Edge.hxx>
#include <BRepClass_FaceClassifier.hxx>
#include <BRepClass_FaceExplorer.hxx>
#include <BRepClass_FacePassiveClassifier.hxx>
#include <BRepClass_FClass2dOfFClassifier.hxx>
#include <BRepClass_FClassifier.hxx>
#include <BRepClass_Intersector.hxx>
#include <BRepClass3d.hxx>
#include <BRepClass3d_BndBoxTree.hxx>
#include <BRepClass3d_Intersector3d.hxx>
#include <BRepClass3d_SClassifier.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <BRepClass3d_SolidExplorer.hxx>
#include <BRepClass3d_SolidPassiveClassifier.hxx>
#include <BRepClass_Edge.hxx>
#include <BRepClass_FaceClassifier.hxx>
#include <BRepClass_FaceExplorer.hxx>
#include <BRepClass_FacePassiveClassifier.hxx>
#include <BRepClass_FClass2dOfFClassifier.hxx>
#include <BRepClass_FClassifier.hxx>
#include <BRepClass_Intersector.hxx>
#include <BRepExtrema_DistanceSS.hxx>
#include <BRepExtrema_DistShapeShape.hxx>
#include <BRepExtrema_ElementFilter.hxx>
#include <BRepExtrema_ExtCC.hxx>
#include <BRepExtrema_ExtCF.hxx>
#include <BRepExtrema_ExtFF.hxx>
#include <BRepExtrema_ExtPC.hxx>
#include <BRepExtrema_ExtPF.hxx>
#include <BRepExtrema_OverlapTool.hxx>
#include <BRepExtrema_Poly.hxx>
#include <BRepExtrema_ProximityDistTool.hxx>
#include <BRepExtrema_ProximityValueTool.hxx>
#include <BRepExtrema_SelfIntersection.hxx>
#include <BRepExtrema_ShapeProximity.hxx>
#include <BRepExtrema_SolutionElem.hxx>
#include <BRepExtrema_TriangleSet.hxx>
#include <BRepGProp.hxx>
#include <BRepGProp_Cinert.hxx>
#include <BRepGProp_Domain.hxx>
#include <BRepGProp_EdgeTool.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_Gauss.hxx>
#include <BRepGProp_MeshCinert.hxx>
#include <BRepGProp_MeshProps.hxx>
#include <BRepGProp_Sinert.hxx>
#include <BRepGProp_TFunction.hxx>
#include <BRepGProp_UFunction.hxx>
#include <BRepGProp_Vinert.hxx>
#include <BRepGProp_VinertGK.hxx>
#include <BRepIntCurveSurface_Inter.hxx>
#include <BRepLib.hxx>
#include <BRepLib_CheckCurveOnSurface.hxx>
#include <BRepLib_Command.hxx>
#include <BRepLib_FindSurface.hxx>
#include <BRepLib_FuseEdges.hxx>
#include <BRepLib_MakeEdge.hxx>
#include <BRepLib_MakeEdge2d.hxx>
#include <BRepLib_MakeFace.hxx>
#include <BRepLib_MakePolygon.hxx>
#include <BRepLib_MakeShape.hxx>
#include <BRepLib_MakeShell.hxx>
#include <BRepLib_MakeSolid.hxx>
#include <BRepLib_MakeVertex.hxx>
#include <BRepLib_MakeWire.hxx>
#include <BRepLib_PointCloudShape.hxx>
#include <BRepLib_ToolTriangulatedShape.hxx>
#include <BRepLib_ValidateEdge.hxx>
#include <BRepMAT2d_BisectingLocus.hxx>
#include <BRepMAT2d_Explorer.hxx>
#include <BRepMAT2d_LinkTopoBilo.hxx>
#include <BRepTopAdaptor_FClass2d.hxx>
#include <BRepTopAdaptor_HVertex.hxx>
#include <BRepTopAdaptor_Tool.hxx>
#include <BRepTopAdaptor_TopolTool.hxx>
#include <Bisector.hxx>
#include <Bisector_Bisec.hxx>
#include <Bisector_BisecAna.hxx>
#include <Bisector_BisecCC.hxx>
#include <Bisector_BisecPC.hxx>
#include <Bisector_Curve.hxx>
#include <Bisector_FunctionH.hxx>
#include <Bisector_FunctionInter.hxx>
#include <Bisector_Inter.hxx>
#include <Bisector_PointOnBis.hxx>
#include <Bisector_PolyBis.hxx>
#include <IntCurvesFace_Intersector.hxx>
#include <IntCurvesFace_ShapeIntersector.hxx>
#include <MAT_Arc.hxx>
#include <MAT_BasicElt.hxx>
#include <MAT_Bisector.hxx>
#include <MAT_Edge.hxx>
#include <MAT_Graph.hxx>
#include <MAT_ListOfBisector.hxx>
#include <MAT_ListOfEdge.hxx>
#include <MAT_Node.hxx>
#include <MAT_TListNodeOfListOfBisector.hxx>
#include <MAT_TListNodeOfListOfEdge.hxx>
#include <MAT_Zone.hxx>
#include <MAT2d_BiInt.hxx>
#include <MAT2d_Circuit.hxx>
#include <MAT2d_Connexion.hxx>
#include <MAT2d_CutCurve.hxx>
#include <MAT2d_MapBiIntHasher.hxx>
#include <MAT2d_Mat2d.hxx>
#include <MAT2d_MiniPath.hxx>
#include <MAT2d_Tool2d.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(BRepApprox_ApproxLine)
DEFINE_HANDLECLASS(BRepBuilderAPI_FastSewing)
DEFINE_HANDLECLASS(BRepBuilderAPI_Sewing)
DEFINE_HANDLECLASS(BRepCheck_Edge)
DEFINE_HANDLECLASS(BRepCheck_Face)
DEFINE_HANDLECLASS(BRepCheck_Result)
DEFINE_HANDLECLASS(BRepCheck_Shell)
DEFINE_HANDLECLASS(BRepCheck_Solid)
DEFINE_HANDLECLASS(BRepCheck_Vertex)
DEFINE_HANDLECLASS(BRepCheck_Wire)
DEFINE_HANDLECLASS(BRepExtrema_TriangleSet)
DEFINE_HANDLECLASS(BRepTopAdaptor_HVertex)
DEFINE_HANDLECLASS(BRepTopAdaptor_TopolTool)
DEFINE_HANDLECLASS(Bisector_BisecAna)
DEFINE_HANDLECLASS(Bisector_BisecCC)
DEFINE_HANDLECLASS(Bisector_BisecPC)
DEFINE_HANDLECLASS(Bisector_Curve)
DEFINE_HANDLECLASS(IntCurvesFace_Intersector)
DEFINE_HANDLECLASS(MAT_Arc)
DEFINE_HANDLECLASS(MAT_BasicElt)
DEFINE_HANDLECLASS(MAT_Bisector)
DEFINE_HANDLECLASS(MAT_Edge)
DEFINE_HANDLECLASS(MAT_Graph)
DEFINE_HANDLECLASS(MAT_ListOfBisector)
DEFINE_HANDLECLASS(MAT_ListOfEdge)
DEFINE_HANDLECLASS(MAT_Node)
DEFINE_HANDLECLASS(MAT_TListNodeOfListOfBisector)
DEFINE_HANDLECLASS(MAT_TListNodeOfListOfEdge)
DEFINE_HANDLECLASS(MAT_Zone)
DEFINE_HANDLECLASS(MAT2d_Circuit)
DEFINE_HANDLECLASS(MAT2d_Connexion)

