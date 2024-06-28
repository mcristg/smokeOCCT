#include <Contap_ArcFunction.hxx>
#include <Contap_ContAna.hxx>
#include <Contap_Contour.hxx>
#include <Contap_HContTool.hxx>
#include <Contap_HCurve2dTool.hxx>
#include <Contap_Line.hxx>
#include <Contap_Point.hxx>
#include <Contap_SurfFunction.hxx>
#include <Contap_SurfProps.hxx>
#include <Contap_TheIWalking.hxx>
#include <Contap_TheIWLineOfTheIWalking.hxx>
#include <Contap_ThePathPointOfTheSearch.hxx>
#include <Contap_TheSearch.hxx>
#include <Contap_TheSearchInside.hxx>
#include <Contap_TheSegmentOfTheSearch.hxx>
#include <HLRAlgo.hxx>
#include <HLRAlgo_BiPoint.hxx>
#include <HLRAlgo_Coincidence.hxx>
#include <HLRAlgo_EdgeIterator.hxx>
#include <HLRAlgo_EdgesBlock.hxx>
#include <HLRAlgo_EdgeStatus.hxx>
#include <HLRAlgo_Interference.hxx>
#include <HLRAlgo_Intersection.hxx>
#include <HLRAlgo_PolyAlgo.hxx>
#include <HLRAlgo_PolyData.hxx>
#include <HLRAlgo_PolyHidingData.hxx>
#include <HLRAlgo_PolyInternalData.hxx>
#include <HLRAlgo_PolyInternalNode.hxx>
#include <HLRAlgo_PolyInternalSegment.hxx>
#include <HLRAlgo_PolyShellData.hxx>
#include <HLRAlgo_Projector.hxx>
#include <HLRAlgo_WiresBlock.hxx>
#include <HLRAlgo_TriangleData.hxx>
#include <HLRAppli_ReflectLines.hxx>
#include <HLRBRep.hxx>
#include <HLRBRep_Algo.hxx>
#include <HLRBRep_AreaLimit.hxx>
#include <HLRBRep_BCurveTool.hxx>
#include <HLRBRep_BiPnt2D.hxx>
#include <HLRBRep_BiPoint.hxx>
#include <HLRBRep_BSurfaceTool.hxx>
#include <HLRBRep_CInter.hxx>
#include <HLRBRep_CLProps.hxx>
#include <HLRBRep_CLPropsATool.hxx>
#include <HLRBRep_Curve.hxx>
#include <HLRBRep_CurveTool.hxx>
#include <HLRBRep_Data.hxx>
#include <HLRBRep_EdgeBuilder.hxx>
#include <HLRBRep_EdgeData.hxx>
#include <HLRBRep_EdgeFaceTool.hxx>
#include <HLRBRep_EdgeIList.hxx>
#include <HLRBRep_EdgeInterferenceTool.hxx>
#include <HLRBRep_ExactIntersectionPointOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_FaceData.hxx>
#include <HLRBRep_FaceIterator.hxx>
#include <HLRBRep_Hider.hxx>
#include <HLRBRep_HLRToShape.hxx>
#include <HLRBRep_IntConicCurveOfCInter.hxx>
#include <HLRBRep_InterCSurf.hxx>
#include <HLRBRep_InternalAlgo.hxx>
#include <HLRBRep_Intersector.hxx>
#include <HLRBRep_LineTool.hxx>
#include <HLRBRep_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_PCLocFOfTheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_PolyAlgo.hxx>
#include <HLRBRep_PolyHLRToShape.hxx>
#include <HLRBRep_ShapeBounds.hxx>
#include <HLRBRep_ShapeToHLR.hxx>
#include <HLRBRep_SLProps.hxx>
#include <HLRBRep_SLPropsATool.hxx>
#include <HLRBRep_Surface.hxx>
#include <HLRBRep_SurfaceTool.hxx>
#include <HLRBRep_TheCSFunctionOfInterCSurf.hxx>
#include <HLRBRep_TheCurveLocatorOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheExactInterCSurf.hxx>
#include <HLRBRep_TheIntConicCurveOfCInter.hxx>
#include <HLRBRep_TheInterferenceOfInterCSurf.hxx>
#include <HLRBRep_TheIntersectorOfTheIntConicCurveOfCInter.hxx>
#include <HLRBRep_TheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_TheLocateExtPCOfTheProjPCurOfCInter.hxx>
#include <HLRBRep_ThePolygon2dOfTheIntPCurvePCurveOfCInter.hxx>
#include <HLRBRep_ThePolygonOfInterCSurf.hxx>
#include <HLRBRep_ThePolygonToolOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronOfInterCSurf.hxx>
#include <HLRBRep_ThePolyhedronToolOfInterCSurf.hxx>
#include <HLRBRep_TheProjPCurOfCInter.hxx>
#include <HLRBRep_TheQuadCurvExactInterCSurf.hxx>
#include <HLRBRep_TheQuadCurvFuncOfTheQuadCurvExactInterCSurf.hxx>
#include <HLRBRep_VertexList.hxx>
#include <HLRTopoBRep_DSFiller.hxx>
#include <HLRTopoBRep_FaceData.hxx>
#include <HLRTopoBRep_FaceIsoLiner.hxx>
#include <HLRTopoBRep_OutLiner.hxx>
#include <HLRTopoBRep_VData.hxx>
#include <Intrv_Interval.hxx>
#include <Intrv_Intervals.hxx>
#include <TopBas_TestInterference.hxx>
#include <TopCnx_EdgeFaceTransition.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(Contap_TheIWLineOfTheIWalking)
DEFINE_HANDLECLASS(HLRAlgo_EdgesBlock)
DEFINE_HANDLECLASS(HLRAlgo_PolyAlgo)
DEFINE_HANDLECLASS(HLRAlgo_PolyData)
DEFINE_HANDLECLASS(HLRAlgo_PolyInternalData)
DEFINE_HANDLECLASS(HLRAlgo_PolyInternalNode)
DEFINE_HANDLECLASS(HLRAlgo_PolyShellData)
DEFINE_HANDLECLASS(HLRAlgo_WiresBlock)
DEFINE_HANDLECLASS(HLRBRep_Algo)
DEFINE_HANDLECLASS(HLRBRep_AreaLimit)
DEFINE_HANDLECLASS(HLRBRep_Data)
DEFINE_HANDLECLASS(HLRBRep_InternalAlgo)
DEFINE_HANDLECLASS(HLRBRep_PolyAlgo)
DEFINE_HANDLECLASS(HLRTopoBRep_OutLiner)

