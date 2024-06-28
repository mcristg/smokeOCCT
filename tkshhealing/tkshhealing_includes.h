#include <ShapeAlgo.hxx>
#include <ShapeAlgo_AlgoContainer.hxx>
#include <ShapeAlgo_ToolContainer.hxx>
#include <ShapeAnalysis.hxx>
#include <ShapeAnalysis_CanonicalRecognition.hxx>
#include <ShapeAnalysis_CheckSmallFace.hxx>
#include <ShapeAnalysis_Curve.hxx>
#include <ShapeAnalysis_Edge.hxx>
#include <ShapeAnalysis_FreeBoundData.hxx>
#include <ShapeAnalysis_FreeBounds.hxx>
#include <ShapeAnalysis_FreeBoundsProperties.hxx>
#include <ShapeAnalysis_Geom.hxx>
#include <ShapeAnalysis_ShapeContents.hxx>
#include <ShapeAnalysis_ShapeTolerance.hxx>
#include <ShapeAnalysis_Shell.hxx>
#include <ShapeAnalysis_Surface.hxx>
#include <ShapeAnalysis_TransferParameters.hxx>
#include <ShapeAnalysis_TransferParametersProj.hxx>
#include <ShapeAnalysis_Wire.hxx>
#include <ShapeAnalysis_WireOrder.hxx>
#include <ShapeAnalysis_WireVertex.hxx>
#include <ShapeBuild.hxx>
#include <ShapeBuild_Edge.hxx>
#include <ShapeBuild_ReShape.hxx>
#include <ShapeBuild_Vertex.hxx>
#include <ShapeConstruct.hxx>
#include <ShapeConstruct_Curve.hxx>
#include <ShapeConstruct_MakeTriangulation.hxx>
#include <ShapeConstruct_ProjectCurveOnSurface.hxx>
#include <ShapeCustom.hxx>
#include <ShapeCustom_BSplineRestriction.hxx>
#include <ShapeCustom_ConvertToBSpline.hxx>
#include <ShapeCustom_ConvertToRevolution.hxx>
#include <ShapeCustom_Curve.hxx>
#include <ShapeCustom_Curve2d.hxx>
#include <ShapeCustom_DirectModification.hxx>
#include <ShapeCustom_Modification.hxx>
#include <ShapeCustom_RestrictionParameters.hxx>
#include <ShapeCustom_Surface.hxx>
#include <ShapeCustom_SweptToElementary.hxx>
#include <ShapeCustom_TrsfModification.hxx>
#include <ShapeExtend.hxx>
#include <ShapeExtend_BasicMsgRegistrator.hxx>
#include <ShapeExtend_ComplexCurve.hxx>
#include <ShapeExtend_CompositeSurface.hxx>
#include <ShapeExtend_Explorer.hxx>
#include <ShapeExtend_MsgRegistrator.hxx>
#include <ShapeExtend_WireData.hxx>
#include <ShapeFix.hxx>
#include <ShapeFix_ComposeShell.hxx>
#include <ShapeFix_Edge.hxx>
#include <ShapeFix_EdgeConnect.hxx>
#include <ShapeFix_EdgeProjAux.hxx>
#include <ShapeFix_Face.hxx>
#include <ShapeFix_FaceConnect.hxx>
#include <ShapeFix_FixSmallFace.hxx>
#include <ShapeFix_FixSmallSolid.hxx>
#include <ShapeFix_FreeBounds.hxx>
#include <ShapeFix_IntersectionTool.hxx>
#include <ShapeFix_Root.hxx>
#include <ShapeFix_Shape.hxx>
#include <ShapeFix_ShapeTolerance.hxx>
#include <ShapeFix_Shell.hxx>
#include <ShapeFix_Solid.hxx>
#include <ShapeFix_SplitCommonVertex.hxx>
#include <ShapeFix_SplitTool.hxx>
#include <ShapeFix_Wire.hxx>
#include <ShapeFix_Wireframe.hxx>
#include <ShapeFix_WireSegment.hxx>
#include <ShapeFix_WireVertex.hxx>
#include <ShapeProcess.hxx>
#include <ShapeProcess_Context.hxx>
#include <ShapeProcess_Operator.hxx>
#include <ShapeProcess_OperLibrary.hxx>
#include <ShapeProcess_ShapeContext.hxx>
#include <ShapeProcess_UOperator.hxx>
#include <ShapeProcessAPI_ApplySequence.hxx>
#include <ShapeUpgrade.hxx>
#include <ShapeUpgrade_ClosedEdgeDivide.hxx>
#include <ShapeUpgrade_ConvertCurve2dToBezier.hxx>
#include <ShapeUpgrade_ConvertCurve3dToBezier.hxx>
#include <ShapeUpgrade_ConvertSurfaceToBezierBasis.hxx>
#include <ShapeUpgrade_EdgeDivide.hxx>
#include <ShapeUpgrade_FaceDivide.hxx>
#include <ShapeUpgrade_FaceDivideArea.hxx>
#include <ShapeUpgrade_FixSmallBezierCurves.hxx>
#include <ShapeUpgrade_FixSmallCurves.hxx>
#include <ShapeUpgrade_RemoveInternalWires.hxx>
#include <ShapeUpgrade_RemoveLocations.hxx>
#include <ShapeUpgrade_ShapeConvertToBezier.hxx>
#include <ShapeUpgrade_ShapeDivide.hxx>
#include <ShapeUpgrade_ShapeDivideAngle.hxx>
#include <ShapeUpgrade_ShapeDivideArea.hxx>
#include <ShapeUpgrade_ShapeDivideClosed.hxx>
#include <ShapeUpgrade_ShapeDivideClosedEdges.hxx>
#include <ShapeUpgrade_ShapeDivideContinuity.hxx>
#include <ShapeUpgrade_ShellSewing.hxx>
#include <ShapeUpgrade_SplitCurve.hxx>
#include <ShapeUpgrade_SplitCurve2d.hxx>
#include <ShapeUpgrade_SplitCurve2dContinuity.hxx>
#include <ShapeUpgrade_SplitCurve3d.hxx>
#include <ShapeUpgrade_SplitCurve3dContinuity.hxx>
#include <ShapeUpgrade_SplitSurface.hxx>
#include <ShapeUpgrade_SplitSurfaceAngle.hxx>
#include <ShapeUpgrade_SplitSurfaceArea.hxx>
#include <ShapeUpgrade_SplitSurfaceContinuity.hxx>
#include <ShapeUpgrade_Tool.hxx>
#include <ShapeUpgrade_UnifySameDomain.hxx>
#include <ShapeUpgrade_WireDivide.hxx>

#include <ShapeUpgrade_ClosedFaceDivide.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(ShapeAlgo_AlgoContainer)
DEFINE_HANDLECLASS(ShapeAlgo_ToolContainer)
DEFINE_HANDLECLASS(ShapeAnalysis_FreeBoundData)
DEFINE_HANDLECLASS(ShapeAnalysis_Surface)
DEFINE_HANDLECLASS(ShapeAnalysis_TransferParameters)
DEFINE_HANDLECLASS(ShapeAnalysis_TransferParametersProj)
DEFINE_HANDLECLASS(ShapeAnalysis_Wire)
DEFINE_HANDLECLASS(ShapeBuild_ReShape)
DEFINE_HANDLECLASS(ShapeConstruct_ProjectCurveOnSurface)
DEFINE_HANDLECLASS(ShapeCustom_BSplineRestriction)
DEFINE_HANDLECLASS(ShapeCustom_ConvertToBSpline)
DEFINE_HANDLECLASS(ShapeCustom_ConvertToRevolution)
DEFINE_HANDLECLASS(ShapeCustom_DirectModification)
DEFINE_HANDLECLASS(ShapeCustom_Modification)
DEFINE_HANDLECLASS(ShapeCustom_RestrictionParameters)
DEFINE_HANDLECLASS(ShapeCustom_SweptToElementary)
DEFINE_HANDLECLASS(ShapeCustom_TrsfModification)
DEFINE_HANDLECLASS(ShapeExtend_BasicMsgRegistrator)
DEFINE_HANDLECLASS(ShapeExtend_ComplexCurve)
DEFINE_HANDLECLASS(ShapeExtend_CompositeSurface)
DEFINE_HANDLECLASS(ShapeExtend_MsgRegistrator)
DEFINE_HANDLECLASS(ShapeExtend_WireData)
DEFINE_HANDLECLASS(ShapeFix_ComposeShell)
DEFINE_HANDLECLASS(ShapeFix_Edge)
DEFINE_HANDLECLASS(ShapeFix_EdgeProjAux)
DEFINE_HANDLECLASS(ShapeFix_Face)
DEFINE_HANDLECLASS(ShapeFix_FixSmallFace)
DEFINE_HANDLECLASS(ShapeFix_FixSmallSolid)
DEFINE_HANDLECLASS(ShapeFix_Root)
DEFINE_HANDLECLASS(ShapeFix_Shape)
DEFINE_HANDLECLASS(ShapeFix_Shell)
DEFINE_HANDLECLASS(ShapeFix_Solid)
DEFINE_HANDLECLASS(ShapeFix_SplitCommonVertex)
DEFINE_HANDLECLASS(ShapeFix_Wire)
DEFINE_HANDLECLASS(ShapeFix_Wireframe)
DEFINE_HANDLECLASS(ShapeProcess_Context)
DEFINE_HANDLECLASS(ShapeProcess_Operator)
DEFINE_HANDLECLASS(ShapeProcess_ShapeContext)
DEFINE_HANDLECLASS(ShapeProcess_UOperator)
DEFINE_HANDLECLASS(ShapeUpgrade_ClosedEdgeDivide)
DEFINE_HANDLECLASS(ShapeUpgrade_ClosedFaceDivide)
DEFINE_HANDLECLASS(ShapeUpgrade_ConvertCurve2dToBezier)
DEFINE_HANDLECLASS(ShapeUpgrade_ConvertCurve3dToBezier)
DEFINE_HANDLECLASS(ShapeUpgrade_ConvertSurfaceToBezierBasis)
DEFINE_HANDLECLASS(ShapeUpgrade_EdgeDivide)
DEFINE_HANDLECLASS(ShapeUpgrade_FaceDivide)
DEFINE_HANDLECLASS(ShapeUpgrade_FaceDivideArea)
DEFINE_HANDLECLASS(ShapeUpgrade_FixSmallBezierCurves)
DEFINE_HANDLECLASS(ShapeUpgrade_FixSmallCurves)
DEFINE_HANDLECLASS(ShapeUpgrade_RemoveInternalWires)
DEFINE_HANDLECLASS(ShapeUpgrade_RemoveLocations)
DEFINE_HANDLECLASS(ShapeUpgrade_SplitCurve)
DEFINE_HANDLECLASS(ShapeUpgrade_SplitCurve2d)
DEFINE_HANDLECLASS(ShapeUpgrade_SplitCurve2dContinuity)
DEFINE_HANDLECLASS(ShapeUpgrade_SplitCurve3d)
DEFINE_HANDLECLASS(ShapeUpgrade_SplitCurve3dContinuity)
DEFINE_HANDLECLASS(ShapeUpgrade_SplitSurface)
DEFINE_HANDLECLASS(ShapeUpgrade_SplitSurfaceAngle)
DEFINE_HANDLECLASS(ShapeUpgrade_SplitSurfaceArea)
DEFINE_HANDLECLASS(ShapeUpgrade_SplitSurfaceContinuity)
DEFINE_HANDLECLASS(ShapeUpgrade_Tool)
DEFINE_HANDLECLASS(ShapeUpgrade_UnifySameDomain)
DEFINE_HANDLECLASS(ShapeUpgrade_WireDivide)

