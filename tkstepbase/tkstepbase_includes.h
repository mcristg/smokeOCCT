#include <RWStepBasic_RWAction.hxx>
#include <RWStepBasic_RWActionAssignment.hxx>
#include <RWStepBasic_RWActionMethod.hxx>
#include <RWStepBasic_RWActionRequestAssignment.hxx>
#include <RWStepBasic_RWActionRequestSolution.hxx>
#include <RWStepBasic_RWAddress.hxx>
#include <RWStepBasic_RWApplicationContext.hxx>
#include <RWStepBasic_RWApplicationContextElement.hxx>
#include <RWStepBasic_RWApplicationContextElement.hxx>
#include <RWStepBasic_RWApplicationProtocolDefinition.hxx>
#include <RWStepBasic_RWApproval.hxx>
#include <RWStepBasic_RWApprovalDateTime.hxx>
#include <RWStepBasic_RWApprovalPersonOrganization.hxx>
#include <RWStepBasic_RWApprovalRelationship.hxx>
#include <RWStepBasic_RWApprovalRole.hxx>
#include <RWStepBasic_RWApprovalStatus.hxx>
#include <RWStepBasic_RWCalendarDate.hxx>
#include <RWStepBasic_RWCertification.hxx>
#include <RWStepBasic_RWCertificationAssignment.hxx>
#include <RWStepBasic_RWCertificationType.hxx>
#include <RWStepBasic_RWCharacterizedObject.hxx>
#include <RWStepBasic_RWContract.hxx>
#include <RWStepBasic_RWContractAssignment.hxx>
#include <RWStepBasic_RWContractType.hxx>
#include <RWStepBasic_RWConversionBasedUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndAreaUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndLengthUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndMassUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndPlaneAngleUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndRatioUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndSolidAngleUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndTimeUnit.hxx>
#include <RWStepBasic_RWConversionBasedUnitAndVolumeUnit.hxx>
#include <RWStepBasic_RWCoordinatedUniversalTimeOffset.hxx>
#include <RWStepBasic_RWDate.hxx>
#include <RWStepBasic_RWDateAndTime.hxx>
#include <RWStepBasic_RWDateRole.hxx>
#include <RWStepBasic_RWDateTimeRole.hxx>
#include <RWStepBasic_RWDerivedUnit.hxx>
#include <RWStepBasic_RWDerivedUnitElement.hxx>
#include <RWStepBasic_RWDimensionalExponents.hxx>
#include <RWStepBasic_RWDocument.hxx>
#include <RWStepBasic_RWDocumentFile.hxx>
#include <RWStepBasic_RWDocumentProductAssociation.hxx>
#include <RWStepBasic_RWDocumentProductEquivalence.hxx>
#include <RWStepBasic_RWDocumentRelationship.hxx>
#include <RWStepBasic_RWDocumentRepresentationType.hxx>
#include <RWStepBasic_RWDocumentType.hxx>
#include <RWStepBasic_RWDocumentUsageConstraint.hxx>
#include <RWStepBasic_RWEffectivity.hxx>
#include <RWStepBasic_RWEffectivityAssignment.hxx>
#include <RWStepBasic_RWEulerAngles.hxx>
#include <RWStepBasic_RWExternalIdentificationAssignment.hxx>
#include <RWStepBasic_RWExternallyDefinedItem.hxx>
#include <RWStepBasic_RWExternalSource.hxx>
#include <RWStepBasic_RWGeneralProperty.hxx>
#include <RWStepBasic_RWGroup.hxx>
#include <RWStepBasic_RWGroupAssignment.hxx>
#include <RWStepBasic_RWGroupRelationship.hxx>
#include <RWStepBasic_RWIdentificationAssignment.hxx>
#include <RWStepBasic_RWIdentificationRole.hxx>
#include <RWStepBasic_RWLengthMeasureWithUnit.hxx>
#include <RWStepBasic_RWLengthUnit.hxx>
#include <RWStepBasic_RWLocalTime.hxx>
#include <RWStepBasic_RWMassMeasureWithUnit.hxx>
#include <RWStepBasic_RWMassUnit.hxx>
#include <RWStepBasic_RWMeasureWithUnit.hxx>
#include <RWStepBasic_RWMechanicalContext.hxx>
#include <RWStepBasic_RWNameAssignment.hxx>
#include <RWStepBasic_RWNamedUnit.hxx>
#include <RWStepBasic_RWObjectRole.hxx>
#include <RWStepBasic_RWOrdinalDate.hxx>
#include <RWStepBasic_RWOrganization.hxx>
#include <RWStepBasic_RWOrganizationalAddress.hxx>
#include <RWStepBasic_RWOrganizationRole.hxx>
#include <RWStepBasic_RWPerson.hxx>
#include <RWStepBasic_RWPersonalAddress.hxx>
#include <RWStepBasic_RWPersonAndOrganization.hxx>
#include <RWStepBasic_RWPersonAndOrganizationRole.hxx>
#include <RWStepBasic_RWPlaneAngleMeasureWithUnit.hxx>
#include <RWStepBasic_RWPlaneAngleUnit.hxx>
#include <RWStepBasic_RWProduct.hxx>
#include <RWStepBasic_RWProductCategory.hxx>
#include <RWStepBasic_RWProductCategoryRelationship.hxx>
#include <RWStepBasic_RWProductConceptContext.hxx>
#include <RWStepBasic_RWProductDefinition.hxx>
#include <RWStepBasic_RWProductDefinitionContext.hxx>
#include <RWStepBasic_RWProductDefinitionEffectivity.hxx>
#include <RWStepBasic_RWProductDefinitionFormation.hxx>
#include <RWStepBasic_RWProductDefinitionFormationRelationship.hxx>
#include <RWStepBasic_RWProductDefinitionFormationWithSpecifiedSource.hxx>
#include <RWStepBasic_RWProductDefinitionReference.hxx>
#include <RWStepBasic_RWProductDefinitionReferenceWithLocalRepresentation.hxx>
#include <RWStepBasic_RWProductDefinitionRelationship.hxx>
#include <RWStepBasic_RWProductDefinitionWithAssociatedDocuments.hxx>
#include <RWStepBasic_RWProductRelatedProductCategory.hxx>
#include <RWStepBasic_RWProductType.hxx>
#include <RWStepBasic_RWRatioMeasureWithUnit.hxx>
#include <RWStepBasic_RWRoleAssociation.hxx>
#include <RWStepBasic_RWSecurityClassification.hxx>
#include <RWStepBasic_RWSecurityClassificationLevel.hxx>
#include <RWStepBasic_RWSiUnit.hxx>
#include <RWStepBasic_RWSiUnitAndAreaUnit.hxx>
#include <RWStepBasic_RWSiUnitAndLengthUnit.hxx>
#include <RWStepBasic_RWSiUnitAndMassUnit.hxx>
#include <RWStepBasic_RWSiUnitAndPlaneAngleUnit.hxx>
#include <RWStepBasic_RWSiUnitAndRatioUnit.hxx>
#include <RWStepBasic_RWSiUnitAndSolidAngleUnit.hxx>
#include <RWStepBasic_RWSiUnitAndThermodynamicTemperatureUnit.hxx>
#include <RWStepBasic_RWSiUnitAndTimeUnit.hxx>
#include <RWStepBasic_RWSiUnitAndVolumeUnit.hxx>
#include <RWStepBasic_RWSolidAngleMeasureWithUnit.hxx>
#include <RWStepBasic_RWSolidAngleUnit.hxx>
#include <RWStepBasic_RWThermodynamicTemperatureUnit.hxx>
#include <RWStepBasic_RWUncertaintyMeasureWithUnit.hxx>
#include <RWStepBasic_RWVersionedActionRequest.hxx>
#include <RWStepBasic_RWWeekOfYearAndDayDate.hxx>
#include <RWStepGeom_RWAxis1Placement.hxx>
#include <RWStepGeom_RWAxis2Placement2d.hxx>
#include <RWStepGeom_RWAxis2Placement3d.hxx>
#include <RWStepGeom_RWBezierCurve.hxx>
#include <RWStepGeom_RWBezierCurveAndRationalBSplineCurve.hxx>
#include <RWStepGeom_RWBezierSurface.hxx>
#include <RWStepGeom_RWBezierSurfaceAndRationalBSplineSurface.hxx>
#include <RWStepGeom_RWBoundaryCurve.hxx>
#include <RWStepGeom_RWBoundedCurve.hxx>
#include <RWStepGeom_RWBoundedSurface.hxx>
#include <RWStepGeom_RWBSplineCurve.hxx>
#include <RWStepGeom_RWBSplineCurveWithKnots.hxx>
#include <RWStepGeom_RWBSplineCurveWithKnotsAndRationalBSplineCurve.hxx>
#include <RWStepGeom_RWBSplineSurface.hxx>
#include <RWStepGeom_RWBSplineSurfaceWithKnots.hxx>
#include <RWStepGeom_RWBSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx>
#include <RWStepGeom_RWCartesianPoint.hxx>
#include <RWStepGeom_RWCartesianTransformationOperator.hxx>
#include <RWStepGeom_RWCartesianTransformationOperator3d.hxx>
#include <RWStepGeom_RWCircle.hxx>
#include <RWStepGeom_RWCompositeCurve.hxx>
#include <RWStepGeom_RWCompositeCurveOnSurface.hxx>
#include <RWStepGeom_RWCompositeCurveSegment.hxx>
#include <RWStepGeom_RWConic.hxx>
#include <RWStepGeom_RWConicalSurface.hxx>
#include <RWStepGeom_RWCurve.hxx>
#include <RWStepGeom_RWCurveBoundedSurface.hxx>
#include <RWStepGeom_RWCurveReplica.hxx>
#include <RWStepGeom_RWCylindricalSurface.hxx>
#include <RWStepGeom_RWDegeneratePcurve.hxx>
#include <RWStepGeom_RWDegenerateToroidalSurface.hxx>
#include <RWStepGeom_RWDirection.hxx>
#include <RWStepGeom_RWElementarySurface.hxx>
#include <RWStepGeom_RWEllipse.hxx>
#include <RWStepGeom_RWEvaluatedDegeneratePcurve.hxx>
#include <RWStepGeom_RWGeometricRepresentationContext.hxx>
#include <RWStepGeom_RWGeometricRepresentationContextAndGlobalUnitAssignedContext.hxx>
#include <RWStepGeom_RWGeometricRepresentationContextAndParametricRepresentationContext.hxx>
#include <RWStepGeom_RWGeometricRepresentationItem.hxx>
#include <RWStepGeom_RWGeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#include <RWStepGeom_RWHyperbola.hxx>
#include <RWStepGeom_RWIntersectionCurve.hxx>
#include <RWStepGeom_RWLine.hxx>
#include <RWStepGeom_RWOffsetCurve3d.hxx>
#include <RWStepGeom_RWOffsetSurface.hxx>
#include <RWStepGeom_RWOrientedSurface.hxx>
#include <RWStepGeom_RWOuterBoundaryCurve.hxx>
#include <RWStepGeom_RWParabola.hxx>
#include <RWStepGeom_RWPcurve.hxx>
#include <RWStepGeom_RWPlacement.hxx>
#include <RWStepGeom_RWPlane.hxx>
#include <RWStepGeom_RWPoint.hxx>
#include <RWStepGeom_RWPointOnCurve.hxx>
#include <RWStepGeom_RWPointOnSurface.hxx>
#include <RWStepGeom_RWPointReplica.hxx>
#include <RWStepGeom_RWPolyline.hxx>
#include <RWStepGeom_RWQuasiUniformCurve.hxx>
#include <RWStepGeom_RWQuasiUniformCurveAndRationalBSplineCurve.hxx>
#include <RWStepGeom_RWQuasiUniformSurface.hxx>
#include <RWStepGeom_RWQuasiUniformSurfaceAndRationalBSplineSurface.hxx>
#include <RWStepGeom_RWRationalBSplineCurve.hxx>
#include <RWStepGeom_RWRationalBSplineSurface.hxx>
#include <RWStepGeom_RWRectangularCompositeSurface.hxx>
#include <RWStepGeom_RWRectangularTrimmedSurface.hxx>
#include <RWStepGeom_RWReparametrisedCompositeCurveSegment.hxx>
#include <RWStepGeom_RWSeamCurve.hxx>
#include <RWStepGeom_RWSphericalSurface.hxx>
#include <RWStepGeom_RWSuParameters.hxx>
#include <RWStepGeom_RWSurface.hxx>
#include <RWStepGeom_RWSurfaceCurve.hxx>
#include <RWStepGeom_RWSurfaceCurveAndBoundedCurve.hxx>
#include <RWStepGeom_RWSurfaceOfLinearExtrusion.hxx>
#include <RWStepGeom_RWSurfaceOfRevolution.hxx>
#include <RWStepGeom_RWSurfacePatch.hxx>
#include <RWStepGeom_RWSurfaceReplica.hxx>
#include <RWStepGeom_RWSweptSurface.hxx>
#include <RWStepGeom_RWToroidalSurface.hxx>
#include <RWStepGeom_RWTrimmedCurve.hxx>
#include <RWStepGeom_RWUniformCurve.hxx>
#include <RWStepGeom_RWUniformCurveAndRationalBSplineCurve.hxx>
#include <RWStepGeom_RWUniformSurface.hxx>
#include <RWStepGeom_RWUniformSurfaceAndRationalBSplineSurface.hxx>
#include <RWStepGeom_RWVector.hxx>
#include <RWStepRepr_RWAllAroundShapeAspect.hxx>
#include <RWStepRepr_RWApex.hxx>
#include <RWStepRepr_RWAssemblyComponentUsage.hxx>
#include <RWStepRepr_RWAssemblyComponentUsageSubstitute.hxx>
#include <RWStepRepr_RWBetweenShapeAspect.hxx>
#include <RWStepRepr_RWCentreOfSymmetry.hxx>
#include <RWStepRepr_RWCharacterizedRepresentation.hxx>
#include <RWStepRepr_RWCompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx>
#include <RWStepRepr_RWCompositeGroupShapeAspect.hxx>
#include <RWStepRepr_RWCompositeShapeAspect.hxx>
#include <RWStepRepr_RWCompoundRepresentationItem.hxx>
#include <RWStepRepr_RWCompShAspAndDatumFeatAndShAsp.hxx>
#include <RWStepRepr_RWConfigurationDesign.hxx>
#include <RWStepRepr_RWConfigurationEffectivity.hxx>
#include <RWStepRepr_RWConfigurationItem.hxx>
#include <RWStepRepr_RWConstructiveGeometryRepresentation.hxx>
#include <RWStepRepr_RWConstructiveGeometryRepresentationRelationship.hxx>
#include <RWStepRepr_RWContinuosShapeAspect.hxx>
#include <RWStepRepr_RWDataEnvironment.hxx>
#include <RWStepRepr_RWDefinitionalRepresentation.hxx>
#include <RWStepRepr_RWDerivedShapeAspect.hxx>
#include <RWStepRepr_RWDescriptiveRepresentationItem.hxx>
#include <RWStepRepr_RWExtension.hxx>
#include <RWStepRepr_RWFeatureForDatumTargetRelationship.hxx>
#include <RWStepRepr_RWFunctionallyDefinedTransformation.hxx>
#include <RWStepRepr_RWGeometricAlignment.hxx>
#include <RWStepRepr_RWGlobalUncertaintyAssignedContext.hxx>
#include <RWStepRepr_RWGlobalUnitAssignedContext.hxx>
#include <RWStepRepr_RWIntegerRepresentationItem.hxx>
#include <RWStepRepr_RWItemDefinedTransformation.hxx>
#include <RWStepRepr_RWMakeFromUsageOption.hxx>
#include <RWStepRepr_RWMappedItem.hxx>
#include <RWStepRepr_RWMaterialDesignation.hxx>
#include <RWStepRepr_RWMaterialProperty.hxx>
#include <RWStepRepr_RWMaterialPropertyRepresentation.hxx>
#include <RWStepRepr_RWMeasureRepresentationItem.hxx>
#include <RWStepRepr_RWParallelOffset.hxx>
#include <RWStepRepr_RWParametricRepresentationContext.hxx>
#include <RWStepRepr_RWPerpendicularTo.hxx>
#include <RWStepRepr_RWProductConcept.hxx>
#include <RWStepRepr_RWProductDefinitionShape.hxx>
#include <RWStepRepr_RWPropertyDefinition.hxx>
#include <RWStepRepr_RWPropertyDefinitionRelationship.hxx>
#include <RWStepRepr_RWPropertyDefinitionRepresentation.hxx>
#include <RWStepRepr_RWQuantifiedAssemblyComponentUsage.hxx>
#include <RWStepRepr_RWRepresentation.hxx>
#include <RWStepRepr_RWRepresentationContext.hxx>
#include <RWStepRepr_RWRepresentationContextReference.hxx>
#include <RWStepRepr_RWRepresentationItem.hxx>
#include <RWStepRepr_RWRepresentationMap.hxx>
#include <RWStepRepr_RWRepresentationReference.hxx>
#include <RWStepRepr_RWRepresentationRelationship.hxx>
#include <RWStepRepr_RWRepresentationRelationshipWithTransformation.hxx>
#include <RWStepRepr_RWReprItemAndLengthMeasureWithUnit.hxx>
#include <RWStepRepr_RWReprItemAndLengthMeasureWithUnitAndQRI.hxx>
#include <RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnit.hxx>
#include <RWStepRepr_RWReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx>
#include <RWStepRepr_RWShapeAspect.hxx>
#include <RWStepRepr_RWShapeAspectDerivingRelationship.hxx>
#include <RWStepRepr_RWShapeAspectRelationship.hxx>
#include <RWStepRepr_RWShapeAspectTransition.hxx>
#include <RWStepRepr_RWShapeRepresentationRelationshipWithTransformation.hxx>
#include <RWStepRepr_RWSpecifiedHigherUsageOccurrence.hxx>
#include <RWStepRepr_RWStructuralResponseProperty.hxx>
#include <RWStepRepr_RWStructuralResponsePropertyDefinitionRepresentation.hxx>
#include <RWStepRepr_RWTangent.hxx>
#include <RWStepRepr_RWValueRepresentationItem.hxx>
#include <RWStepShape_RWAdvancedBrepShapeRepresentation.hxx>
#include <RWStepShape_RWAdvancedFace.hxx>
#include <RWStepShape_RWAngularLocation.hxx>
#include <RWStepShape_RWAngularSize.hxx>
#include <RWStepShape_RWBlock.hxx>
#include <RWStepShape_RWBooleanResult.hxx>
#include <RWStepShape_RWBoxDomain.hxx>
#include <RWStepShape_RWBoxedHalfSpace.hxx>
#include <RWStepShape_RWBrepWithVoids.hxx>
#include <RWStepShape_RWClosedShell.hxx>
#include <RWStepShape_RWCompoundShapeRepresentation.hxx>
#include <RWStepShape_RWConnectedEdgeSet.hxx>
#include <RWStepShape_RWConnectedFaceSet.hxx>
#include <RWStepShape_RWConnectedFaceShapeRepresentation.hxx>
#include <RWStepShape_RWConnectedFaceSubSet.hxx>
#include <RWStepShape_RWContextDependentShapeRepresentation.hxx>
#include <RWStepShape_RWCsgShapeRepresentation.hxx>
#include <RWStepShape_RWCsgSolid.hxx>
#include <RWStepShape_RWDefinitionalRepresentationAndShapeRepresentation.hxx>
#include <RWStepShape_RWDimensionalCharacteristicRepresentation.hxx>
#include <RWStepShape_RWDimensionalLocation.hxx>
#include <RWStepShape_RWDimensionalLocationWithPath.hxx>
#include <RWStepShape_RWDimensionalSize.hxx>
#include <RWStepShape_RWDimensionalSizeWithPath.hxx>
#include <RWStepShape_RWEdge.hxx>
#include <RWStepShape_RWEdgeBasedWireframeModel.hxx>
#include <RWStepShape_RWEdgeBasedWireframeShapeRepresentation.hxx>
#include <RWStepShape_RWEdgeCurve.hxx>
#include <RWStepShape_RWEdgeLoop.hxx>
#include <RWStepShape_RWExtrudedAreaSolid.hxx>
#include <RWStepShape_RWExtrudedFaceSolid.hxx>
#include <RWStepShape_RWFace.hxx>
#include <RWStepShape_RWFaceBasedSurfaceModel.hxx>
#include <RWStepShape_RWFaceBound.hxx>
#include <RWStepShape_RWFaceOuterBound.hxx>
#include <RWStepShape_RWFaceSurface.hxx>
#include <RWStepShape_RWFacetedBrep.hxx>
#include <RWStepShape_RWFacetedBrepAndBrepWithVoids.hxx>
#include <RWStepShape_RWFacetedBrepShapeRepresentation.hxx>
#include <RWStepShape_RWGeometricallyBoundedSurfaceShapeRepresentation.hxx>
#include <RWStepShape_RWGeometricallyBoundedWireframeShapeRepresentation.hxx>
#include <RWStepShape_RWGeometricCurveSet.hxx>
#include <RWStepShape_RWGeometricSet.hxx>
#include <RWStepShape_RWHalfSpaceSolid.hxx>
#include <RWStepShape_RWLimitsAndFits.hxx>
#include <RWStepShape_RWLoop.hxx>
#include <RWStepShape_RWLoopAndPath.hxx>
#include <RWStepShape_RWManifoldSolidBrep.hxx>
#include <RWStepShape_RWManifoldSurfaceShapeRepresentation.hxx>
#include <RWStepShape_RWMeasureQualification.hxx>
#include <RWStepShape_RWMeasureRepresentationItemAndQualifiedRepresentationItem.hxx>
#include <RWStepShape_RWNonManifoldSurfaceShapeRepresentation.hxx>
#include <RWStepShape_RWOpenShell.hxx>
#include <RWStepShape_RWOrientedClosedShell.hxx>
#include <RWStepShape_RWOrientedEdge.hxx>
#include <RWStepShape_RWOrientedFace.hxx>
#include <RWStepShape_RWOrientedOpenShell.hxx>
#include <RWStepShape_RWOrientedPath.hxx>
#include <RWStepShape_RWPath.hxx>
#include <RWStepShape_RWPlusMinusTolerance.hxx>
#include <RWStepShape_RWPointRepresentation.hxx>
#include <RWStepShape_RWPolyLoop.hxx>
#include <RWStepShape_RWPrecisionQualifier.hxx>
#include <RWStepShape_RWQualifiedRepresentationItem.hxx>
#include <RWStepShape_RWRevolvedAreaSolid.hxx>
#include <RWStepShape_RWRevolvedFaceSolid.hxx>
#include <RWStepShape_RWRightAngularWedge.hxx>
#include <RWStepShape_RWRightCircularCone.hxx>
#include <RWStepShape_RWRightCircularCylinder.hxx>
#include <RWStepShape_RWSeamEdge.hxx>
#include <RWStepShape_RWShapeDefinitionRepresentation.hxx>
#include <RWStepShape_RWShapeDimensionRepresentation.hxx>
#include <RWStepShape_RWShapeRepresentation.hxx>
#include <RWStepShape_RWShapeRepresentationWithParameters.hxx>
#include <RWStepShape_RWShellBasedSurfaceModel.hxx>
#include <RWStepShape_RWSolidModel.hxx>
#include <RWStepShape_RWSolidReplica.hxx>
#include <RWStepShape_RWSphere.hxx>
#include <RWStepShape_RWSubedge.hxx>
#include <RWStepShape_RWSubface.hxx>
#include <RWStepShape_RWSweptAreaSolid.hxx>
#include <RWStepShape_RWSweptFaceSolid.hxx>
#include <RWStepShape_RWToleranceValue.hxx>
#include <RWStepShape_RWTopologicalRepresentationItem.hxx>
#include <RWStepShape_RWTorus.hxx>
#include <RWStepShape_RWTransitionalShapeRepresentation.hxx>
#include <RWStepShape_RWTypeQualifier.hxx>
#include <RWStepShape_RWValueFormatTypeQualifier.hxx>
#include <RWStepShape_RWVertex.hxx>
#include <RWStepShape_RWVertexLoop.hxx>
#include <RWStepShape_RWVertexPoint.hxx>
#include <StepBasic_Action.hxx>
#include <StepBasic_ActionAssignment.hxx>
#include <StepBasic_ActionMethod.hxx>
#include <StepBasic_ActionRequestAssignment.hxx>
#include <StepBasic_ActionRequestSolution.hxx>
#include <StepBasic_Address.hxx>
#include <StepBasic_ApplicationContext.hxx>
#include <StepBasic_ApplicationContextElement.hxx>
#include <StepBasic_ApplicationProtocolDefinition.hxx>
#include <StepBasic_Approval.hxx>
#include <StepBasic_ApprovalAssignment.hxx>
#include <StepBasic_ApprovalDateTime.hxx>
#include <StepBasic_ApprovalPersonOrganization.hxx>
#include <StepBasic_ApprovalRelationship.hxx>
#include <StepBasic_ApprovalRole.hxx>
#include <StepBasic_ApprovalStatus.hxx>
#include <StepBasic_AreaUnit.hxx>
#include <StepBasic_CalendarDate.hxx>
#include <StepBasic_Certification.hxx>
#include <StepBasic_CertificationAssignment.hxx>
#include <StepBasic_CertificationType.hxx>
#include <StepBasic_CharacterizedObject.hxx>
#include <StepBasic_Contract.hxx>
#include <StepBasic_ContractAssignment.hxx>
#include <StepBasic_ContractType.hxx>
#include <StepBasic_ConversionBasedUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndAreaUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndLengthUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndMassUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndPlaneAngleUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndRatioUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndSolidAngleUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndTimeUnit.hxx>
#include <StepBasic_ConversionBasedUnitAndVolumeUnit.hxx>
#include <StepBasic_CoordinatedUniversalTimeOffset.hxx>
#include <StepBasic_Date.hxx>
#include <StepBasic_DateAndTime.hxx>
#include <StepBasic_DateAndTimeAssignment.hxx>
#include <StepBasic_DateAssignment.hxx>
#include <StepBasic_DateRole.hxx>
#include <StepBasic_DateTimeRole.hxx>
#include <StepBasic_DateTimeSelect.hxx>
#include <StepBasic_DerivedUnit.hxx>
#include <StepBasic_DerivedUnitElement.hxx>
#include <StepBasic_DesignContext.hxx>
#include <StepBasic_DigitalDocument.hxx>
#include <StepBasic_DimensionalExponents.hxx>
#include <StepBasic_Document.hxx>
#include <StepBasic_DocumentFile.hxx>
#include <StepBasic_DocumentProductAssociation.hxx>
#include <StepBasic_DocumentProductEquivalence.hxx>
#include <StepBasic_DocumentReference.hxx>
#include <StepBasic_DocumentRelationship.hxx>
#include <StepBasic_DocumentRepresentationType.hxx>
#include <StepBasic_DocumentType.hxx>
#include <StepBasic_DocumentUsageConstraint.hxx>
#include <StepBasic_Effectivity.hxx>
#include <StepBasic_EffectivityAssignment.hxx>
#include <StepBasic_EulerAngles.hxx>
#include <StepBasic_ExternalIdentificationAssignment.hxx>
#include <StepBasic_ExternallyDefinedItem.hxx>
#include <StepBasic_ExternalSource.hxx>
#include <StepBasic_GeneralProperty.hxx>
#include <StepBasic_Group.hxx>
#include <StepBasic_GroupAssignment.hxx>
#include <StepBasic_GroupRelationship.hxx>
#include <StepBasic_IdentificationAssignment.hxx>
#include <StepBasic_IdentificationRole.hxx>
#include <StepBasic_LengthMeasureWithUnit.hxx>
#include <StepBasic_LengthUnit.hxx>
#include <StepBasic_LocalTime.hxx>
#include <StepBasic_MassMeasureWithUnit.hxx>
#include <StepBasic_MassUnit.hxx>
#include <StepBasic_MeasureValueMember.hxx>
#include <StepBasic_MeasureWithUnit.hxx>
#include <StepBasic_MechanicalContext.hxx>
#include <StepBasic_NameAssignment.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepBasic_ObjectRole.hxx>
#include <StepBasic_OrdinalDate.hxx>
#include <StepBasic_Organization.hxx>
#include <StepBasic_OrganizationalAddress.hxx>
#include <StepBasic_OrganizationAssignment.hxx>
#include <StepBasic_OrganizationRole.hxx>
#include <StepBasic_Person.hxx>
#include <StepBasic_PersonalAddress.hxx>
#include <StepBasic_PersonAndOrganization.hxx>
#include <StepBasic_PersonAndOrganizationAssignment.hxx>
#include <StepBasic_PersonAndOrganizationRole.hxx>
#include <StepBasic_PersonOrganizationSelect.hxx>
#include <StepBasic_PhysicallyModeledProductDefinition.hxx>
#include <StepBasic_PlaneAngleMeasureWithUnit.hxx>
#include <StepBasic_PlaneAngleUnit.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductCategory.hxx>
#include <StepBasic_ProductCategoryRelationship.hxx>
#include <StepBasic_ProductConceptContext.hxx>
#include <StepBasic_ProductContext.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepBasic_ProductDefinitionContext.hxx>
#include <StepBasic_ProductDefinitionEffectivity.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepBasic_ProductDefinitionFormationRelationship.hxx>
#include <StepBasic_ProductDefinitionFormationWithSpecifiedSource.hxx>
#include <StepBasic_ProductDefinitionOrReference.hxx>
#include <StepBasic_ProductDefinitionReference.hxx>
#include <StepBasic_ProductDefinitionReferenceWithLocalRepresentation.hxx>
#include <StepBasic_ProductDefinitionRelationship.hxx>
#include <StepBasic_ProductDefinitionWithAssociatedDocuments.hxx>
#include <StepBasic_ProductOrFormationOrDefinition.hxx>
#include <StepBasic_ProductRelatedProductCategory.hxx>
#include <StepBasic_ProductType.hxx>
#include <StepBasic_RatioMeasureWithUnit.hxx>
#include <StepBasic_RatioUnit.hxx>
#include <StepBasic_RoleAssociation.hxx>
#include <StepBasic_RoleSelect.hxx>
#include <StepBasic_SecurityClassification.hxx>
#include <StepBasic_SecurityClassificationAssignment.hxx>
#include <StepBasic_SecurityClassificationLevel.hxx>
#include <StepBasic_SiUnit.hxx>
#include <StepBasic_SiUnitAndAreaUnit.hxx>
#include <StepBasic_SiUnitAndLengthUnit.hxx>
#include <StepBasic_SiUnitAndMassUnit.hxx>
#include <StepBasic_SiUnitAndPlaneAngleUnit.hxx>
#include <StepBasic_SiUnitAndRatioUnit.hxx>
#include <StepBasic_SiUnitAndSolidAngleUnit.hxx>
#include <StepBasic_SiUnitAndThermodynamicTemperatureUnit.hxx>
#include <StepBasic_SiUnitAndTimeUnit.hxx>
#include <StepBasic_SiUnitAndVolumeUnit.hxx>
#include <StepBasic_SizeMember.hxx>
#include <StepBasic_SizeSelect.hxx>
#include <StepBasic_SolidAngleMeasureWithUnit.hxx>
#include <StepBasic_SolidAngleUnit.hxx>
#include <StepBasic_SourceItem.hxx>
#include <StepBasic_ThermodynamicTemperatureUnit.hxx>
#include <StepBasic_TimeMeasureWithUnit.hxx>
#include <StepBasic_TimeUnit.hxx>
#include <StepBasic_UncertaintyMeasureWithUnit.hxx>
#include <StepBasic_Unit.hxx>
#include <StepBasic_VersionedActionRequest.hxx>
#include <StepBasic_VolumeUnit.hxx>
#include <StepBasic_WeekOfYearAndDayDate.hxx>
#include <StepGeom_Axis1Placement.hxx>
#include <StepGeom_Axis2Placement.hxx>
#include <StepGeom_Axis2Placement2d.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_BezierCurve.hxx>
#include <StepGeom_BezierCurveAndRationalBSplineCurve.hxx>
#include <StepGeom_BezierSurface.hxx>
#include <StepGeom_BezierSurfaceAndRationalBSplineSurface.hxx>
#include <StepGeom_BoundaryCurve.hxx>
#include <StepGeom_BoundedCurve.hxx>
#include <StepGeom_BSplineCurve.hxx>
#include <StepGeom_BSplineCurveWithKnots.hxx>
#include <StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve.hxx>
#include <StepGeom_BSplineSurface.hxx>
#include <StepGeom_BSplineSurfaceWithKnots.hxx>
#include <StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx>
#include <StepGeom_CartesianPoint.hxx>
#include <StepGeom_CartesianTransformationOperator.hxx>
#include <StepGeom_CartesianTransformationOperator2d.hxx>
#include <StepGeom_CartesianTransformationOperator3d.hxx>
#include <StepGeom_Circle.hxx>
#include <StepGeom_CompositeCurve.hxx>
#include <StepGeom_CompositeCurveOnSurface.hxx>
#include <StepGeom_CompositeCurveSegment.hxx>
#include <StepGeom_Conic.hxx>
#include <StepGeom_ConicalSurface.hxx>
#include <StepGeom_Curve.hxx>
#include <StepGeom_CurveBoundedSurface.hxx>
#include <StepGeom_CurveOnSurface.hxx>
#include <StepGeom_CurveReplica.hxx>
#include <StepGeom_CylindricalSurface.hxx>
#include <StepGeom_DegeneratePcurve.hxx>
#include <StepGeom_DegenerateToroidalSurface.hxx>
#include <StepGeom_Direction.hxx>
#include <StepGeom_ElementarySurface.hxx>
#include <StepGeom_Ellipse.hxx>
#include <StepGeom_EvaluatedDegeneratePcurve.hxx>
#include <StepGeom_GeometricRepresentationContext.hxx>
#include <StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext.hxx>
#include <StepGeom_GeometricRepresentationContextAndParametricRepresentationContext.hxx>
#include <StepGeom_GeometricRepresentationItem.hxx>
#include <StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx.hxx>
#include <StepGeom_Hyperbola.hxx>
#include <StepGeom_IntersectionCurve.hxx>
#include <StepGeom_Line.hxx>
#include <StepGeom_OffsetCurve3d.hxx>
#include <StepGeom_OffsetSurface.hxx>
#include <StepGeom_OrientedSurface.hxx>
#include <StepGeom_OuterBoundaryCurve.hxx>
#include <StepGeom_Parabola.hxx>
#include <StepGeom_Pcurve.hxx>
#include <StepGeom_PcurveOrSurface.hxx>
#include <StepGeom_Placement.hxx>
#include <StepGeom_Plane.hxx>
#include <StepGeom_Point.hxx>
#include <StepGeom_PointOnCurve.hxx>
#include <StepGeom_PointOnSurface.hxx>
#include <StepGeom_PointReplica.hxx>
#include <StepGeom_Polyline.hxx>
#include <StepGeom_QuasiUniformCurve.hxx>
#include <StepGeom_QuasiUniformCurveAndRationalBSplineCurve.hxx>
#include <StepGeom_QuasiUniformSurface.hxx>
#include <StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface.hxx>
#include <StepGeom_RationalBSplineCurve.hxx>
#include <StepGeom_RationalBSplineSurface.hxx>
#include <StepGeom_RectangularCompositeSurface.hxx>
#include <StepGeom_RectangularTrimmedSurface.hxx>
#include <StepGeom_ReparametrisedCompositeCurveSegment.hxx>
#include <StepGeom_SeamCurve.hxx>
#include <StepGeom_SphericalSurface.hxx>
#include <StepGeom_SuParameters.hxx>
#include <StepGeom_Surface.hxx>
#include <StepGeom_SurfaceBoundary.hxx>
#include <StepGeom_SurfaceCurve.hxx>
#include <StepGeom_SurfaceCurveAndBoundedCurve.hxx>
#include <StepGeom_SurfaceOfLinearExtrusion.hxx>
#include <StepGeom_SurfaceOfRevolution.hxx>
#include <StepGeom_SurfacePatch.hxx>
#include <StepGeom_SurfaceReplica.hxx>
#include <StepGeom_SweptSurface.hxx>
#include <StepGeom_ToroidalSurface.hxx>
#include <StepGeom_TrimmedCurve.hxx>
#include <StepGeom_TrimmingMember.hxx>
#include <StepGeom_TrimmingSelect.hxx>
#include <StepGeom_UniformCurve.hxx>
#include <StepGeom_UniformCurveAndRationalBSplineCurve.hxx>
#include <StepGeom_UniformSurface.hxx>
#include <StepGeom_UniformSurfaceAndRationalBSplineSurface.hxx>
#include <StepGeom_Vector.hxx>
#include <StepGeom_VectorOrDirection.hxx>
#include <StepRepr_AllAroundShapeAspect.hxx>
#include <StepRepr_Apex.hxx>
#include <StepRepr_AssemblyComponentUsage.hxx>
#include <StepRepr_AssemblyComponentUsageSubstitute.hxx>
#include <StepRepr_BetweenShapeAspect.hxx>
#include <StepRepr_CentreOfSymmetry.hxx>
#include <StepRepr_CharacterizedDefinition.hxx>
#include <StepRepr_CharacterizedRepresentation.hxx>
#include <StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp.hxx>
#include <StepRepr_CompositeGroupShapeAspect.hxx>
#include <StepRepr_CompositeShapeAspect.hxx>
#include <StepRepr_CompoundRepresentationItem.hxx>
#include <StepRepr_CompShAspAndDatumFeatAndShAsp.hxx>
#include <StepRepr_ConfigurationDesign.hxx>
#include <StepRepr_ConfigurationDesignItem.hxx>
#include <StepRepr_ConfigurationEffectivity.hxx>
#include <StepRepr_ConfigurationItem.hxx>
#include <StepRepr_ConstructiveGeometryRepresentation.hxx>
#include <StepRepr_ConstructiveGeometryRepresentationRelationship.hxx>
#include <StepRepr_ContinuosShapeAspect.hxx>
#include <StepRepr_DataEnvironment.hxx>
#include <StepRepr_DefinitionalRepresentation.hxx>
#include <StepRepr_DerivedShapeAspect.hxx>
#include <StepRepr_DescriptiveRepresentationItem.hxx>
#include <StepRepr_Extension.hxx>
#include <StepRepr_ExternallyDefinedRepresentation.hxx>
#include <StepRepr_FeatureForDatumTargetRelationship.hxx>
#include <StepRepr_FunctionallyDefinedTransformation.hxx>
#include <StepRepr_GeometricAlignment.hxx>
#include <StepRepr_GlobalUncertaintyAssignedContext.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepRepr_IntegerRepresentationItem.hxx>
#include <StepRepr_ItemDefinedTransformation.hxx>
#include <StepRepr_MakeFromUsageOption.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepRepr_MaterialDesignation.hxx>
#include <StepRepr_MaterialProperty.hxx>
#include <StepRepr_MaterialPropertyRepresentation.hxx>
#include <StepRepr_MeasureRepresentationItem.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepRepr_ParallelOffset.hxx>
#include <StepRepr_ParametricRepresentationContext.hxx>
#include <StepRepr_PerpendicularTo.hxx>
#include <StepRepr_ProductConcept.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepRepr_ProductDefinitionUsage.hxx>
#include <StepRepr_PromissoryUsageOccurrence.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepRepr_PropertyDefinitionRelationship.hxx>
#include <StepRepr_PropertyDefinitionRepresentation.hxx>
#include <StepRepr_QuantifiedAssemblyComponentUsage.hxx>
#include <StepRepr_Representation.hxx>
#include <StepRepr_RepresentationContext.hxx>
#include <StepRepr_RepresentationContextReference.hxx>
#include <StepRepr_RepresentationItem.hxx>
#include <StepRepr_RepresentationMap.hxx>
#include <StepRepr_RepresentationOrRepresentationReference.hxx>
#include <StepRepr_RepresentationReference.hxx>
#include <StepRepr_RepresentationRelationship.hxx>
#include <StepRepr_RepresentationRelationshipWithTransformation.hxx>
#include <StepRepr_RepresentedDefinition.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnit.hxx>
#include <StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI.hxx>
#include <StepRepr_ReprItemAndMeasureWithUnit.hxx>
#include <StepRepr_ReprItemAndMeasureWithUnitAndQRI.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnit.hxx>
#include <StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI.hxx>
#include <StepRepr_ShapeAspect.hxx>
#include <StepRepr_ShapeAspectDerivingRelationship.hxx>
#include <StepRepr_ShapeAspectRelationship.hxx>
#include <StepRepr_ShapeAspectTransition.hxx>
#include <StepRepr_ShapeDefinition.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <StepRepr_ShapeRepresentationRelationshipWithTransformation.hxx>
#include <StepRepr_SpecifiedHigherUsageOccurrence.hxx>
#include <StepRepr_StructuralResponseProperty.hxx>
#include <StepRepr_StructuralResponsePropertyDefinitionRepresentation.hxx>
#include <StepRepr_SuppliedPartRelationship.hxx>
#include <StepRepr_Tangent.hxx>
#include <StepRepr_Transformation.hxx>
#include <StepRepr_ValueRange.hxx>
#include <StepRepr_ValueRepresentationItem.hxx>
#include <StepShape_AdvancedBrepShapeRepresentation.hxx>
#include <StepShape_AdvancedFace.hxx>
#include <StepShape_AngularLocation.hxx>
#include <StepShape_AngularSize.hxx>
#include <StepShape_Block.hxx>
#include <StepShape_BooleanOperand.hxx>
#include <StepShape_BooleanResult.hxx>
#include <StepShape_BoxDomain.hxx>
#include <StepShape_BoxedHalfSpace.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StepShape_ClosedShell.hxx>
#include <StepShape_CompoundShapeRepresentation.hxx>
#include <StepShape_ConnectedEdgeSet.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <StepShape_ConnectedFaceShapeRepresentation.hxx>
#include <StepShape_ConnectedFaceSubSet.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <StepShape_CsgPrimitive.hxx>
#include <StepShape_CsgSelect.hxx>
#include <StepShape_CsgShapeRepresentation.hxx>
#include <StepShape_CsgSolid.hxx>
#include <StepShape_DefinitionalRepresentationAndShapeRepresentation.hxx>
#include <StepShape_DimensionalCharacteristic.hxx>
#include <StepShape_DimensionalCharacteristicRepresentation.hxx>
#include <StepShape_DimensionalLocation.hxx>
#include <StepShape_DimensionalLocationWithPath.hxx>
#include <StepShape_DimensionalSize.hxx>
#include <StepShape_DimensionalSizeWithPath.hxx>
#include <StepShape_DirectedDimensionalLocation.hxx>
#include <StepShape_Edge.hxx>
#include <StepShape_EdgeBasedWireframeModel.hxx>
#include <StepShape_EdgeBasedWireframeShapeRepresentation.hxx>
#include <StepShape_EdgeCurve.hxx>
#include <StepShape_EdgeLoop.hxx>
#include <StepShape_ExtrudedAreaSolid.hxx>
#include <StepShape_ExtrudedFaceSolid.hxx>
#include <StepShape_Face.hxx>
#include <StepShape_FaceBasedSurfaceModel.hxx>
#include <StepShape_FaceBound.hxx>
#include <StepShape_FaceOuterBound.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StepShape_FacetedBrepShapeRepresentation.hxx>
#include <StepShape_GeometricallyBoundedSurfaceShapeRepresentation.hxx>
#include <StepShape_GeometricallyBoundedWireframeShapeRepresentation.hxx>
#include <StepShape_GeometricCurveSet.hxx>
#include <StepShape_GeometricSet.hxx>
#include <StepShape_GeometricSetSelect.hxx>
#include <StepShape_HalfSpaceSolid.hxx>
#include <StepShape_LimitsAndFits.hxx>
#include <StepShape_Loop.hxx>
#include <StepShape_LoopAndPath.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <StepShape_ManifoldSurfaceShapeRepresentation.hxx>
#include <StepShape_MeasureQualification.hxx>
#include <StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem.hxx>
#include <StepShape_NonManifoldSurfaceShapeRepresentation.hxx>
#include <StepShape_OpenShell.hxx>
#include <StepShape_OrientedClosedShell.hxx>
#include <StepShape_OrientedEdge.hxx>
#include <StepShape_OrientedFace.hxx>
#include <StepShape_OrientedOpenShell.hxx>
#include <StepShape_OrientedPath.hxx>
#include <StepShape_Path.hxx>
#include <StepShape_PlusMinusTolerance.hxx>
#include <StepShape_PointRepresentation.hxx>
#include <StepShape_PolyLoop.hxx>
#include <StepShape_PrecisionQualifier.hxx>
#include <StepShape_QualifiedRepresentationItem.hxx>
#include <StepShape_ReversibleTopologyItem.hxx>
#include <StepShape_RevolvedAreaSolid.hxx>
#include <StepShape_RevolvedFaceSolid.hxx>
#include <StepShape_RightAngularWedge.hxx>
#include <StepShape_RightCircularCone.hxx>
#include <StepShape_RightCircularCylinder.hxx>
#include <StepShape_SeamEdge.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepShape_ShapeDimensionRepresentation.hxx>
#include <StepShape_ShapeDimensionRepresentationItem.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepShape_ShapeRepresentationWithParameters.hxx>
#include <StepShape_Shell.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StepShape_SolidModel.hxx>
#include <StepShape_SolidReplica.hxx>
#include <StepShape_Sphere.hxx>
#include <StepShape_Subedge.hxx>
#include <StepShape_Subface.hxx>
#include <StepShape_SurfaceModel.hxx>
#include <StepShape_SweptAreaSolid.hxx>
#include <StepShape_SweptFaceSolid.hxx>
#include <StepShape_ToleranceMethodDefinition.hxx>
#include <StepShape_ToleranceValue.hxx>
#include <StepShape_TopologicalRepresentationItem.hxx>
#include <StepShape_Torus.hxx>
#include <StepShape_TransitionalShapeRepresentation.hxx>
#include <StepShape_TypeQualifier.hxx>
#include <StepShape_ValueFormatTypeQualifier.hxx>
#include <StepShape_ValueQualifier.hxx>
#include <StepShape_Vertex.hxx>
#include <StepShape_VertexLoop.hxx>
#include <StepShape_VertexPoint.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(StepBasic_Action)
DEFINE_HANDLECLASS(StepBasic_ActionAssignment)
DEFINE_HANDLECLASS(StepBasic_ActionMethod)
DEFINE_HANDLECLASS(StepBasic_ActionRequestAssignment)
DEFINE_HANDLECLASS(StepBasic_ActionRequestSolution)
DEFINE_HANDLECLASS(StepBasic_Address)
DEFINE_HANDLECLASS(StepBasic_ApplicationContext)
DEFINE_HANDLECLASS(StepBasic_ApplicationContextElement)
DEFINE_HANDLECLASS(StepBasic_ApplicationProtocolDefinition)
DEFINE_HANDLECLASS(StepBasic_Approval)
DEFINE_HANDLECLASS(StepBasic_ApprovalAssignment)
DEFINE_HANDLECLASS(StepBasic_ApprovalDateTime)
DEFINE_HANDLECLASS(StepBasic_ApprovalPersonOrganization)
DEFINE_HANDLECLASS(StepBasic_ApprovalRelationship)
DEFINE_HANDLECLASS(StepBasic_ApprovalRole)
DEFINE_HANDLECLASS(StepBasic_ApprovalStatus)
DEFINE_HANDLECLASS(StepBasic_AreaUnit)
DEFINE_HANDLECLASS(StepBasic_CalendarDate)
DEFINE_HANDLECLASS(StepBasic_Certification)
DEFINE_HANDLECLASS(StepBasic_CertificationAssignment)
DEFINE_HANDLECLASS(StepBasic_CertificationType)
DEFINE_HANDLECLASS(StepBasic_CharacterizedObject)
DEFINE_HANDLECLASS(StepBasic_Contract)
DEFINE_HANDLECLASS(StepBasic_ContractAssignment)
DEFINE_HANDLECLASS(StepBasic_ContractType)
DEFINE_HANDLECLASS(StepBasic_ConversionBasedUnit)
DEFINE_HANDLECLASS(StepBasic_ConversionBasedUnitAndAreaUnit)
DEFINE_HANDLECLASS(StepBasic_ConversionBasedUnitAndLengthUnit)
DEFINE_HANDLECLASS(StepBasic_ConversionBasedUnitAndMassUnit)
DEFINE_HANDLECLASS(StepBasic_ConversionBasedUnitAndPlaneAngleUnit)
DEFINE_HANDLECLASS(StepBasic_ConversionBasedUnitAndRatioUnit)
DEFINE_HANDLECLASS(StepBasic_ConversionBasedUnitAndSolidAngleUnit)
DEFINE_HANDLECLASS(StepBasic_ConversionBasedUnitAndTimeUnit)
DEFINE_HANDLECLASS(StepBasic_ConversionBasedUnitAndVolumeUnit)
DEFINE_HANDLECLASS(StepBasic_CoordinatedUniversalTimeOffset)
DEFINE_HANDLECLASS(StepBasic_Date)
DEFINE_HANDLECLASS(StepBasic_DateAndTime)
DEFINE_HANDLECLASS(StepBasic_DateAndTimeAssignment)
DEFINE_HANDLECLASS(StepBasic_DateAssignment)
DEFINE_HANDLECLASS(StepBasic_DateRole)
DEFINE_HANDLECLASS(StepBasic_DateTimeRole)
DEFINE_HANDLECLASS(StepBasic_DerivedUnit)
DEFINE_HANDLECLASS(StepBasic_DerivedUnitElement)
DEFINE_HANDLECLASS(StepBasic_DesignContext)
DEFINE_HANDLECLASS(StepBasic_DigitalDocument)
DEFINE_HANDLECLASS(StepBasic_DimensionalExponents)
DEFINE_HANDLECLASS(StepBasic_Document)
DEFINE_HANDLECLASS(StepBasic_DocumentFile)
DEFINE_HANDLECLASS(StepBasic_DocumentProductAssociation)
DEFINE_HANDLECLASS(StepBasic_DocumentProductEquivalence)
DEFINE_HANDLECLASS(StepBasic_DocumentReference)
DEFINE_HANDLECLASS(StepBasic_DocumentRelationship)
DEFINE_HANDLECLASS(StepBasic_DocumentRepresentationType)
DEFINE_HANDLECLASS(StepBasic_DocumentType)
DEFINE_HANDLECLASS(StepBasic_DocumentUsageConstraint)
DEFINE_HANDLECLASS(StepBasic_Effectivity)
DEFINE_HANDLECLASS(StepBasic_EffectivityAssignment)
DEFINE_HANDLECLASS(StepBasic_EulerAngles)
DEFINE_HANDLECLASS(StepBasic_ExternalIdentificationAssignment)
DEFINE_HANDLECLASS(StepBasic_ExternallyDefinedItem)
DEFINE_HANDLECLASS(StepBasic_ExternalSource)
DEFINE_HANDLECLASS(StepBasic_GeneralProperty)
DEFINE_HANDLECLASS(StepBasic_Group)
DEFINE_HANDLECLASS(StepBasic_GroupAssignment)
DEFINE_HANDLECLASS(StepBasic_GroupRelationship)
DEFINE_HANDLECLASS(StepBasic_IdentificationAssignment)
DEFINE_HANDLECLASS(StepBasic_IdentificationRole)
DEFINE_HANDLECLASS(StepBasic_LengthMeasureWithUnit)
DEFINE_HANDLECLASS(StepBasic_LengthUnit)
DEFINE_HANDLECLASS(StepBasic_LocalTime)
DEFINE_HANDLECLASS(StepBasic_MassMeasureWithUnit)
DEFINE_HANDLECLASS(StepBasic_MassUnit)
DEFINE_HANDLECLASS(StepBasic_MeasureValueMember)
DEFINE_HANDLECLASS(StepBasic_MeasureWithUnit)
DEFINE_HANDLECLASS(StepBasic_MechanicalContext)
DEFINE_HANDLECLASS(StepBasic_NameAssignment)
DEFINE_HANDLECLASS(StepBasic_NamedUnit)
DEFINE_HANDLECLASS(StepBasic_ObjectRole)
DEFINE_HANDLECLASS(StepBasic_OrdinalDate)
DEFINE_HANDLECLASS(StepBasic_Organization)
DEFINE_HANDLECLASS(StepBasic_OrganizationalAddress)
DEFINE_HANDLECLASS(StepBasic_OrganizationAssignment)
DEFINE_HANDLECLASS(StepBasic_OrganizationRole)
DEFINE_HANDLECLASS(StepBasic_Person)
DEFINE_HANDLECLASS(StepBasic_PersonalAddress)
DEFINE_HANDLECLASS(StepBasic_PersonAndOrganization)
DEFINE_HANDLECLASS(StepBasic_PersonAndOrganizationAssignment)
DEFINE_HANDLECLASS(StepBasic_PersonAndOrganizationRole)
DEFINE_HANDLECLASS(StepBasic_PhysicallyModeledProductDefinition)
DEFINE_HANDLECLASS(StepBasic_PlaneAngleMeasureWithUnit)
DEFINE_HANDLECLASS(StepBasic_PlaneAngleUnit)
DEFINE_HANDLECLASS(StepBasic_Product)
DEFINE_HANDLECLASS(StepBasic_ProductCategory)
DEFINE_HANDLECLASS(StepBasic_ProductCategoryRelationship)
DEFINE_HANDLECLASS(StepBasic_ProductConceptContext)
DEFINE_HANDLECLASS(StepBasic_ProductContext)
DEFINE_HANDLECLASS(StepBasic_ProductDefinition)
DEFINE_HANDLECLASS(StepBasic_ProductDefinitionContext)
DEFINE_HANDLECLASS(StepBasic_ProductDefinitionEffectivity)
DEFINE_HANDLECLASS(StepBasic_ProductDefinitionFormation)
DEFINE_HANDLECLASS(StepBasic_ProductDefinitionFormationRelationship)
DEFINE_HANDLECLASS(StepBasic_ProductDefinitionFormationWithSpecifiedSource)
DEFINE_HANDLECLASS(StepBasic_ProductDefinitionReference)
DEFINE_HANDLECLASS(StepBasic_ProductDefinitionReferenceWithLocalRepresentation)
DEFINE_HANDLECLASS(StepBasic_ProductDefinitionRelationship)
DEFINE_HANDLECLASS(StepBasic_ProductDefinitionWithAssociatedDocuments)
DEFINE_HANDLECLASS(StepBasic_ProductRelatedProductCategory)
DEFINE_HANDLECLASS(StepBasic_ProductType)
DEFINE_HANDLECLASS(StepBasic_RatioMeasureWithUnit)
DEFINE_HANDLECLASS(StepBasic_RatioUnit)
DEFINE_HANDLECLASS(StepBasic_RoleAssociation)
DEFINE_HANDLECLASS(StepBasic_SecurityClassification)
DEFINE_HANDLECLASS(StepBasic_SecurityClassificationAssignment)
DEFINE_HANDLECLASS(StepBasic_SecurityClassificationLevel)
DEFINE_HANDLECLASS(StepBasic_SiUnit)
DEFINE_HANDLECLASS(StepBasic_SiUnitAndAreaUnit)
DEFINE_HANDLECLASS(StepBasic_SiUnitAndLengthUnit)
DEFINE_HANDLECLASS(StepBasic_SiUnitAndMassUnit)
DEFINE_HANDLECLASS(StepBasic_SiUnitAndPlaneAngleUnit)
DEFINE_HANDLECLASS(StepBasic_SiUnitAndRatioUnit)
DEFINE_HANDLECLASS(StepBasic_SiUnitAndSolidAngleUnit)
DEFINE_HANDLECLASS(StepBasic_SiUnitAndThermodynamicTemperatureUnit)
DEFINE_HANDLECLASS(StepBasic_SiUnitAndTimeUnit)
DEFINE_HANDLECLASS(StepBasic_SiUnitAndVolumeUnit)
DEFINE_HANDLECLASS(StepBasic_SizeMember)
DEFINE_HANDLECLASS(StepBasic_SolidAngleMeasureWithUnit)
DEFINE_HANDLECLASS(StepBasic_SolidAngleUnit)
DEFINE_HANDLECLASS(StepBasic_ThermodynamicTemperatureUnit)
DEFINE_HANDLECLASS(StepBasic_TimeMeasureWithUnit)
DEFINE_HANDLECLASS(StepBasic_TimeUnit)
DEFINE_HANDLECLASS(StepBasic_UncertaintyMeasureWithUnit)
DEFINE_HANDLECLASS(StepBasic_VersionedActionRequest)
DEFINE_HANDLECLASS(StepBasic_VolumeUnit)
DEFINE_HANDLECLASS(StepBasic_WeekOfYearAndDayDate)
DEFINE_HANDLECLASS(StepGeom_Axis1Placement)
DEFINE_HANDLECLASS(StepGeom_Axis2Placement2d)
DEFINE_HANDLECLASS(StepGeom_Axis2Placement3d)
DEFINE_HANDLECLASS(StepGeom_BezierCurve)
DEFINE_HANDLECLASS(StepGeom_BezierCurveAndRationalBSplineCurve)
DEFINE_HANDLECLASS(StepGeom_BezierSurface)
DEFINE_HANDLECLASS(StepGeom_BezierSurfaceAndRationalBSplineSurface)
DEFINE_HANDLECLASS(StepGeom_BoundaryCurve)
DEFINE_HANDLECLASS(StepGeom_BoundedCurve)
DEFINE_HANDLECLASS(StepGeom_BoundedSurface)
DEFINE_HANDLECLASS(StepGeom_BSplineCurve)
DEFINE_HANDLECLASS(StepGeom_BSplineCurveWithKnots)
DEFINE_HANDLECLASS(StepGeom_BSplineCurveWithKnotsAndRationalBSplineCurve)
DEFINE_HANDLECLASS(StepGeom_BSplineSurface)
DEFINE_HANDLECLASS(StepGeom_BSplineSurfaceWithKnots)
DEFINE_HANDLECLASS(StepGeom_BSplineSurfaceWithKnotsAndRationalBSplineSurface)
DEFINE_HANDLECLASS(StepGeom_CartesianPoint)
DEFINE_HANDLECLASS(StepGeom_CartesianTransformationOperator)
DEFINE_HANDLECLASS(StepGeom_CartesianTransformationOperator2d)
DEFINE_HANDLECLASS(StepGeom_CartesianTransformationOperator3d)
DEFINE_HANDLECLASS(StepGeom_Circle)
DEFINE_HANDLECLASS(StepGeom_CompositeCurve)
DEFINE_HANDLECLASS(StepGeom_CompositeCurveOnSurface)
DEFINE_HANDLECLASS(StepGeom_CompositeCurveSegment)
DEFINE_HANDLECLASS(StepGeom_Conic)
DEFINE_HANDLECLASS(StepGeom_ConicalSurface)
DEFINE_HANDLECLASS(StepGeom_Curve)
DEFINE_HANDLECLASS(StepGeom_CurveBoundedSurface)
DEFINE_HANDLECLASS(StepGeom_CurveReplica)
DEFINE_HANDLECLASS(StepGeom_CylindricalSurface)
DEFINE_HANDLECLASS(StepGeom_DegeneratePcurve)
DEFINE_HANDLECLASS(StepGeom_DegenerateToroidalSurface)
DEFINE_HANDLECLASS(StepGeom_Direction)
DEFINE_HANDLECLASS(StepGeom_ElementarySurface)
DEFINE_HANDLECLASS(StepGeom_Ellipse)
DEFINE_HANDLECLASS(StepGeom_EvaluatedDegeneratePcurve)
DEFINE_HANDLECLASS(StepGeom_GeometricRepresentationContext)
DEFINE_HANDLECLASS(StepGeom_GeometricRepresentationContextAndGlobalUnitAssignedContext)
DEFINE_HANDLECLASS(StepGeom_GeometricRepresentationContextAndParametricRepresentationContext)
DEFINE_HANDLECLASS(StepGeom_GeometricRepresentationItem)
DEFINE_HANDLECLASS(StepGeom_GeomRepContextAndGlobUnitAssCtxAndGlobUncertaintyAssCtx)
DEFINE_HANDLECLASS(StepGeom_Hyperbola)
DEFINE_HANDLECLASS(StepGeom_IntersectionCurve)
DEFINE_HANDLECLASS(StepGeom_Line)
DEFINE_HANDLECLASS(StepGeom_OffsetCurve3d)
DEFINE_HANDLECLASS(StepGeom_OffsetSurface)
DEFINE_HANDLECLASS(StepGeom_OrientedSurface)
DEFINE_HANDLECLASS(StepGeom_OuterBoundaryCurve)
DEFINE_HANDLECLASS(StepGeom_Parabola)
DEFINE_HANDLECLASS(StepGeom_Pcurve)
DEFINE_HANDLECLASS(StepGeom_Placement)
DEFINE_HANDLECLASS(StepGeom_Plane)
DEFINE_HANDLECLASS(StepGeom_Point)
DEFINE_HANDLECLASS(StepGeom_PointOnCurve)
DEFINE_HANDLECLASS(StepGeom_PointOnSurface)
DEFINE_HANDLECLASS(StepGeom_PointReplica)
DEFINE_HANDLECLASS(StepGeom_Polyline)
DEFINE_HANDLECLASS(StepGeom_QuasiUniformCurve)
DEFINE_HANDLECLASS(StepGeom_QuasiUniformCurveAndRationalBSplineCurve)
DEFINE_HANDLECLASS(StepGeom_QuasiUniformSurface)
DEFINE_HANDLECLASS(StepGeom_QuasiUniformSurfaceAndRationalBSplineSurface)
DEFINE_HANDLECLASS(StepGeom_RationalBSplineCurve)
DEFINE_HANDLECLASS(StepGeom_RationalBSplineSurface)
DEFINE_HANDLECLASS(StepGeom_RectangularCompositeSurface)
DEFINE_HANDLECLASS(StepGeom_RectangularTrimmedSurface)
DEFINE_HANDLECLASS(StepGeom_ReparametrisedCompositeCurveSegment)
DEFINE_HANDLECLASS(StepGeom_SeamCurve)
DEFINE_HANDLECLASS(StepGeom_SphericalSurface)
DEFINE_HANDLECLASS(StepGeom_SuParameters)
DEFINE_HANDLECLASS(StepGeom_Surface)
DEFINE_HANDLECLASS(StepGeom_SurfaceCurve)
DEFINE_HANDLECLASS(StepGeom_SurfaceCurveAndBoundedCurve)
DEFINE_HANDLECLASS(StepGeom_SurfaceOfLinearExtrusion)
DEFINE_HANDLECLASS(StepGeom_SurfaceOfRevolution)
DEFINE_HANDLECLASS(StepGeom_SurfacePatch)
DEFINE_HANDLECLASS(StepGeom_SurfaceReplica)
DEFINE_HANDLECLASS(StepGeom_SweptSurface)
DEFINE_HANDLECLASS(StepGeom_ToroidalSurface)
DEFINE_HANDLECLASS(StepGeom_TrimmedCurve)
DEFINE_HANDLECLASS(StepGeom_TrimmingMember)
DEFINE_HANDLECLASS(StepGeom_UniformCurve)
DEFINE_HANDLECLASS(StepGeom_UniformCurveAndRationalBSplineCurve)
DEFINE_HANDLECLASS(StepGeom_UniformSurface)
DEFINE_HANDLECLASS(StepGeom_UniformSurfaceAndRationalBSplineSurface)
DEFINE_HANDLECLASS(StepGeom_Vector)
DEFINE_HANDLECLASS(StepRepr_AllAroundShapeAspect)
DEFINE_HANDLECLASS(StepRepr_Apex)
DEFINE_HANDLECLASS(StepRepr_AssemblyComponentUsage)
DEFINE_HANDLECLASS(StepRepr_AssemblyComponentUsageSubstitute)
DEFINE_HANDLECLASS(StepRepr_BetweenShapeAspect)
DEFINE_HANDLECLASS(StepRepr_CentreOfSymmetry)
DEFINE_HANDLECLASS(StepRepr_CharacterizedRepresentation)
DEFINE_HANDLECLASS(StepRepr_CompGroupShAspAndCompShAspAndDatumFeatAndShAsp)
DEFINE_HANDLECLASS(StepRepr_CompositeGroupShapeAspect)
DEFINE_HANDLECLASS(StepRepr_CompositeShapeAspect)
DEFINE_HANDLECLASS(StepRepr_CompoundRepresentationItem)
DEFINE_HANDLECLASS(StepRepr_CompShAspAndDatumFeatAndShAsp)
DEFINE_HANDLECLASS(StepRepr_ConfigurationDesign)
DEFINE_HANDLECLASS(StepRepr_ConfigurationEffectivity)
DEFINE_HANDLECLASS(StepRepr_ConfigurationItem)
DEFINE_HANDLECLASS(StepRepr_ConstructiveGeometryRepresentation)
DEFINE_HANDLECLASS(StepRepr_ConstructiveGeometryRepresentationRelationship)
DEFINE_HANDLECLASS(StepRepr_ContinuosShapeAspect)
DEFINE_HANDLECLASS(StepRepr_DataEnvironment)
DEFINE_HANDLECLASS(StepRepr_DefinitionalRepresentation)
DEFINE_HANDLECLASS(StepRepr_DerivedShapeAspect)
DEFINE_HANDLECLASS(StepRepr_DescriptiveRepresentationItem)
DEFINE_HANDLECLASS(StepRepr_Extension)
DEFINE_HANDLECLASS(StepRepr_ExternallyDefinedRepresentation)
DEFINE_HANDLECLASS(StepRepr_FeatureForDatumTargetRelationship)
DEFINE_HANDLECLASS(StepRepr_FunctionallyDefinedTransformation)
DEFINE_HANDLECLASS(StepRepr_GeometricAlignment)
DEFINE_HANDLECLASS(StepRepr_GlobalUncertaintyAssignedContext)
DEFINE_HANDLECLASS(StepRepr_GlobalUnitAssignedContext)
DEFINE_HANDLECLASS(StepRepr_IntegerRepresentationItem)
DEFINE_HANDLECLASS(StepRepr_ItemDefinedTransformation)
DEFINE_HANDLECLASS(StepRepr_MakeFromUsageOption)
DEFINE_HANDLECLASS(StepRepr_MappedItem)
DEFINE_HANDLECLASS(StepRepr_MaterialDesignation)
DEFINE_HANDLECLASS(StepRepr_MaterialProperty)
DEFINE_HANDLECLASS(StepRepr_MaterialPropertyRepresentation)
DEFINE_HANDLECLASS(StepRepr_MeasureRepresentationItem)
DEFINE_HANDLECLASS(StepRepr_NextAssemblyUsageOccurrence)
DEFINE_HANDLECLASS(StepRepr_ParallelOffset)
DEFINE_HANDLECLASS(StepRepr_ParametricRepresentationContext)
DEFINE_HANDLECLASS(StepRepr_PerpendicularTo)
DEFINE_HANDLECLASS(StepRepr_ProductConcept)
DEFINE_HANDLECLASS(StepRepr_ProductDefinitionShape)
DEFINE_HANDLECLASS(StepRepr_ProductDefinitionUsage)
DEFINE_HANDLECLASS(StepRepr_PromissoryUsageOccurrence)
DEFINE_HANDLECLASS(StepRepr_PropertyDefinition)
DEFINE_HANDLECLASS(StepRepr_PropertyDefinitionRelationship)
DEFINE_HANDLECLASS(StepRepr_PropertyDefinitionRepresentation)
DEFINE_HANDLECLASS(StepRepr_QuantifiedAssemblyComponentUsage)
DEFINE_HANDLECLASS(StepRepr_Representation)
DEFINE_HANDLECLASS(StepRepr_RepresentationContext)
DEFINE_HANDLECLASS(StepRepr_RepresentationContextReference)
DEFINE_HANDLECLASS(StepRepr_RepresentationItem)
DEFINE_HANDLECLASS(StepRepr_RepresentationMap)
DEFINE_HANDLECLASS(StepRepr_RepresentationReference)
DEFINE_HANDLECLASS(StepRepr_RepresentationRelationship)
DEFINE_HANDLECLASS(StepRepr_RepresentationRelationshipWithTransformation)
DEFINE_HANDLECLASS(StepRepr_ReprItemAndLengthMeasureWithUnit)
DEFINE_HANDLECLASS(StepRepr_ReprItemAndLengthMeasureWithUnitAndQRI)
DEFINE_HANDLECLASS(StepRepr_ReprItemAndMeasureWithUnit)
DEFINE_HANDLECLASS(StepRepr_ReprItemAndMeasureWithUnitAndQRI)
DEFINE_HANDLECLASS(StepRepr_ReprItemAndPlaneAngleMeasureWithUnit)
DEFINE_HANDLECLASS(StepRepr_ReprItemAndPlaneAngleMeasureWithUnitAndQRI)
DEFINE_HANDLECLASS(StepRepr_ShapeAspectDerivingRelationship)
DEFINE_HANDLECLASS(StepRepr_ShapeAspectRelationship)
DEFINE_HANDLECLASS(StepRepr_ShapeAspectTransition)
DEFINE_HANDLECLASS(StepRepr_ShapeRepresentationRelationship)
DEFINE_HANDLECLASS(StepRepr_ShapeRepresentationRelationshipWithTransformation)
DEFINE_HANDLECLASS(StepRepr_SpecifiedHigherUsageOccurrence)
DEFINE_HANDLECLASS(StepRepr_StructuralResponseProperty)
DEFINE_HANDLECLASS(StepRepr_StructuralResponsePropertyDefinitionRepresentation)
DEFINE_HANDLECLASS(StepRepr_SuppliedPartRelationship)
DEFINE_HANDLECLASS(StepRepr_Tangent)
DEFINE_HANDLECLASS(StepRepr_ValueRange)
DEFINE_HANDLECLASS(StepRepr_ValueRepresentationItem)
DEFINE_HANDLECLASS(StepShape_AdvancedBrepShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_AdvancedFace)
DEFINE_HANDLECLASS(StepShape_AngularLocation)
DEFINE_HANDLECLASS(StepShape_AngularSize)
DEFINE_HANDLECLASS(StepShape_Block)
DEFINE_HANDLECLASS(StepShape_BooleanResult)
DEFINE_HANDLECLASS(StepShape_BoxDomain)
DEFINE_HANDLECLASS(StepShape_BoxedHalfSpace)
DEFINE_HANDLECLASS(StepShape_BrepWithVoids)
DEFINE_HANDLECLASS(StepShape_ClosedShell)
DEFINE_HANDLECLASS(StepShape_CompoundShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_ConnectedEdgeSet)
DEFINE_HANDLECLASS(StepShape_ConnectedFaceSet)
DEFINE_HANDLECLASS(StepShape_ConnectedFaceShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_ConnectedFaceSubSet)
DEFINE_HANDLECLASS(StepShape_ContextDependentShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_CsgShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_CsgSolid)
DEFINE_HANDLECLASS(StepShape_DefinitionalRepresentationAndShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_DimensionalCharacteristicRepresentation)
DEFINE_HANDLECLASS(StepShape_DimensionalLocation)
DEFINE_HANDLECLASS(StepShape_DimensionalLocationWithPath)
DEFINE_HANDLECLASS(StepShape_DimensionalSize)
DEFINE_HANDLECLASS(StepShape_DimensionalSizeWithPath)
DEFINE_HANDLECLASS(StepShape_DirectedDimensionalLocation)
DEFINE_HANDLECLASS(StepShape_Edge)
DEFINE_HANDLECLASS(StepShape_EdgeBasedWireframeModel)
DEFINE_HANDLECLASS(StepShape_EdgeBasedWireframeShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_EdgeCurve)
DEFINE_HANDLECLASS(StepShape_EdgeLoop)
DEFINE_HANDLECLASS(StepShape_ExtrudedAreaSolid)
DEFINE_HANDLECLASS(StepShape_ExtrudedFaceSolid)
DEFINE_HANDLECLASS(StepShape_Face)
DEFINE_HANDLECLASS(StepShape_FaceBasedSurfaceModel)
DEFINE_HANDLECLASS(StepShape_FaceBound)
DEFINE_HANDLECLASS(StepShape_FaceOuterBound)
DEFINE_HANDLECLASS(StepShape_FaceSurface)
DEFINE_HANDLECLASS(StepShape_FacetedBrep)
DEFINE_HANDLECLASS(StepShape_FacetedBrepAndBrepWithVoids)
DEFINE_HANDLECLASS(StepShape_FacetedBrepShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_GeometricallyBoundedSurfaceShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_GeometricallyBoundedWireframeShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_GeometricCurveSet)
DEFINE_HANDLECLASS(StepShape_GeometricSet)
DEFINE_HANDLECLASS(StepShape_HalfSpaceSolid)
DEFINE_HANDLECLASS(StepShape_LimitsAndFits)
DEFINE_HANDLECLASS(StepShape_Loop)
DEFINE_HANDLECLASS(StepShape_LoopAndPath)
DEFINE_HANDLECLASS(StepShape_ManifoldSolidBrep)
DEFINE_HANDLECLASS(StepShape_ManifoldSurfaceShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_MeasureQualification)
DEFINE_HANDLECLASS(StepShape_MeasureRepresentationItemAndQualifiedRepresentationItem)
DEFINE_HANDLECLASS(StepShape_NonManifoldSurfaceShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_OpenShell)
DEFINE_HANDLECLASS(StepShape_OrientedClosedShell)
DEFINE_HANDLECLASS(StepShape_OrientedEdge)
DEFINE_HANDLECLASS(StepShape_OrientedFace)
DEFINE_HANDLECLASS(StepShape_OrientedOpenShell)
DEFINE_HANDLECLASS(StepShape_OrientedPath)
DEFINE_HANDLECLASS(StepShape_Path)
DEFINE_HANDLECLASS(StepShape_PlusMinusTolerance)
DEFINE_HANDLECLASS(StepShape_PointRepresentation)
DEFINE_HANDLECLASS(StepShape_PolyLoop)
DEFINE_HANDLECLASS(StepShape_PrecisionQualifier)
DEFINE_HANDLECLASS(StepShape_QualifiedRepresentationItem)
DEFINE_HANDLECLASS(StepShape_RevolvedAreaSolid)
DEFINE_HANDLECLASS(StepShape_RevolvedFaceSolid)
DEFINE_HANDLECLASS(StepShape_RightAngularWedge)
DEFINE_HANDLECLASS(StepShape_RightCircularCone)
DEFINE_HANDLECLASS(StepShape_RightCircularCylinder)
DEFINE_HANDLECLASS(StepShape_SeamEdge)
DEFINE_HANDLECLASS(StepShape_ShapeDefinitionRepresentation)
DEFINE_HANDLECLASS(StepShape_ShapeDimensionRepresentation)
DEFINE_HANDLECLASS(StepShape_ShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_ShapeRepresentationWithParameters)
DEFINE_HANDLECLASS(StepShape_ShellBasedSurfaceModel)
DEFINE_HANDLECLASS(StepShape_SolidModel)
DEFINE_HANDLECLASS(StepShape_SolidReplica)
DEFINE_HANDLECLASS(StepShape_Sphere)
DEFINE_HANDLECLASS(StepShape_Subedge)
DEFINE_HANDLECLASS(StepShape_Subface)
DEFINE_HANDLECLASS(StepShape_SweptAreaSolid)
DEFINE_HANDLECLASS(StepShape_SweptFaceSolid)
DEFINE_HANDLECLASS(StepShape_ToleranceValue)
DEFINE_HANDLECLASS(StepShape_TopologicalRepresentationItem)
DEFINE_HANDLECLASS(StepShape_Torus)
DEFINE_HANDLECLASS(StepShape_TransitionalShapeRepresentation)
DEFINE_HANDLECLASS(StepShape_TypeQualifier)
DEFINE_HANDLECLASS(StepShape_ValueFormatTypeQualifier)
DEFINE_HANDLECLASS(StepShape_Vertex)
DEFINE_HANDLECLASS(StepShape_VertexLoop)
DEFINE_HANDLECLASS(StepShape_VertexPoint)

