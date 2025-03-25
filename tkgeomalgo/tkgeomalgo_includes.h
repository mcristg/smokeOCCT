#include <AppBlend_Approx.hxx>
#include <ApproxInt_KnotTools.hxx>
#include <ApproxInt_SvSurfaces.hxx>
#include <FairCurve_Batten.hxx>
#include <FairCurve_BattenLaw.hxx>
#include <FairCurve_DistributionOfEnergy.hxx>
#include <FairCurve_DistributionOfJerk.hxx>
#include <FairCurve_DistributionOfSagging.hxx>
#include <FairCurve_DistributionOfTension.hxx>
#include <FairCurve_Energy.hxx>
#include <FairCurve_EnergyOfBatten.hxx>
#include <FairCurve_EnergyOfMVC.hxx>
#include <FairCurve_MinimalVariation.hxx>
#include <FairCurve_Newton.hxx>
#include <GccAna_Circ2d2TanOn.hxx>
#include <GccAna_Circ2d2TanRad.hxx>
#include <GccAna_Circ2d3Tan.hxx>
#include <GccAna_Circ2dBisec.hxx>
#include <GccAna_Circ2dTanCen.hxx>
#include <GccAna_Circ2dTanOnRad.hxx>
#include <GccAna_CircLin2dBisec.hxx>
#include <GccAna_CircPnt2dBisec.hxx>
#include <GccAna_Lin2d2Tan.hxx>
#include <GccAna_Lin2dBisec.hxx>
#include <GccAna_Lin2dTanObl.hxx>
#include <GccAna_Lin2dTanPar.hxx>
#include <GccAna_Lin2dTanPer.hxx>
#include <GccAna_LinPnt2dBisec.hxx>
#include <GccAna_Pnt2dBisec.hxx>
#include <GccEnt.hxx>
#include <GccEnt_QualifiedCirc.hxx>
#include <GccEnt_QualifiedLin.hxx>
#include <GccInt_BCirc.hxx>
#include <GccInt_BElips.hxx>
#include <GccInt_BHyper.hxx>
#include <GccInt_Bisec.hxx>
#include <GccInt_BLine.hxx>
#include <GccInt_BParab.hxx>
#include <GccInt_BPoint.hxx>
#include <Geom2dAPI_ExtremaCurveCurve.hxx>
#include <Geom2dAPI_InterCurveCurve.hxx>
#include <Geom2dAPI_Interpolate.hxx>
#include <Geom2dAPI_PointsToBSpline.hxx>
#include <Geom2dAPI_ProjectPointOnCurve.hxx>
#include <Geom2dGcc.hxx>
#include <Geom2dGcc_Circ2d2TanOn.hxx>
#include <Geom2dGcc_Circ2d2TanOnGeo.hxx>
#include <Geom2dGcc_Circ2d2TanOnIter.hxx>
#include <Geom2dGcc_Circ2d2TanRad.hxx>
#include <Geom2dGcc_Circ2d2TanRadGeo.hxx>
#include <Geom2dGcc_Circ2d3Tan.hxx>
#include <Geom2dGcc_Circ2d3TanIter.hxx>
#include <Geom2dGcc_Circ2dTanCen.hxx>
#include <Geom2dGcc_Circ2dTanCenGeo.hxx>
#include <Geom2dGcc_Circ2dTanOnRad.hxx>
#include <Geom2dGcc_Circ2dTanOnRadGeo.hxx>
#include <Geom2dGcc_CurveTool.hxx>
#include <Geom2dGcc_FunctionTanCirCu.hxx>
#include <Geom2dGcc_FunctionTanCuCu.hxx>
#include <Geom2dGcc_FunctionTanCuCuCu.hxx>
#include <Geom2dGcc_FunctionTanCuPnt.hxx>
#include <Geom2dGcc_FunctionTanObl.hxx>
#include <Geom2dGcc_Lin2d2Tan.hxx>
#include <Geom2dGcc_Lin2d2TanIter.hxx>
#include <Geom2dGcc_Lin2dTanObl.hxx>
#include <Geom2dGcc_Lin2dTanOblIter.hxx>
#include <Geom2dGcc_QCurve.hxx>
#include <Geom2dGcc_QualifiedCurve.hxx>
#include <Geom2dHatch_Element.hxx>
#include <Geom2dHatch_Elements.hxx>
#include <Geom2dHatch_FClass2dOfClassifier.hxx>
#include <Geom2dHatch_Hatcher.hxx>
#include <Geom2dHatch_Hatching.hxx>
#include <Geom2dHatch_Intersector.hxx>
#include <Geom2dInt_ExactIntersectionPointOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_Geom2dCurveTool.hxx>
#include <Geom2dInt_GInter.hxx>
#include <Geom2dInt_IntConicCurveOfGInter.hxx>
#include <Geom2dInt_MyImpParToolOfTheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <Geom2dInt_PCLocFOfTheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheCurveLocatorOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_TheDistBetweenPCurvesOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheIntConicCurveOfGInter.hxx>
#include <Geom2dInt_TheIntersectorOfTheIntConicCurveOfGInter.hxx>
#include <Geom2dInt_TheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheLocateExtPCOfTheProjPCurOfGInter.hxx>
#include <Geom2dInt_ThePolygon2dOfTheIntPCurvePCurveOfGInter.hxx>
#include <Geom2dInt_TheProjPCurOfGInter.hxx>
#include <GeomAPI.hxx>
#include <GeomAPI_ExtremaCurveCurve.hxx>
#include <GeomAPI_ExtremaCurveSurface.hxx>
#include <GeomAPI_ExtremaSurfaceSurface.hxx>
#include <GeomAPI_IntCS.hxx>
#include <GeomAPI_Interpolate.hxx>
#include <GeomAPI_IntSS.hxx>
#include <GeomAPI_PointsToBSpline.hxx>
#include <GeomAPI_PointsToBSplineSurface.hxx>
#include <GeomAPI_ProjectPointOnSurf.hxx>
#include <GeomFill.hxx>
#include <GeomFill_AppSurf.hxx>
#include <GeomFill_AppSweep.hxx>
#include <GeomFill_BezierCurves.hxx>
#include <GeomFill_Boundary.hxx>
#include <GeomFill_BoundWithSurf.hxx>
#include <GeomFill_BSplineCurves.hxx>
#include <GeomFill_CircularBlendFunc.hxx>
#include <GeomFill_ConstantBiNormal.hxx>
#include <GeomFill_ConstrainedFilling.hxx>
#include <GeomFill_Coons.hxx>
#include <GeomFill_CoonsAlgPatch.hxx>
#include <GeomFill_CornerState.hxx>
#include <GeomFill_CorrectedFrenet.hxx>
#include <GeomFill_CurveAndTrihedron.hxx>
#include <GeomFill_Curved.hxx>
#include <GeomFill_Darboux.hxx>
#include <GeomFill_DegeneratedBound.hxx>
#include <GeomFill_DiscreteTrihedron.hxx>
#include <GeomFill_EvolvedSection.hxx>
#include <GeomFill_Filling.hxx>
#include <GeomFill_Fixed.hxx>
#include <GeomFill_Frenet.hxx>
#include <GeomFill_FunctionDraft.hxx>
#include <GeomFill_FunctionGuide.hxx>
#include <GeomFill_Generator.hxx>
#include <GeomFill_GuideTrihedronAC.hxx>
#include <GeomFill_GuideTrihedronPlan.hxx>
#include <GeomFill_Line.hxx>
#include <GeomFill_LocationDraft.hxx>
#include <GeomFill_LocationGuide.hxx>
#include <GeomFill_LocationLaw.hxx>
#include <GeomFill_LocFunction.hxx>
#include <GeomFill_NSections.hxx>
#include <GeomFill_Pipe.hxx>
#include <GeomFill_PlanFunc.hxx>
#include <GeomFill_PolynomialConvertor.hxx>
#include <GeomFill_Profiler.hxx>
#include <GeomFill_QuasiAngularConvertor.hxx>
#include <GeomFill_SectionGenerator.hxx>
#include <GeomFill_SectionLaw.hxx>
#include <GeomFill_SectionPlacement.hxx>
#include <GeomFill_SimpleBound.hxx>
#include <GeomFill_SnglrFunc.hxx>
#include <GeomFill_Stretch.hxx>
#include <GeomFill_Sweep.hxx>
#include <GeomFill_SweepFunction.hxx>
#include <GeomFill_SweepSectionGenerator.hxx>
#include <GeomFill_TgtField.hxx>
#include <GeomFill_TgtOnCoons.hxx>
#include <GeomFill_TrihedronLaw.hxx>
#include <GeomFill_TrihedronWithGuide.hxx>
#include <GeomFill_UniformSection.hxx>
#include <GeomInt.hxx>
#include <GeomInt_BSpGradient_BFGSOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParFunctionOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_BSpParLeastSquareOfMyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_Gradient_BFGSOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_IntSS.hxx>
#include <GeomInt_LineConstructor.hxx>
#include <GeomInt_LineTool.hxx>
#include <GeomInt_MyBSplGradientOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_MyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_MyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParameterAndOrientation.hxx>
#include <GeomInt_ParFunctionOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParFunctionOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ParLeastSquareOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientbisOfTheComputeLineOfWLApprox.hxx>
#include <GeomInt_ResConstraintOfMyGradientOfTheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_TheComputeLineBezierOfWLApprox.hxx>
#include <GeomInt_TheComputeLineOfWLApprox.hxx>
#include <GeomInt_TheFunctionOfTheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheImpPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheInt2SOfThePrmPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#include <GeomInt_TheMultiLineToolOfWLApprox.hxx>
#include <GeomInt_ThePrmPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_TheZerImpFuncOfTheImpPrmSvSurfacesOfWLApprox.hxx>
#include <GeomInt_WLApprox.hxx>
#include <GeomPlate_Aij.hxx>
#include <GeomPlate_BuildAveragePlane.hxx>
#include <GeomPlate_BuildPlateSurface.hxx>
#include <GeomPlate_CurveConstraint.hxx>
#include <GeomPlate_MakeApprox.hxx>
#include <GeomPlate_PlateG0Criterion.hxx>
#include <GeomPlate_PlateG1Criterion.hxx>
#include <GeomPlate_PointConstraint.hxx>
#include <GeomPlate_Surface.hxx>
#include <Hatch_Hatcher.hxx>
#include <Hatch_Line.hxx>
#include <Hatch_Parameter.hxx>
#include <HatchGen_Domain.hxx>
#include <HatchGen_IntersectionPoint.hxx>
#include <HatchGen_PointOnElement.hxx>
#include <HatchGen_PointOnHatching.hxx>
#include <IntCurve_IConicTool.hxx>
#include <IntCurve_IntConicConic.hxx>
#include <IntCurve_IntImpConicParConic.hxx>
#include <IntCurve_MyImpParToolOfIntImpConicParConic.hxx>
#include <IntCurve_PConic.hxx>
#include <IntCurve_PConicTool.hxx>
#include <IntCurve_ProjectOnPConicTool.hxx>
#include <IntCurveSurface_HInter.hxx>
#include <IntCurveSurface_Intersection.hxx>
#include <IntCurveSurface_IntersectionPoint.hxx>
#include <IntCurveSurface_IntersectionSegment.hxx>
#include <IntCurveSurface_TheCSFunctionOfHInter.hxx>
#include <IntCurveSurface_TheExactHInter.hxx>
#include <IntCurveSurface_TheHCurveTool.hxx>
#include <IntCurveSurface_TheInterferenceOfHInter.hxx>
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include <IntCurveSurface_ThePolygonToolOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronOfHInter.hxx>
#include <IntCurveSurface_ThePolyhedronToolOfHInter.hxx>
#include <IntCurveSurface_TheQuadCurvExactHInter.hxx>
#include <IntCurveSurface_TheQuadCurvFuncOfTheQuadCurvExactHInter.hxx>
#include <IntImp_ComputeTangence.hxx>
#include <IntImpParGen.hxx>
#include <IntImpParGen_ImpTool.hxx>
#include <IntPatch_ALine.hxx>
#include <IntPatch_ALineToWLine.hxx>
#include <IntPatch_ArcFunction.hxx>
#include <IntPatch_CSFunction.hxx>
#include <IntPatch_CurvIntSurf.hxx>
#include <IntPatch_GLine.hxx>
#include <IntPatch_HCurve2dTool.hxx>
#include <IntPatch_HInterTool.hxx>
#include <IntPatch_ImpImpIntersection.hxx>
#include <IntPatch_ImpPrmIntersection.hxx>
#include <IntPatch_InterferencePolyhedron.hxx>
#include <IntPatch_Intersection.hxx>
#include <IntPatch_Line.hxx>
#include <IntPatch_LineConstructor.hxx>
#include <IntPatch_Point.hxx>
#include <IntPatch_PointLine.hxx>
#include <IntPatch_PolyArc.hxx>
#include <IntPatch_Polygo.hxx>
#include <IntPatch_Polyhedron.hxx>
#include <IntPatch_PolyhedronTool.hxx>
#include <IntPatch_PolyLine.hxx>
#include <IntPatch_PrmPrmIntersection.hxx>
#include <IntPatch_PrmPrmIntersection_T3Bits.hxx>
#include <IntPatch_RLine.hxx>
#include <IntPatch_RstInt.hxx>
#include <IntPatch_SpecialPoints.hxx>
#include <IntPatch_TheIWalking.hxx>
#include <IntPatch_TheIWLineOfTheIWalking.hxx>
#include <IntPatch_ThePathPointOfTheSOnBounds.hxx>
#include <IntPatch_TheSearchInside.hxx>
#include <IntPatch_TheSegmentOfTheSOnBounds.hxx>
#include <IntPatch_TheSOnBounds.hxx>
#include <IntPatch_TheSurfFunction.hxx>
#include <IntPatch_WLine.hxx>
#include <IntPatch_WLineTool.hxx>
#include <IntPolyh_Array.hxx>
#include <IntPolyh_Couple.hxx>
#include <IntPolyh_Edge.hxx>
#include <IntPolyh_Intersection.hxx>
#include <IntPolyh_MaillageAffinage.hxx>
#include <IntPolyh_Point.hxx>
#include <IntPolyh_SectionLine.hxx>
#include <IntPolyh_StartPoint.hxx>
#include <IntPolyh_Tools.hxx>
#include <IntPolyh_Triangle.hxx>
#include <IntRes2d_Domain.hxx>
#include <IntRes2d_Intersection.hxx>
#include <IntRes2d_IntersectionPoint.hxx>
#include <IntRes2d_IntersectionSegment.hxx>
#include <IntRes2d_Transition.hxx>
#include <IntStart_SITopolTool.hxx>
#include <IntSurf.hxx>
#include <IntSurf_Couple.hxx>
#include <IntSurf_InteriorPoint.hxx>
#include <IntSurf_InteriorPointTool.hxx>
#include <IntSurf_LineOn2S.hxx>
#include <IntSurf_PathPoint.hxx>
#include <IntSurf_PathPointTool.hxx>
#include <IntSurf_PntOn2S.hxx>
#include <IntSurf_Quadric.hxx>
#include <IntSurf_QuadricTool.hxx>
#include <IntSurf_Transition.hxx>
#include <IntWalk_PWalking.hxx>
#include <IntWalk_TheFunctionOfTheInt2S.hxx>
#include <IntWalk_TheInt2S.hxx>
#include <Intf.hxx>
#include <Intf_Interference.hxx>
#include <Intf_InterferencePolygon2d.hxx>
#include <Intf_Polygon2d.hxx>
#include <Intf_SectionLine.hxx>
#include <Intf_SectionPoint.hxx>
#include <Intf_TangentZone.hxx>
#include <Intf_Tool.hxx>
#include <Law.hxx>
#include <Law_BSpFunc.hxx>
#include <Law_BSpline.hxx>
#include <Law_BSplineKnotSplitting.hxx>
#include <Law_Composite.hxx>
#include <Law_Constant.hxx>
#include <Law_Function.hxx>
#include <Law_Interpol.hxx>
#include <Law_Interpolate.hxx>
#include <Law_Linear.hxx>
#include <Law_S.hxx>
#include <LocalAnalysis.hxx>
#include <LocalAnalysis_CurveContinuity.hxx>
#include <LocalAnalysis_SurfaceContinuity.hxx>
#include <NLPlate_HGPPConstraint.hxx>
#include <NLPlate_HPG0Constraint.hxx>
#include <NLPlate_HPG0G1Constraint.hxx>
#include <NLPlate_HPG0G2Constraint.hxx>
#include <NLPlate_HPG1Constraint.hxx>
#include <NLPlate_HPG2Constraint.hxx>
#include <NLPlate_HPG3Constraint.hxx>
#include <NLPlate_NLPlate.hxx>
#include <Plate_D1.hxx>
#include <Plate_D2.hxx>
#include <Plate_D3.hxx>
#include <Plate_FreeGtoCConstraint.hxx>
#include <Plate_GlobalTranslationConstraint.hxx>
#include <Plate_GtoCConstraint.hxx>
#include <Plate_LinearScalarConstraint.hxx>
#include <Plate_LinearXYZConstraint.hxx>
#include <Plate_LineConstraint.hxx>
#include <Plate_PinpointConstraint.hxx>
#include <Plate_PlaneConstraint.hxx>
#include <Plate_Plate.hxx>
#include <Plate_SampledCurveConstraint.hxx>
#include <TopTrans_CurveTransition.hxx>
#include <TopTrans_SurfaceTransition.hxx>

#include <GccAna_NoSolution.hxx>
#include <GccEnt_BadQualifier.hxx>
#include <Geom2dGcc_IsParallel.hxx>
#include <GeomFill_DraftTrihedron.hxx>
#include <NLPlate_HPG0G3Constraint.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(GccAna_NoSolution)
DEFINE_HANDLECLASS(GccEnt_BadQualifier)
DEFINE_HANDLECLASS(GccInt_BElips)
DEFINE_HANDLECLASS(GccInt_BHyper)
DEFINE_HANDLECLASS(GccInt_Bisec)
DEFINE_HANDLECLASS(GccInt_BLine)
DEFINE_HANDLECLASS(GccInt_BParab)
DEFINE_HANDLECLASS(GccInt_BPoint)
DEFINE_HANDLECLASS(Geom2dGcc_IsParallel)
DEFINE_HANDLECLASS(GeomFill_Boundary)
DEFINE_HANDLECLASS(GeomFill_BoundWithSurf)
DEFINE_HANDLECLASS(GeomFill_CircularBlendFunc)
DEFINE_HANDLECLASS(GeomFill_ConstantBiNormal)
DEFINE_HANDLECLASS(GeomFill_CoonsAlgPatch)
DEFINE_HANDLECLASS(GeomFill_CorrectedFrenet)
DEFINE_HANDLECLASS(GeomFill_CurveAndTrihedron)
DEFINE_HANDLECLASS(GeomFill_Darboux)
DEFINE_HANDLECLASS(GeomFill_DegeneratedBound)
DEFINE_HANDLECLASS(GeomFill_DiscreteTrihedron)
DEFINE_HANDLECLASS(GeomFill_DraftTrihedron)
DEFINE_HANDLECLASS(GeomFill_EvolvedSection)
DEFINE_HANDLECLASS(GeomFill_Fixed)
DEFINE_HANDLECLASS(GeomFill_Frenet)
DEFINE_HANDLECLASS(GeomFill_GuideTrihedronAC)
DEFINE_HANDLECLASS(GeomFill_GuideTrihedronPlan)
DEFINE_HANDLECLASS(GeomFill_Line)
DEFINE_HANDLECLASS(GeomFill_LocationDraft)
DEFINE_HANDLECLASS(GeomFill_LocationGuide)
DEFINE_HANDLECLASS(GeomFill_LocationLaw)
DEFINE_HANDLECLASS(GeomFill_NSections)
DEFINE_HANDLECLASS(GeomFill_SectionLaw)
DEFINE_HANDLECLASS(GeomFill_SimpleBound)
DEFINE_HANDLECLASS(GeomFill_SweepFunction)
DEFINE_HANDLECLASS(GeomFill_TgtField)
DEFINE_HANDLECLASS(GeomFill_TgtOnCoons)
DEFINE_HANDLECLASS(GeomFill_TrihedronLaw)
DEFINE_HANDLECLASS(GeomFill_TrihedronWithGuide)
DEFINE_HANDLECLASS(GeomFill_UniformSection)
DEFINE_HANDLECLASS(GeomPlate_CurveConstraint)
DEFINE_HANDLECLASS(GeomPlate_PointConstraint)
DEFINE_HANDLECLASS(GeomPlate_Surface)
DEFINE_HANDLECLASS(IntPatch_ALine)
DEFINE_HANDLECLASS(IntPatch_GLine)
DEFINE_HANDLECLASS(IntPatch_Line)
DEFINE_HANDLECLASS(IntPatch_PointLine)
DEFINE_HANDLECLASS(IntPatch_RLine)
DEFINE_HANDLECLASS(IntPatch_TheIWLineOfTheIWalking)
DEFINE_HANDLECLASS(IntPatch_WLine)
DEFINE_HANDLECLASS(IntStart_SITopolTool)
DEFINE_HANDLECLASS(IntSurf_LineOn2S)
DEFINE_HANDLECLASS(Law_BSpFunc)
DEFINE_HANDLECLASS(Law_BSpline)
DEFINE_HANDLECLASS(Law_Composite)
DEFINE_HANDLECLASS(Law_Constant)
DEFINE_HANDLECLASS(Law_Function)
DEFINE_HANDLECLASS(Law_Interpol)
DEFINE_HANDLECLASS(Law_Linear)
DEFINE_HANDLECLASS(Law_S)
DEFINE_HANDLECLASS(NLPlate_HGPPConstraint)
DEFINE_HANDLECLASS(NLPlate_HPG0Constraint)
DEFINE_HANDLECLASS(NLPlate_HPG0G1Constraint)
DEFINE_HANDLECLASS(NLPlate_HPG0G2Constraint)
DEFINE_HANDLECLASS(NLPlate_HPG0G3Constraint)
DEFINE_HANDLECLASS(NLPlate_HPG1Constraint)
DEFINE_HANDLECLASS(NLPlate_HPG2Constraint)
DEFINE_HANDLECLASS(NLPlate_HPG3Constraint)

