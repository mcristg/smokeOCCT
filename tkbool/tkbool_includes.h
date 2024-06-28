#include <BRepAlgo.hxx>
#include <BRepAlgo_AsDes.hxx>
#include <BRepAlgo_FaceRestrictor.hxx>
#include <BRepAlgo_Image.hxx>
#include <BRepAlgo_Loop.hxx>
#include <BRepAlgo_NormalProjection.hxx>
#include <BRepFill.hxx>
#include <BRepFill_ACRLaw.hxx>
#include <BRepFill_AdvancedEvolved.hxx>
#include <BRepFill_ApproxSeewing.hxx>
#include <BRepFill_CompatibleWires.hxx>
#include <BRepFill_ComputeCLine.hxx>
#include <BRepFill_CurveConstraint.hxx>
#include <BRepFill_Draft.hxx>
#include <BRepFill_DraftLaw.hxx>
#include <BRepFill_Edge3DLaw.hxx>
#include <BRepFill_EdgeFaceAndOrder.hxx>
#include <BRepFill_EdgeOnSurfLaw.hxx>
#include <BRepFill_Evolved.hxx>
#include <BRepFill_FaceAndOrder.hxx>
#include <BRepFill_Filling.hxx>
#include <BRepFill_Generator.hxx>
#include <BRepFill_LocationLaw.hxx>
#include <BRepFill_MultiLine.hxx>
#include <BRepFill_NSections.hxx>
#include <BRepFill_OffsetAncestors.hxx>
#include <BRepFill_OffsetWire.hxx>
#include <BRepFill_Pipe.hxx>
#include <BRepFill_PipeShell.hxx>
#include <BRepFill_Section.hxx>
#include <BRepFill_SectionLaw.hxx>
#include <BRepFill_SectionPlacement.hxx>
#include <BRepFill_ShapeLaw.hxx>
#include <BRepFill_Sweep.hxx>
#include <BRepFill_TrimEdgeTool.hxx>
#include <BRepFill_TrimShellCorner.hxx>
#include <BRepFill_TrimSurfaceTool.hxx>
#include <BRepProj_Projection.hxx>
#include <TopOpeBRep.hxx>
#include <TopOpeBRep_Bipoint.hxx>
#include <TopOpeBRep_DSFiller.hxx>
#include <TopOpeBRep_EdgesIntersector.hxx>
#include <TopOpeBRep_FaceEdgeFiller.hxx>
#include <TopOpeBRep_FaceEdgeIntersector.hxx>
#include <TopOpeBRep_FacesFiller.hxx>
#include <TopOpeBRep_FacesIntersector.hxx>
#include <TopOpeBRep_FFDumper.hxx>
#include <TopOpeBRep_FFTransitionTool.hxx>
#include <TopOpeBRep_GeomTool.hxx>
#include <TopOpeBRep_Hctxee2d.hxx>
#include <TopOpeBRep_Hctxff2d.hxx>
#include <TopOpeBRep_LineInter.hxx>
#include <TopOpeBRep_Point2d.hxx>
#include <TopOpeBRep_PointClassifier.hxx>
#include <TopOpeBRep_PointGeomTool.hxx>
#include <TopOpeBRep_ShapeIntersector.hxx>
#include <TopOpeBRep_ShapeIntersector2d.hxx>
#include <TopOpeBRep_ShapeScanner.hxx>
#include <TopOpeBRep_VPointInter.hxx>
#include <TopOpeBRep_VPointInterIterator.hxx>
#include <TopOpeBRep_WPointInter.hxx>
#include <TopOpeBRep_WPointInterIterator.hxx>
#include <TopOpeBRepBuild_Area1dBuilder.hxx>
#include <TopOpeBRepBuild_Area2dBuilder.hxx>
#include <TopOpeBRepBuild_Area3dBuilder.hxx>
#include <TopOpeBRepBuild_AreaBuilder.hxx>
#include <TopOpeBRepBuild_BlockBuilder.hxx>
#include <TopOpeBRepBuild_BlockIterator.hxx>
#include <TopOpeBRepBuild_Builder.hxx>
#include <TopOpeBRepBuild_Builder1.hxx>
#include <TopOpeBRepBuild_BuilderON.hxx>
#include <TopOpeBRepBuild_CompositeClassifier.hxx>
#include <TopOpeBRepBuild_CorrectFace2d.hxx>
#include <TopOpeBRepBuild_EdgeBuilder.hxx>
#include <TopOpeBRepBuild_FaceAreaBuilder.hxx>
#include <TopOpeBRepBuild_FaceBuilder.hxx>
#include <TopOpeBRepBuild_FuseFace.hxx>
#include <TopOpeBRepBuild_GIter.hxx>
#include <TopOpeBRepBuild_GTool.hxx>
#include <TopOpeBRepBuild_GTopo.hxx>
#include <TopOpeBRepBuild_HBuilder.hxx>
#include <TopOpeBRepBuild_Loop.hxx>
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include <TopOpeBRepBuild_LoopSet.hxx>
#include <TopOpeBRepBuild_Pave.hxx>
#include <TopOpeBRepBuild_PaveClassifier.hxx>
#include <TopOpeBRepBuild_ShapeListOfShape.hxx>
#include <TopOpeBRepBuild_ShapeSet.hxx>
#include <TopOpeBRepBuild_ShellFaceClassifier.hxx>
#include <TopOpeBRepBuild_ShellFaceSet.hxx>
#include <TopOpeBRepBuild_ShellToSolid.hxx>
#include <TopOpeBRepBuild_SolidAreaBuilder.hxx>
#include <TopOpeBRepBuild_Tools.hxx>
#include <TopOpeBRepBuild_Tools2d.hxx>
#include <TopOpeBRepBuild_VertexInfo.hxx>
#include <TopOpeBRepBuild_WireEdgeClassifier.hxx>
#include <TopOpeBRepBuild_WireEdgeSet.hxx>
#include <TopOpeBRepBuild_WireToFace.hxx>
#include <TopOpeBRepDS.hxx>
#include <TopOpeBRepDS_Association.hxx>
#include <TopOpeBRepDS_BuildTool.hxx>
#include <TopOpeBRepDS_Check.hxx>
#include <TopOpeBRepDS_connex.hxx>
#include <TopOpeBRepDS_Curve.hxx>
#include <TopOpeBRepDS_CurveData.hxx>
#include <TopOpeBRepDS_CurveExplorer.hxx>
#include <TopOpeBRepDS_CurveIterator.hxx>
#include <TopOpeBRepDS_CurvePointInterference.hxx>
#include <TopOpeBRepDS_DataStructure.hxx>
#include <TopOpeBRepDS_Dumper.hxx>
#include <TopOpeBRepDS_Edge3dInterferenceTool.hxx>
#include <TopOpeBRepDS_EdgeInterferenceTool.hxx>
#include <TopOpeBRepDS_EdgeVertexInterference.hxx>
#include <TopOpeBRepDS_EIR.hxx>
#include <TopOpeBRepDS_Explorer.hxx>
#include <TopOpeBRepDS_FaceEdgeInterference.hxx>
#include <TopOpeBRepDS_FaceInterferenceTool.hxx>
#include <TopOpeBRepDS_Filter.hxx>
#include <TopOpeBRepDS_FIR.hxx>
#include <TopOpeBRepDS_GapFiller.hxx>
#include <TopOpeBRepDS_GapTool.hxx>
#include <TopOpeBRepDS_GeometryData.hxx>
#include <TopOpeBRepDS_HDataStructure.hxx>
#include <TopOpeBRepDS_Interference.hxx>
#include <TopOpeBRepDS_InterferenceIterator.hxx>
#include <TopOpeBRepDS_InterferenceTool.hxx>
#include <TopOpeBRepDS_ListOfShapeOn1State.hxx>
#include <TopOpeBRepDS_Marker.hxx>
#include <TopOpeBRepDS_Point.hxx>
#include <TopOpeBRepDS_PointData.hxx>
#include <TopOpeBRepDS_PointExplorer.hxx>
#include <TopOpeBRepDS_PointIterator.hxx>
#include <TopOpeBRepDS_Reducer.hxx>
#include <TopOpeBRepDS_ShapeData.hxx>
#include <TopOpeBRepDS_ShapeShapeInterference.hxx>
#include <TopOpeBRepDS_ShapeWithState.hxx>
#include <TopOpeBRepDS_SolidSurfaceInterference.hxx>
#include <TopOpeBRepDS_Surface.hxx>
#include <TopOpeBRepDS_SurfaceCurveInterference.hxx>
#include <TopOpeBRepDS_SurfaceData.hxx>
#include <TopOpeBRepDS_SurfaceExplorer.hxx>
#include <TopOpeBRepDS_SurfaceIterator.hxx>
#include <TopOpeBRepDS_TKI.hxx>
#include <TopOpeBRepDS_TOOL.hxx>
#include <TopOpeBRepDS_Transition.hxx>
#include <TopOpeBRepTool.hxx>
#include <TopOpeBRepTool_AncestorsTool.hxx>
#include <TopOpeBRepTool_box.hxx>
#include <TopOpeBRepTool_BoxSort.hxx>
#include <TopOpeBRepTool_C2DF.hxx>
#include <TopOpeBRepTool_CLASSI.hxx>
#include <TopOpeBRepTool_connexity.hxx>
#include <TopOpeBRepTool_CORRISO.hxx>
#include <TopOpeBRepTool_CurveTool.hxx>
#include <TopOpeBRepTool_face.hxx>
#include <TopOpeBRepTool_FuseEdges.hxx>
#include <TopOpeBRepTool_GeomTool.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopOpeBRepTool_makeTransition.hxx>
#include <TopOpeBRepTool_mkTondgE.hxx>
#include <TopOpeBRepTool_PurgeInternalEdges.hxx>
#include <TopOpeBRepTool_REGUS.hxx>
#include <TopOpeBRepTool_REGUW.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopOpeBRepTool_ShapeTool.hxx>
#include <TopOpeBRepTool_SolidClassifier.hxx>
#include <TopOpeBRepTool_TOOL.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(BRepAlgo_AsDes)
DEFINE_HANDLECLASS(BRepFill_ACRLaw)
DEFINE_HANDLECLASS(BRepFill_CurveConstraint)
DEFINE_HANDLECLASS(BRepFill_DraftLaw)
DEFINE_HANDLECLASS(BRepFill_Edge3DLaw)
DEFINE_HANDLECLASS(BRepFill_EdgeOnSurfLaw)
DEFINE_HANDLECLASS(BRepFill_LocationLaw)
DEFINE_HANDLECLASS(BRepFill_NSections)
DEFINE_HANDLECLASS(BRepFill_PipeShell)
DEFINE_HANDLECLASS(BRepFill_SectionLaw)
DEFINE_HANDLECLASS(BRepFill_ShapeLaw)
DEFINE_HANDLECLASS(TopOpeBRep_FFDumper)
DEFINE_HANDLECLASS(TopOpeBRep_Hctxee2d)
DEFINE_HANDLECLASS(TopOpeBRep_Hctxff2d)
DEFINE_HANDLECLASS(TopOpeBRepBuild_HBuilder)
DEFINE_HANDLECLASS(TopOpeBRepBuild_Loop)
DEFINE_HANDLECLASS(TopOpeBRepBuild_Pave)
DEFINE_HANDLECLASS(TopOpeBRepDS_Association)
DEFINE_HANDLECLASS(TopOpeBRepDS_Check)
DEFINE_HANDLECLASS(TopOpeBRepDS_CurvePointInterference)
DEFINE_HANDLECLASS(TopOpeBRepDS_EdgeVertexInterference)
DEFINE_HANDLECLASS(TopOpeBRepDS_FaceEdgeInterference)
DEFINE_HANDLECLASS(TopOpeBRepDS_GapTool)
DEFINE_HANDLECLASS(TopOpeBRepDS_HDataStructure)
DEFINE_HANDLECLASS(TopOpeBRepDS_Interference)
DEFINE_HANDLECLASS(TopOpeBRepDS_Marker)
DEFINE_HANDLECLASS(TopOpeBRepDS_ShapeShapeInterference)
DEFINE_HANDLECLASS(TopOpeBRepDS_SolidSurfaceInterference)
DEFINE_HANDLECLASS(TopOpeBRepDS_SurfaceCurveInterference)
DEFINE_HANDLECLASS(TopOpeBRepTool_HBoxTool)

