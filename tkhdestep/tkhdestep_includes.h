#include <APIHeaderSection_EditHeader.hxx>
#include <APIHeaderSection_MakeHeader.hxx>
#include <GeomToStep_MakeAxis1Placement.hxx>
#include <GeomToStep_MakeAxis2Placement2d.hxx>
#include <GeomToStep_MakeAxis2Placement3d.hxx>
#include <GeomToStep_MakeBSplineCurveWithKnots.hxx>
#include <GeomToStep_MakeBSplineCurveWithKnotsAndRationalBSplineCurve.hxx>
#include <GeomToStep_MakeBSplineSurfaceWithKnots.hxx>
#include <GeomToStep_MakeBSplineSurfaceWithKnotsAndRationalBSplineSurface.hxx>
#include <GeomToStep_MakeBoundedCurve.hxx>
#include <GeomToStep_MakeBoundedSurface.hxx>
#include <GeomToStep_MakeCartesianPoint.hxx>
#include <GeomToStep_MakeCircle.hxx>
#include <GeomToStep_MakeConic.hxx>
#include <GeomToStep_MakeConicalSurface.hxx>
#include <GeomToStep_MakeCurve.hxx>
#include <GeomToStep_MakeCylindricalSurface.hxx>
#include <GeomToStep_MakeDirection.hxx>
#include <GeomToStep_MakeElementarySurface.hxx>
#include <GeomToStep_MakeEllipse.hxx>
#include <GeomToStep_MakeHyperbola.hxx>
#include <GeomToStep_MakeLine.hxx>
#include <GeomToStep_MakeParabola.hxx>
#include <GeomToStep_MakePlane.hxx>
#include <GeomToStep_MakePolyline.hxx>
#include <GeomToStep_MakeRectangularTrimmedSurface.hxx>
#include <GeomToStep_MakeSphericalSurface.hxx>
#include <GeomToStep_MakeSurface.hxx>
#include <GeomToStep_MakeSurfaceOfLinearExtrusion.hxx>
#include <GeomToStep_MakeSurfaceOfRevolution.hxx>
#include <GeomToStep_MakeSweptSurface.hxx>
#include <GeomToStep_MakeToroidalSurface.hxx>
#include <GeomToStep_MakeVector.hxx>
#include <GeomToStep_Root.hxx>
#include <HeaderSection.hxx>
#include <HeaderSection_FileDescription.hxx>
#include <HeaderSection_FileName.hxx>
#include <HeaderSection_FileSchema.hxx>
#include <HeaderSection_Protocol.hxx>
#include <RWHeaderSection.hxx>
#include <RWHeaderSection_GeneralModule.hxx>
#include <RWHeaderSection_ReadWriteModule.hxx>
#include <RWHeaderSection_RWFileDescription.hxx>
#include <RWHeaderSection_RWFileName.hxx>
#include <RWHeaderSection_RWFileSchema.hxx>
#include <STEPCAFControl_ActorWrite.hxx>
#include <STEPCAFControl_ConfigurationNode.hxx>
#include <STEPCAFControl_Controller.hxx>
#include <STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile.hxx>
#include <STEPCAFControl_DataMapIteratorOfDataMapOfLabelShape.hxx>
#include <STEPCAFControl_DataMapIteratorOfDataMapOfPDExternFile.hxx>
#include <STEPCAFControl_DataMapIteratorOfDataMapOfSDRExternFile.hxx>
#include <STEPCAFControl_DataMapIteratorOfDataMapOfShapePD.hxx>
#include <STEPCAFControl_DataMapIteratorOfDataMapOfShapeSDR.hxx>
#include <STEPCAFControl_DataMapOfLabelExternFile.hxx>
#include <STEPCAFControl_DataMapOfLabelShape.hxx>
#include <STEPCAFControl_DataMapOfPDExternFile.hxx>
#include <STEPCAFControl_DataMapOfSDRExternFile.hxx>
#include <STEPCAFControl_DataMapOfShapePD.hxx>
#include <STEPCAFControl_DataMapOfShapeSDR.hxx>
#include <STEPCAFControl_ExternFile.hxx>
#include <STEPCAFControl_GDTProperty.hxx>
#include <STEPCAFControl_Provider.hxx>
#include <STEPCAFControl_Reader.hxx>
#include <STEPCAFControl_Writer.hxx>
#include <STEPConstruct.hxx>
#include <STEPConstruct_AP203Context.hxx>
#include <STEPConstruct_Assembly.hxx>
#include <STEPConstruct_ContextTool.hxx>
#include <STEPConstruct_DataMapIteratorOfDataMapOfAsciiStringTransient.hxx>
#include <STEPConstruct_DataMapIteratorOfDataMapOfPointTransient.hxx>
#include <STEPConstruct_DataMapOfAsciiStringTransient.hxx>
#include <STEPConstruct_DataMapOfPointTransient.hxx>
#include <STEPConstruct_ExternRefs.hxx>
#include <STEPConstruct_Part.hxx>
#include <STEPConstruct_Styles.hxx>
#include <STEPConstruct_Tool.hxx>
#include <STEPConstruct_UnitContext.hxx>
#include <STEPConstruct_ValidationProps.hxx>
#include <STEPControl_ActorRead.hxx>
#include <STEPControl_ActorWrite.hxx>
#include <STEPControl_Controller.hxx>
#include <STEPControl_Reader.hxx>
#include <STEPControl_StepModelType.hxx>
#include <STEPControl_Writer.hxx>
#include <STEPEdit.hxx>
#include <STEPEdit_EditContext.hxx>
#include <STEPEdit_EditSDR.hxx>
#include <STEPSelections_AssemblyComponent.hxx>
#include <STEPSelections_AssemblyExplorer.hxx>
#include <STEPSelections_AssemblyLink.hxx>
#include <STEPSelections_Counter.hxx>
#include <STEPSelections_SelectAssembly.hxx>
#include <STEPSelections_SelectDerived.hxx>
#include <STEPSelections_SelectFaces.hxx>
#include <STEPSelections_SelectForTransfer.hxx>
#include <STEPSelections_SelectGSCurves.hxx>
#include <STEPSelections_SelectInstances.hxx>
#include <STEPSelections_SequenceOfAssemblyComponent.hxx>
#include <STEPSelections_SequenceOfAssemblyLink.hxx>
#include <StepAP203_ApprovedItem.hxx>
#include <StepAP203_CcDesignApproval.hxx>
#include <StepAP203_CcDesignCertification.hxx>
#include <StepAP203_CcDesignContract.hxx>
#include <StepAP203_CcDesignDateAndTimeAssignment.hxx>
#include <StepAP203_CcDesignPersonAndOrganizationAssignment.hxx>
#include <StepAP203_CcDesignSecurityClassification.hxx>
#include <StepAP203_CcDesignSpecificationReference.hxx>
#include <StepAP203_CertifiedItem.hxx>
#include <StepAP203_Change.hxx>
#include <StepAP203_ChangeRequest.hxx>
#include <StepAP203_ChangeRequestItem.hxx>
#include <StepAP203_ClassifiedItem.hxx>
#include <StepAP203_ContractedItem.hxx>
#include <StepAP203_DateTimeItem.hxx>
#include <StepAP203_PersonOrganizationItem.hxx>
#include <StepAP203_SpecifiedItem.hxx>
#include <StepAP203_StartRequest.hxx>
#include <StepAP203_StartRequestItem.hxx>
#include <StepAP203_StartWork.hxx>
#include <StepAP203_WorkItem.hxx>
#include <StepAP209_Construct.hxx>
#include <StepAP214.hxx>
#include <StepAP214_AppliedApprovalAssignment.hxx>
#include <StepAP214_AppliedDateAndTimeAssignment.hxx>
#include <StepAP214_AppliedDateAssignment.hxx>
#include <StepAP214_AppliedDocumentReference.hxx>
#include <StepAP214_AppliedExternalIdentificationAssignment.hxx>
#include <StepAP214_AppliedGroupAssignment.hxx>
#include <StepAP214_AppliedOrganizationAssignment.hxx>
#include <StepAP214_AppliedPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AppliedPresentedItem.hxx>
#include <StepAP214_AppliedSecurityClassificationAssignment.hxx>
#include <StepAP214_ApprovalItem.hxx>
#include <StepAP214_AutoDesignActualDateAndTimeAssignment.hxx>
#include <StepAP214_AutoDesignActualDateAssignment.hxx>
#include <StepAP214_AutoDesignApprovalAssignment.hxx>
#include <StepAP214_AutoDesignDateAndPersonAssignment.hxx>
#include <StepAP214_AutoDesignDateAndPersonItem.hxx>
#include <StepAP214_AutoDesignDateAndTimeItem.hxx>
#include <StepAP214_AutoDesignDatedItem.hxx>
#include <StepAP214_AutoDesignDocumentReference.hxx>
#include <StepAP214_AutoDesignGeneralOrgItem.hxx>
#include <StepAP214_AutoDesignGroupAssignment.hxx>
#include <StepAP214_AutoDesignGroupedItem.hxx>
#include <StepAP214_AutoDesignNominalDateAndTimeAssignment.hxx>
#include <StepAP214_AutoDesignNominalDateAssignment.hxx>
#include <StepAP214_AutoDesignOrganizationAssignment.hxx>
#include <StepAP214_AutoDesignOrganizationItem.hxx>
#include <StepAP214_AutoDesignPersonAndOrganizationAssignment.hxx>
#include <StepAP214_AutoDesignPresentedItem.hxx>
#include <StepAP214_AutoDesignPresentedItemSelect.hxx>
#include <StepAP214_AutoDesignReferencingItem.hxx>
#include <StepAP214_AutoDesignSecurityClassificationAssignment.hxx>
#include <StepAP214_Class.hxx>
#include <StepAP214_DateAndTimeItem.hxx>
#include <StepAP214_DateItem.hxx>
#include <StepAP214_DocumentReferenceItem.hxx>
#include <StepAP214_ExternalIdentificationItem.hxx>
#include <StepAP214_ExternallyDefinedClass.hxx>
#include <StepAP214_ExternallyDefinedGeneralProperty.hxx>
#include <StepAP214_GroupItem.hxx>
#include <StepAP214_OrganizationItem.hxx>
#include <StepAP214_PersonAndOrganizationItem.hxx>
#include <StepAP214_PresentedItemSelect.hxx>
#include <StepAP214_Protocol.hxx>
#include <StepAP214_RepItemGroup.hxx>
#include <StepAP214_SecurityClassificationItem.hxx>
#include <StepAP242_DraughtingModelItemAssociation.hxx>
#include <StepAP242_GeometricItemSpecificUsage.hxx>
#include <StepAP242_IdAttribute.hxx>
#include <StepAP242_ItemIdentifiedRepresentationUsage.hxx>
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
#include <StepData.hxx>
#include <StepData_ConfParameters.hxx>
#include <StepData_DefaultGeneral.hxx>
#include <StepData_Described.hxx>
#include <StepData_ECDescr.hxx>
#include <StepData_EDescr.hxx>
#include <StepData_EnumTool.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_Factors.hxx>
#include <StepData_Field.hxx>
#include <StepData_FieldList.hxx>
#include <StepData_FieldList1.hxx>
#include <StepData_FieldListD.hxx>
#include <StepData_FieldListN.hxx>
#include <StepData_FileProtocol.hxx>
#include <StepData_FileRecognizer.hxx>
#include <StepData_FreeFormEntity.hxx>
#include <StepData_GeneralModule.hxx>
#include <StepData_GlobalNodeOfWriterLib.hxx>
#include <StepData_NodeOfWriterLib.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_Plex.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_SelectArrReal.hxx>
#include <StepData_SelectInt.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_SelectNamed.hxx>
#include <StepData_SelectReal.hxx>
#include <StepData_SelectType.hxx>
#include <StepData_Simple.hxx>
#include <StepData_StepDumper.hxx>
#include <StepData_StepModel.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepReaderTool.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_UndefinedEntity.hxx>
#include <StepData_WriterLib.hxx>
#include <StepDimTol_AngularityTolerance.hxx>
#include <StepDimTol_CircularRunoutTolerance.hxx>
#include <StepDimTol_CoaxialityTolerance.hxx>
#include <StepDimTol_CommonDatum.hxx>
#include <StepDimTol_ConcentricityTolerance.hxx>
#include <StepDimTol_CylindricityTolerance.hxx>
#include <StepDimTol_Datum.hxx>
#include <StepDimTol_DatumFeature.hxx>
#include <StepDimTol_DatumOrCommonDatum.hxx>
#include <StepDimTol_DatumReference.hxx>
#include <StepDimTol_DatumReferenceCompartment.hxx>
#include <StepDimTol_DatumReferenceElement.hxx>
#include <StepDimTol_DatumReferenceModifier.hxx>
#include <StepDimTol_DatumReferenceModifierWithValue.hxx>
#include <StepDimTol_DatumSystem.hxx>
#include <StepDimTol_DatumSystemOrReference.hxx>
#include <StepDimTol_DatumTarget.hxx>
#include <StepDimTol_FlatnessTolerance.hxx>
#include <StepDimTol_GeneralDatumReference.hxx>
#include <StepDimTol_GeometricTolerance.hxx>
#include <StepDimTol_GeometricToleranceRelationship.hxx>
#include <StepDimTol_GeometricToleranceTarget.hxx>
#include <StepDimTol_GeometricToleranceWithDatumReference.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedAreaUnit.hxx>
#include <StepDimTol_GeometricToleranceWithDefinedUnit.hxx>
#include <StepDimTol_GeometricToleranceWithMaximumTolerance.hxx>
#include <StepDimTol_GeometricToleranceWithModifiers.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRef.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMaxTol.hxx>
#include <StepDimTol_GeoTolAndGeoTolWthMod.hxx>
#include <StepDimTol_LineProfileTolerance.hxx>
#include <StepDimTol_ModifiedGeometricTolerance.hxx>
#include <StepDimTol_NonUniformZoneDefinition.hxx>
#include <StepDimTol_ParallelismTolerance.hxx>
#include <StepDimTol_PerpendicularityTolerance.hxx>
#include <StepDimTol_PlacedDatumTargetFeature.hxx>
#include <StepDimTol_PositionTolerance.hxx>
#include <StepDimTol_ProjectedZoneDefinition.hxx>
#include <StepDimTol_RoundnessTolerance.hxx>
#include <StepDimTol_RunoutZoneDefinition.hxx>
#include <StepDimTol_RunoutZoneOrientation.hxx>
#include <StepDimTol_ShapeToleranceSelect.hxx>
#include <StepDimTol_SimpleDatumReferenceModifierMember.hxx>
#include <StepDimTol_StraightnessTolerance.hxx>
#include <StepDimTol_SurfaceProfileTolerance.hxx>
#include <StepDimTol_SymmetryTolerance.hxx>
#include <StepDimTol_ToleranceZone.hxx>
#include <StepDimTol_ToleranceZoneDefinition.hxx>
#include <StepDimTol_ToleranceZoneForm.hxx>
#include <StepDimTol_ToleranceZoneTarget.hxx>
#include <StepDimTol_TotalRunoutTolerance.hxx>
#include <StepDimTol_UnequallyDisposedGeometricTolerance.hxx>
#include <StepElement_AnalysisItemWithinRepresentation.hxx>
#include <StepElement_Curve3dElementDescriptor.hxx>
#include <StepElement_CurveEdge.hxx>
#include <StepElement_CurveElementEndReleasePacket.hxx>
#include <StepElement_CurveElementFreedom.hxx>
#include <StepElement_CurveElementFreedomMember.hxx>
#include <StepElement_CurveElementPurpose.hxx>
#include <StepElement_CurveElementPurposeMember.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <StepElement_CurveElementSectionDerivedDefinitions.hxx>
#include <StepElement_Element2dShape.hxx>
#include <StepElement_ElementAspect.hxx>
#include <StepElement_ElementAspectMember.hxx>
#include <StepElement_ElementDescriptor.hxx>
#include <StepElement_ElementMaterial.hxx>
#include <StepElement_ElementOrder.hxx>
#include <StepElement_ElementVolume.hxx>
#include <StepElement_EnumeratedCurveElementFreedom.hxx>
#include <StepElement_EnumeratedCurveElementPurpose.hxx>
#include <StepElement_EnumeratedSurfaceElementPurpose.hxx>
#include <StepElement_EnumeratedVolumeElementPurpose.hxx>
#include <StepElement_HSequenceOfCurveElementPurposeMember.hxx>
#include <StepElement_HSequenceOfCurveElementSectionDefinition.hxx>
#include <StepElement_HSequenceOfElementMaterial.hxx>
#include <StepElement_HSequenceOfSurfaceElementPurposeMember.hxx>
#include <StepElement_MeasureOrUnspecifiedValue.hxx>
#include <StepElement_MeasureOrUnspecifiedValueMember.hxx>
#include <StepElement_SequenceOfCurveElementPurposeMember.hxx>
#include <StepElement_SequenceOfCurveElementSectionDefinition.hxx>
#include <StepElement_SequenceOfElementMaterial.hxx>
#include <StepElement_SequenceOfSurfaceElementPurposeMember.hxx>
#include <StepElement_Surface3dElementDescriptor.hxx>
#include <StepElement_SurfaceElementProperty.hxx>
#include <StepElement_SurfaceElementPurpose.hxx>
#include <StepElement_SurfaceElementPurposeMember.hxx>
#include <StepElement_SurfaceSection.hxx>
#include <StepElement_SurfaceSectionField.hxx>
#include <StepElement_SurfaceSectionFieldConstant.hxx>
#include <StepElement_SurfaceSectionFieldVarying.hxx>
#include <StepElement_UniformSurfaceSection.hxx>
#include <StepElement_UnspecifiedValue.hxx>
#include <StepElement_Volume3dElementDescriptor.hxx>
#include <StepElement_Volume3dElementShape.hxx>
#include <StepElement_VolumeElementPurpose.hxx>
#include <StepElement_VolumeElementPurposeMember.hxx>
#include <StepFEA_AlignedCurve3dElementCoordinateSystem.hxx>
#include <StepFEA_AlignedSurface3dElementCoordinateSystem.hxx>
#include <StepFEA_ArbitraryVolume3dElementCoordinateSystem.hxx>
#include <StepFEA_ConstantSurface3dElementCoordinateSystem.hxx>
#include <StepFEA_CoordinateSystemType.hxx>
#include <StepFEA_Curve3dElementProperty.hxx>
#include <StepFEA_Curve3dElementRepresentation.hxx>
#include <StepFEA_CurveEdge.hxx>
#include <StepFEA_CurveElementEndCoordinateSystem.hxx>
#include <StepFEA_CurveElementEndOffset.hxx>
#include <StepFEA_CurveElementEndRelease.hxx>
#include <StepFEA_CurveElementInterval.hxx>
#include <StepFEA_CurveElementIntervalConstant.hxx>
#include <StepFEA_CurveElementIntervalLinearlyVarying.hxx>
#include <StepFEA_CurveElementLocation.hxx>
#include <StepFEA_DegreeOfFreedom.hxx>
#include <StepFEA_DegreeOfFreedomMember.hxx>
#include <StepFEA_DummyNode.hxx>
#include <StepFEA_ElementGeometricRelationship.hxx>
#include <StepFEA_ElementGroup.hxx>
#include <StepFEA_ElementOrElementGroup.hxx>
#include <StepFEA_ElementRepresentation.hxx>
#include <StepFEA_ElementVolume.hxx>
#include <StepFEA_EnumeratedDegreeOfFreedom.hxx>
#include <StepFEA_FeaAreaDensity.hxx>
#include <StepFEA_FeaAxis2Placement3d.hxx>
#include <StepFEA_FeaCurveSectionGeometricRelationship.hxx>
#include <StepFEA_FeaGroup.hxx>
#include <StepFEA_FeaLinearElasticity.hxx>
#include <StepFEA_FeaMassDensity.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentation.hxx>
#include <StepFEA_FeaMaterialPropertyRepresentationItem.hxx>
#include <StepFEA_FeaModel.hxx>
#include <StepFEA_FeaModel3d.hxx>
#include <StepFEA_FeaModelDefinition.hxx>
#include <StepFEA_FeaMoistureAbsorption.hxx>
#include <StepFEA_FeaParametricPoint.hxx>
#include <StepFEA_FeaRepresentationItem.hxx>
#include <StepFEA_FeaSecantCoefficientOfLinearThermalExpansion.hxx>
#include <StepFEA_FeaShellBendingStiffness.hxx>
#include <StepFEA_FeaShellMembraneBendingCouplingStiffness.hxx>
#include <StepFEA_FeaShellMembraneStiffness.hxx>
#include <StepFEA_FeaShellShearStiffness.hxx>
#include <StepFEA_FeaSurfaceSectionGeometricRelationship.hxx>
#include <StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion.hxx>
#include <StepFEA_FreedomAndCoefficient.hxx>
#include <StepFEA_FreedomsList.hxx>
#include <StepFEA_GeometricNode.hxx>
#include <StepFEA_HSequenceOfCurve3dElementProperty.hxx>
#include <StepFEA_HSequenceOfElementGeometricRelationship.hxx>
#include <StepFEA_HSequenceOfElementRepresentation.hxx>
#include <StepFEA_HSequenceOfNodeRepresentation.hxx>
#include <StepFEA_Node.hxx>
#include <StepFEA_NodeDefinition.hxx>
#include <StepFEA_NodeGroup.hxx>
#include <StepFEA_NodeRepresentation.hxx>
#include <StepFEA_NodeSet.hxx>
#include <StepFEA_NodeWithSolutionCoordinateSystem.hxx>
#include <StepFEA_NodeWithVector.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateDirection.hxx>
#include <StepFEA_ParametricCurve3dElementCoordinateSystem.hxx>
#include <StepFEA_ParametricSurface3dElementCoordinateSystem.hxx>
#include <StepFEA_SequenceOfCurve3dElementProperty.hxx>
#include <StepFEA_SequenceOfElementGeometricRelationship.hxx>
#include <StepFEA_SequenceOfElementRepresentation.hxx>
#include <StepFEA_SequenceOfNodeRepresentation.hxx>
#include <StepFEA_Surface3dElementRepresentation.hxx>
#include <StepFEA_SymmetricTensor22d.hxx>
#include <StepFEA_SymmetricTensor23d.hxx>
#include <StepFEA_SymmetricTensor23dMember.hxx>
#include <StepFEA_SymmetricTensor42d.hxx>
#include <StepFEA_SymmetricTensor43d.hxx>
#include <StepFEA_SymmetricTensor43dMember.hxx>
#include <StepFEA_UnspecifiedValue.hxx>
#include <StepFEA_Volume3dElementRepresentation.hxx>
#include <StepFile_Read.hxx>
#include <StepFile_ReadData.hxx>
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
#include <StepKinematics_ActuatedKinematicPair.hxx>
#include <StepKinematics_ActuatedKinPairAndOrderKinPair.hxx>
#include <StepKinematics_ContextDependentKinematicLinkRepresentation.hxx>
#include <StepKinematics_CylindricalPair.hxx>
#include <StepKinematics_CylindricalPairValue.hxx>
#include <StepKinematics_CylindricalPairWithRange.hxx>
#include <StepKinematics_FullyConstrainedPair.hxx>
#include <StepKinematics_GearPair.hxx>
#include <StepKinematics_GearPairValue.hxx>
#include <StepKinematics_GearPairWithRange.hxx>
#include <StepKinematics_HighOrderKinematicPair.hxx>
#include <StepKinematics_HomokineticPair.hxx>
#include <StepKinematics_KinematicJoint.hxx>
#include <StepKinematics_KinematicLink.hxx>
#include <StepKinematics_KinematicLinkRepresentation.hxx>
#include <StepKinematics_KinematicLinkRepresentationAssociation.hxx>
#include <StepKinematics_KinematicPair.hxx>
#include <StepKinematics_KinematicPropertyDefinitionRepresentation.hxx>
#include <StepKinematics_KinematicPropertyMechanismRepresentation.hxx>
#include <StepKinematics_KinematicTopologyDirectedStructure.hxx>
#include <StepKinematics_KinematicTopologyNetworkStructure.hxx>
#include <StepKinematics_KinematicTopologyRepresentationSelect.hxx>
#include <StepKinematics_KinematicTopologyStructure.hxx>
#include <StepKinematics_LinearFlexibleAndPinionPair.hxx>
#include <StepKinematics_LinearFlexibleAndPlanarCurvePair.hxx>
#include <StepKinematics_LinearFlexibleLinkRepresentation.hxx>
#include <StepKinematics_LowOrderKinematicPair.hxx>
#include <StepKinematics_LowOrderKinematicPairValue.hxx>
#include <StepKinematics_LowOrderKinematicPairWithMotionCoupling.hxx>
#include <StepKinematics_LowOrderKinematicPairWithRange.hxx>
#include <StepKinematics_MechanismRepresentation.hxx>
#include <StepKinematics_MechanismStateRepresentation.hxx>
#include <StepKinematics_OrientedJoint.hxx>
#include <StepKinematics_PairRepresentationRelationship.hxx>
#include <StepKinematics_PairValue.hxx>
#include <StepKinematics_PlanarCurvePair.hxx>
#include <StepKinematics_PlanarCurvePairRange.hxx>
#include <StepKinematics_PlanarPair.hxx>
#include <StepKinematics_PlanarPairValue.hxx>
#include <StepKinematics_PlanarPairWithRange.hxx>
#include <StepKinematics_PointOnPlanarCurvePair.hxx>
#include <StepKinematics_PointOnPlanarCurvePairWithRange.hxx>
#include <StepKinematics_PointOnSurfacePair.hxx>
#include <StepKinematics_PointOnSurfacePairValue.hxx>
#include <StepKinematics_PointOnSurfacePairWithRange.hxx>
#include <StepKinematics_PrismaticPair.hxx>
#include <StepKinematics_PrismaticPairValue.hxx>
#include <StepKinematics_PrismaticPairWithRange.hxx>
#include <StepKinematics_ProductDefinitionKinematics.hxx>
#include <StepKinematics_ProductDefinitionRelationshipKinematics.hxx>
#include <StepKinematics_RackAndPinionPair.hxx>
#include <StepKinematics_RackAndPinionPairValue.hxx>
#include <StepKinematics_RackAndPinionPairWithRange.hxx>
#include <StepKinematics_RevolutePair.hxx>
#include <StepKinematics_RevolutePairValue.hxx>
#include <StepKinematics_RevolutePairWithRange.hxx>
#include <StepKinematics_RigidLinkRepresentation.hxx>
#include <StepKinematics_RigidPlacement.hxx>
#include <StepKinematics_RollingCurvePair.hxx>
#include <StepKinematics_RollingCurvePairValue.hxx>
#include <StepKinematics_RollingSurfacePair.hxx>
#include <StepKinematics_RollingSurfacePairValue.hxx>
#include <StepKinematics_RotationAboutDirection.hxx>
#include <StepKinematics_ScrewPair.hxx>
#include <StepKinematics_ScrewPairValue.hxx>
#include <StepKinematics_ScrewPairWithRange.hxx>
#include <StepKinematics_SlidingCurvePair.hxx>
#include <StepKinematics_SlidingCurvePairValue.hxx>
#include <StepKinematics_SlidingSurfacePair.hxx>
#include <StepKinematics_SlidingSurfacePairValue.hxx>
#include <StepKinematics_SpatialRotation.hxx>
#include <StepKinematics_SphericalPair.hxx>
#include <StepKinematics_SphericalPairSelect.hxx>
#include <StepKinematics_SphericalPairValue.hxx>
#include <StepKinematics_SphericalPairWithPin.hxx>
#include <StepKinematics_SphericalPairWithPinAndRange.hxx>
#include <StepKinematics_SphericalPairWithRange.hxx>
#include <StepKinematics_SurfacePair.hxx>
#include <StepKinematics_SurfacePairWithRange.hxx>
#include <StepKinematics_UnconstrainedPair.hxx>
#include <StepKinematics_UnconstrainedPairValue.hxx>
#include <StepKinematics_UniversalPair.hxx>
#include <StepKinematics_UniversalPairValue.hxx>
#include <StepKinematics_UniversalPairWithRange.hxx>
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
#include <StepSelect_Activator.hxx>
#include <StepSelect_FileModifier.hxx>
#include <StepSelect_FloatFormat.hxx>
#include <StepSelect_ModelModifier.hxx>
#include <StepSelect_StepType.hxx>
#include <StepSelect_WorkLibrary.hxx>
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
#include <StepToGeom.hxx>
#include <StepToTopoDS.hxx>
#include <StepToTopoDS_Builder.hxx>
#include <StepToTopoDS_BuilderError.hxx>
#include <StepToTopoDS_DataMapIteratorOfDataMapOfRI.hxx>
#include <StepToTopoDS_DataMapIteratorOfDataMapOfRINames.hxx>
#include <StepToTopoDS_DataMapIteratorOfDataMapOfTRI.hxx>
#include <StepToTopoDS_DataMapIteratorOfPointEdgeMap.hxx>
#include <StepToTopoDS_DataMapIteratorOfPointVertexMap.hxx>
#include <StepToTopoDS_DataMapOfRI.hxx>
#include <StepToTopoDS_DataMapOfRINames.hxx>
#include <StepToTopoDS_DataMapOfTRI.hxx>
#include <StepToTopoDS_GeometricTool.hxx>
#include <StepToTopoDS_GeometricToolError.hxx>
#include <StepToTopoDS_MakeTransformed.hxx>
#include <StepToTopoDS_NMTool.hxx>
#include <StepToTopoDS_PointEdgeMap.hxx>
#include <StepToTopoDS_PointPair.hxx>
#include <StepToTopoDS_PointVertexMap.hxx>
#include <StepToTopoDS_Root.hxx>
#include <StepToTopoDS_Tool.hxx>
#include <StepToTopoDS_TranslateCompositeCurve.hxx>
#include <StepToTopoDS_TranslateCurveBoundedSurface.hxx>
#include <StepToTopoDS_TranslateEdge.hxx>
#include <StepToTopoDS_TranslateEdgeError.hxx>
#include <StepToTopoDS_TranslateEdgeLoop.hxx>
#include <StepToTopoDS_TranslateEdgeLoopError.hxx>
#include <StepToTopoDS_TranslateFace.hxx>
#include <StepToTopoDS_TranslateFaceError.hxx>
#include <StepToTopoDS_TranslatePolyLoop.hxx>
#include <StepToTopoDS_TranslatePolyLoopError.hxx>
#include <StepToTopoDS_TranslateShell.hxx>
#include <StepToTopoDS_TranslateShellError.hxx>
#include <StepToTopoDS_TranslateSolid.hxx>
#include <StepToTopoDS_TranslateSolidError.hxx>
#include <StepToTopoDS_TranslateVertex.hxx>
#include <StepToTopoDS_TranslateVertexError.hxx>
#include <StepToTopoDS_TranslateVertexLoop.hxx>
#include <StepToTopoDS_TranslateVertexLoopError.hxx>
#include <StepVisual_AnnotationCurveOccurrence.hxx>
#include <StepVisual_AnnotationCurveOccurrenceAndGeomReprItem.hxx>
#include <StepVisual_AnnotationFillArea.hxx>
#include <StepVisual_AnnotationFillAreaOccurrence.hxx>
#include <StepVisual_AnnotationOccurrence.hxx>
#include <StepVisual_AnnotationPlane.hxx>
#include <StepVisual_AnnotationPlaneElement.hxx>
#include <StepVisual_AnnotationText.hxx>
#include <StepVisual_AnnotationTextOccurrence.hxx>
#include <StepVisual_AreaInSet.hxx>
#include <StepVisual_AreaOrView.hxx>
#include <StepVisual_BackgroundColour.hxx>
#include <StepVisual_BoxCharacteristicSelect.hxx>
#include <StepVisual_CameraImage.hxx>
#include <StepVisual_CameraImage2dWithScale.hxx>
#include <StepVisual_CameraImage3dWithScale.hxx>
#include <StepVisual_CameraModel.hxx>
#include <StepVisual_CameraModelD2.hxx>
#include <StepVisual_CameraModelD3.hxx>
#include <StepVisual_CameraModelD3MultiClipping.hxx>
#include <StepVisual_CameraModelD3MultiClippingInterectionSelect.hxx>
#include <StepVisual_CameraModelD3MultiClippingIntersection.hxx>
#include <StepVisual_CameraModelD3MultiClippingUnion.hxx>
#include <StepVisual_CameraModelD3MultiClippingUnionSelect.hxx>
#include <StepVisual_CameraUsage.hxx>
#include <StepVisual_CharacterizedObjAndRepresentationAndDraughtingModel.hxx>
#include <StepVisual_Colour.hxx>
#include <StepVisual_ColourRgb.hxx>
#include <StepVisual_ColourSpecification.hxx>
#include <StepVisual_ComplexTriangulatedFace.hxx>
#include <StepVisual_ComplexTriangulatedSurfaceSet.hxx>
#include <StepVisual_CompositeText.hxx>
#include <StepVisual_CompositeTextWithExtent.hxx>
#include <StepVisual_ContextDependentInvisibility.hxx>
#include <StepVisual_ContextDependentOverRidingStyledItem.hxx>
#include <StepVisual_CoordinatesList.hxx>
#include <StepVisual_CubicBezierTessellatedEdge.hxx>
#include <StepVisual_CubicBezierTriangulatedFace.hxx>
#include <StepVisual_CurveStyle.hxx>
#include <StepVisual_CurveStyleFont.hxx>
#include <StepVisual_CurveStyleFontPattern.hxx>
#include <StepVisual_CurveStyleFontSelect.hxx>
#include <StepVisual_DirectionCountSelect.hxx>
#include <StepVisual_DraughtingAnnotationOccurrence.hxx>
#include <StepVisual_DraughtingCallout.hxx>
#include <StepVisual_DraughtingCalloutElement.hxx>
#include <StepVisual_DraughtingModel.hxx>
#include <StepVisual_DraughtingPreDefinedColour.hxx>
#include <StepVisual_DraughtingPreDefinedCurveFont.hxx>
#include <StepVisual_EdgeOrCurve.hxx>
#include <StepVisual_ExternallyDefinedCurveFont.hxx>
#include <StepVisual_FaceOrSurface.hxx>
#include <StepVisual_FillAreaStyle.hxx>
#include <StepVisual_FillAreaStyleColour.hxx>
#include <StepVisual_FillStyleSelect.hxx>
#include <StepVisual_FontSelect.hxx>
#include <StepVisual_Invisibility.hxx>
#include <StepVisual_InvisibilityContext.hxx>
#include <StepVisual_InvisibleItem.hxx>
#include <StepVisual_LayeredItem.hxx>
#include <StepVisual_MarkerMember.hxx>
#include <StepVisual_MarkerSelect.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationArea.hxx>
#include <StepVisual_MechanicalDesignGeometricPresentationRepresentation.hxx>
#include <StepVisual_NullStyleMember.hxx>
#include <StepVisual_OverRidingStyledItem.hxx>
#include <StepVisual_PathOrCompositeCurve.hxx>
#include <StepVisual_PlanarBox.hxx>
#include <StepVisual_PlanarExtent.hxx>
#include <StepVisual_PointStyle.hxx>
#include <StepVisual_PreDefinedColour.hxx>
#include <StepVisual_PreDefinedCurveFont.hxx>
#include <StepVisual_PreDefinedItem.hxx>
#include <StepVisual_PreDefinedTextFont.hxx>
#include <StepVisual_PresentationArea.hxx>
#include <StepVisual_PresentationLayerAssignment.hxx>
#include <StepVisual_PresentationLayerUsage.hxx>
#include <StepVisual_PresentationRepresentation.hxx>
#include <StepVisual_PresentationRepresentationSelect.hxx>
#include <StepVisual_PresentationSet.hxx>
#include <StepVisual_PresentationSize.hxx>
#include <StepVisual_PresentationSizeAssignmentSelect.hxx>
#include <StepVisual_PresentationStyleAssignment.hxx>
#include <StepVisual_PresentationStyleByContext.hxx>
#include <StepVisual_PresentationStyleSelect.hxx>
#include <StepVisual_PresentationView.hxx>
#include <StepVisual_PresentedItem.hxx>
#include <StepVisual_PresentedItemRepresentation.hxx>
#include <StepVisual_RenderingPropertiesSelect.hxx>
#include <StepVisual_RepositionedTessellatedGeometricSet.hxx>
#include <StepVisual_RepositionedTessellatedItem.hxx>
#include <StepVisual_StyleContextSelect.hxx>
#include <StepVisual_StyledItem.hxx>
#include <StepVisual_StyledItemTarget.hxx>
#include <StepVisual_SurfaceSideStyle.hxx>
#include <StepVisual_SurfaceStyleBoundary.hxx>
#include <StepVisual_SurfaceStyleControlGrid.hxx>
#include <StepVisual_SurfaceStyleElementSelect.hxx>
#include <StepVisual_SurfaceStyleFillArea.hxx>
#include <StepVisual_SurfaceStyleParameterLine.hxx>
#include <StepVisual_SurfaceStyleReflectanceAmbient.hxx>
#include <StepVisual_SurfaceStyleRendering.hxx>
#include <StepVisual_SurfaceStyleRenderingWithProperties.hxx>
#include <StepVisual_SurfaceStyleSegmentationCurve.hxx>
#include <StepVisual_SurfaceStyleSilhouette.hxx>
#include <StepVisual_SurfaceStyleTransparent.hxx>
#include <StepVisual_SurfaceStyleUsage.hxx>
#include <StepVisual_Template.hxx>
#include <StepVisual_TemplateInstance.hxx>
#include <StepVisual_TessellatedAnnotationOccurrence.hxx>
#include <StepVisual_TessellatedConnectingEdge.hxx>
#include <StepVisual_TessellatedEdge.hxx>
#include <StepVisual_TessellatedEdgeOrVertex.hxx>
#include <StepVisual_TessellatedFace.hxx>
#include <StepVisual_TessellatedGeometricSet.hxx>
#include <StepVisual_TessellatedItem.hxx>
#include <StepVisual_TessellatedPointSet.hxx>
#include <StepVisual_TessellatedShapeRepresentation.hxx>
#include <StepVisual_TessellatedShapeRepresentationWithAccuracyParameters.hxx>
#include <StepVisual_TessellatedShell.hxx>
#include <StepVisual_TessellatedSolid.hxx>
#include <StepVisual_TessellatedStructuredItem.hxx>
#include <StepVisual_TessellatedSurfaceSet.hxx>
#include <StepVisual_TessellatedVertex.hxx>
#include <StepVisual_TessellatedWire.hxx>
#include <StepVisual_TextLiteral.hxx>
#include <StepVisual_TextOrCharacter.hxx>
#include <StepVisual_TextStyle.hxx>
#include <StepVisual_TextStyleForDefinedFont.hxx>
#include <StepVisual_TextStyleWithBoxCharacteristics.hxx>
#include <StepVisual_TriangulatedFace.hxx>
#include <StepVisual_ViewVolume.hxx>
#include <TopoDSToStep.hxx>
#include <TopoDSToStep_Builder.hxx>
#include <TopoDSToStep_BuilderError.hxx>
#include <TopoDSToStep_FacetedError.hxx>
#include <TopoDSToStep_FacetedTool.hxx>
#include <TopoDSToStep_MakeBrepWithVoids.hxx>
#include <TopoDSToStep_MakeEdgeError.hxx>
#include <TopoDSToStep_MakeFaceError.hxx>
#include <TopoDSToStep_MakeFacetedBrep.hxx>
#include <TopoDSToStep_MakeFacetedBrepAndBrepWithVoids.hxx>
#include <TopoDSToStep_MakeGeometricCurveSet.hxx>
#include <TopoDSToStep_MakeManifoldSolidBrep.hxx>
#include <TopoDSToStep_MakeShellBasedSurfaceModel.hxx>
#include <TopoDSToStep_MakeStepEdge.hxx>
#include <TopoDSToStep_MakeStepFace.hxx>
#include <TopoDSToStep_MakeStepVertex.hxx>
#include <TopoDSToStep_MakeStepWire.hxx>
#include <TopoDSToStep_MakeTessellatedItem.hxx>
#include <TopoDSToStep_MakeVertexError.hxx>
#include <TopoDSToStep_MakeWireError.hxx>
#include <TopoDSToStep_Root.hxx>
#include <TopoDSToStep_Tool.hxx>
#include <TopoDSToStep_WireframeBuilder.hxx>
#include <StepKinematics_PointOnPlanarCurvePairValue.hxx>
#include <StepVisual_ExternallyDefinedTextFont.hxx>

#include <StepVisual_TessellatedCurveSet.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(APIHeaderSection_EditHeader)
DEFINE_HANDLECLASS(HeaderSection_FileDescription)
DEFINE_HANDLECLASS(HeaderSection_FileName)
DEFINE_HANDLECLASS(HeaderSection_FileSchema)
DEFINE_HANDLECLASS(HeaderSection_Protocol)
DEFINE_HANDLECLASS(RWHeaderSection_GeneralModule)
DEFINE_HANDLECLASS(RWHeaderSection_ReadWriteModule)
DEFINE_HANDLECLASS(STEPCAFControl_ActorWrite)
DEFINE_HANDLECLASS(STEPCAFControl_Controller)
DEFINE_HANDLECLASS(STEPCAFControl_ExternFile)
DEFINE_HANDLECLASS(STEPControl_ActorRead)
DEFINE_HANDLECLASS(STEPControl_ActorWrite)
DEFINE_HANDLECLASS(STEPControl_Controller)
DEFINE_HANDLECLASS(STEPEdit_EditContext)
DEFINE_HANDLECLASS(STEPEdit_EditSDR)
DEFINE_HANDLECLASS(STEPSelections_AssemblyComponent)
DEFINE_HANDLECLASS(STEPSelections_AssemblyLink)
DEFINE_HANDLECLASS(STEPSelections_SelectAssembly)
DEFINE_HANDLECLASS(STEPSelections_SelectDerived)
DEFINE_HANDLECLASS(STEPSelections_SelectFaces)
DEFINE_HANDLECLASS(STEPSelections_SelectForTransfer)
DEFINE_HANDLECLASS(STEPSelections_SelectGSCurves)
DEFINE_HANDLECLASS(STEPSelections_SelectInstances)
DEFINE_HANDLECLASS(StepAP203_CcDesignApproval)
DEFINE_HANDLECLASS(StepAP203_CcDesignCertification)
DEFINE_HANDLECLASS(StepAP203_CcDesignContract)
DEFINE_HANDLECLASS(StepAP203_CcDesignDateAndTimeAssignment)
DEFINE_HANDLECLASS(StepAP203_CcDesignPersonAndOrganizationAssignment)
DEFINE_HANDLECLASS(StepAP203_CcDesignSecurityClassification)
DEFINE_HANDLECLASS(StepAP203_CcDesignSpecificationReference)
DEFINE_HANDLECLASS(StepAP203_Change)
DEFINE_HANDLECLASS(StepAP203_ChangeRequest)
DEFINE_HANDLECLASS(StepAP203_StartRequest)
DEFINE_HANDLECLASS(StepAP203_StartWork)
DEFINE_HANDLECLASS(StepAP214_AppliedApprovalAssignment)
DEFINE_HANDLECLASS(StepAP214_AppliedDateAndTimeAssignment)
DEFINE_HANDLECLASS(StepAP214_AppliedDateAssignment)
DEFINE_HANDLECLASS(StepAP214_AppliedDocumentReference)
DEFINE_HANDLECLASS(StepAP214_AppliedExternalIdentificationAssignment)
DEFINE_HANDLECLASS(StepAP214_AppliedGroupAssignment)
DEFINE_HANDLECLASS(StepAP214_AppliedOrganizationAssignment)
DEFINE_HANDLECLASS(StepAP214_AppliedPersonAndOrganizationAssignment)
DEFINE_HANDLECLASS(StepAP214_AppliedPresentedItem)
DEFINE_HANDLECLASS(StepAP214_AppliedSecurityClassificationAssignment)
DEFINE_HANDLECLASS(StepAP214_AutoDesignActualDateAssignment)
DEFINE_HANDLECLASS(StepAP214_AutoDesignApprovalAssignment)
DEFINE_HANDLECLASS(StepAP214_AutoDesignDateAndPersonAssignment)
DEFINE_HANDLECLASS(StepAP214_AutoDesignDocumentReference)
DEFINE_HANDLECLASS(StepAP214_AutoDesignGroupAssignment)
DEFINE_HANDLECLASS(StepAP214_AutoDesignNominalDateAndTimeAssignment)
DEFINE_HANDLECLASS(StepAP214_AutoDesignNominalDateAssignment)
DEFINE_HANDLECLASS(StepAP214_AutoDesignOrganizationAssignment)
DEFINE_HANDLECLASS(StepAP214_AutoDesignPersonAndOrganizationAssignment)
DEFINE_HANDLECLASS(StepAP214_AutoDesignPresentedItem)
DEFINE_HANDLECLASS(StepAP214_AutoDesignSecurityClassificationAssignment)
DEFINE_HANDLECLASS(StepAP214_Class)
DEFINE_HANDLECLASS(StepAP214_ExternallyDefinedClass)
DEFINE_HANDLECLASS(StepAP214_ExternallyDefinedGeneralProperty)
DEFINE_HANDLECLASS(StepAP214_Protocol)
DEFINE_HANDLECLASS(StepAP214_RepItemGroup)
DEFINE_HANDLECLASS(StepAP242_DraughtingModelItemAssociation)
DEFINE_HANDLECLASS(StepAP242_GeometricItemSpecificUsage)
DEFINE_HANDLECLASS(StepAP242_IdAttribute)
DEFINE_HANDLECLASS(StepAP242_ItemIdentifiedRepresentationUsage)
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
DEFINE_HANDLECLASS(StepData_DefaultGeneral)
DEFINE_HANDLECLASS(StepData_Described)
DEFINE_HANDLECLASS(StepData_ECDescr)
DEFINE_HANDLECLASS(StepData_EDescr)
DEFINE_HANDLECLASS(StepData_ESDescr)
DEFINE_HANDLECLASS(StepData_FileProtocol)
DEFINE_HANDLECLASS(StepData_FileRecognizer)
DEFINE_HANDLECLASS(StepData_FreeFormEntity)
DEFINE_HANDLECLASS(StepData_GeneralModule)
DEFINE_HANDLECLASS(StepData_GlobalNodeOfWriterLib)
DEFINE_HANDLECLASS(StepData_NodeOfWriterLib)
DEFINE_HANDLECLASS(StepData_PDescr)
DEFINE_HANDLECLASS(StepData_Plex)
DEFINE_HANDLECLASS(StepData_Protocol)
DEFINE_HANDLECLASS(StepData_ReadWriteModule)
DEFINE_HANDLECLASS(StepData_SelectArrReal)
DEFINE_HANDLECLASS(StepData_SelectInt)
DEFINE_HANDLECLASS(StepData_SelectMember)
DEFINE_HANDLECLASS(StepData_SelectNamed)
DEFINE_HANDLECLASS(StepData_SelectReal)
DEFINE_HANDLECLASS(StepData_Simple)
DEFINE_HANDLECLASS(StepData_StepModel)
DEFINE_HANDLECLASS(StepData_StepReaderData)
DEFINE_HANDLECLASS(StepData_UndefinedEntity)
DEFINE_HANDLECLASS(StepDimTol_AngularityTolerance)
DEFINE_HANDLECLASS(StepDimTol_CircularRunoutTolerance)
DEFINE_HANDLECLASS(StepDimTol_CoaxialityTolerance)
DEFINE_HANDLECLASS(StepDimTol_CommonDatum)
DEFINE_HANDLECLASS(StepDimTol_ConcentricityTolerance)
DEFINE_HANDLECLASS(StepDimTol_CylindricityTolerance)
DEFINE_HANDLECLASS(StepDimTol_Datum)
DEFINE_HANDLECLASS(StepDimTol_DatumFeature)
DEFINE_HANDLECLASS(StepDimTol_DatumReference)
DEFINE_HANDLECLASS(StepDimTol_DatumReferenceCompartment)
DEFINE_HANDLECLASS(StepDimTol_DatumReferenceElement)
DEFINE_HANDLECLASS(StepDimTol_DatumSystem)
DEFINE_HANDLECLASS(StepDimTol_DatumTarget)
DEFINE_HANDLECLASS(StepDimTol_FlatnessTolerance)
DEFINE_HANDLECLASS(StepDimTol_GeneralDatumReference)
DEFINE_HANDLECLASS(StepDimTol_GeometricTolerance)
DEFINE_HANDLECLASS(StepDimTol_GeometricToleranceRelationship)
DEFINE_HANDLECLASS(StepDimTol_GeometricToleranceWithDatumReference)
DEFINE_HANDLECLASS(StepDimTol_GeometricToleranceWithDefinedAreaUnit)
DEFINE_HANDLECLASS(StepDimTol_GeometricToleranceWithMaximumTolerance)
DEFINE_HANDLECLASS(StepDimTol_GeometricToleranceWithModifiers)
DEFINE_HANDLECLASS(StepDimTol_GeoTolAndGeoTolWthDatRef)
DEFINE_HANDLECLASS(StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMaxTol)
DEFINE_HANDLECLASS(StepDimTol_GeoTolAndGeoTolWthDatRefAndGeoTolWthMod)
DEFINE_HANDLECLASS(StepDimTol_GeoTolAndGeoTolWthDatRefAndModGeoTolAndPosTol)
DEFINE_HANDLECLASS(StepDimTol_GeoTolAndGeoTolWthDatRefAndUneqDisGeoTol)
DEFINE_HANDLECLASS(StepDimTol_GeoTolAndGeoTolWthMaxTol)
DEFINE_HANDLECLASS(StepDimTol_GeoTolAndGeoTolWthMod)
DEFINE_HANDLECLASS(StepDimTol_LineProfileTolerance)
DEFINE_HANDLECLASS(StepDimTol_ModifiedGeometricTolerance)
DEFINE_HANDLECLASS(StepDimTol_NonUniformZoneDefinition)
DEFINE_HANDLECLASS(StepDimTol_ParallelismTolerance)
DEFINE_HANDLECLASS(StepDimTol_PerpendicularityTolerance)
DEFINE_HANDLECLASS(StepDimTol_PlacedDatumTargetFeature)
DEFINE_HANDLECLASS(StepDimTol_PositionTolerance)
DEFINE_HANDLECLASS(StepDimTol_ProjectedZoneDefinition)
DEFINE_HANDLECLASS(StepDimTol_RoundnessTolerance)
DEFINE_HANDLECLASS(StepDimTol_RunoutZoneDefinition)
DEFINE_HANDLECLASS(StepDimTol_RunoutZoneOrientation)
DEFINE_HANDLECLASS(StepDimTol_SimpleDatumReferenceModifierMember)
DEFINE_HANDLECLASS(StepDimTol_StraightnessTolerance)
DEFINE_HANDLECLASS(StepDimTol_SurfaceProfileTolerance)
DEFINE_HANDLECLASS(StepDimTol_SymmetryTolerance)
DEFINE_HANDLECLASS(StepDimTol_ToleranceZone)
DEFINE_HANDLECLASS(StepDimTol_ToleranceZoneDefinition)
DEFINE_HANDLECLASS(StepDimTol_ToleranceZoneForm)
DEFINE_HANDLECLASS(StepDimTol_TotalRunoutTolerance)
DEFINE_HANDLECLASS(StepDimTol_UnequallyDisposedGeometricTolerance)
DEFINE_HANDLECLASS(StepElement_AnalysisItemWithinRepresentation)
DEFINE_HANDLECLASS(StepElement_Curve3dElementDescriptor)
DEFINE_HANDLECLASS(StepElement_CurveElementEndReleasePacket)
DEFINE_HANDLECLASS(StepElement_CurveElementFreedomMember)
DEFINE_HANDLECLASS(StepElement_CurveElementPurposeMember)
DEFINE_HANDLECLASS(StepElement_CurveElementSectionDefinition)
DEFINE_HANDLECLASS(StepElement_CurveElementSectionDerivedDefinitions)
DEFINE_HANDLECLASS(StepElement_ElementAspectMember)
DEFINE_HANDLECLASS(StepElement_ElementDescriptor)
DEFINE_HANDLECLASS(StepElement_ElementMaterial)
DEFINE_HANDLECLASS(StepElement_MeasureOrUnspecifiedValueMember)
DEFINE_HANDLECLASS(StepElement_Surface3dElementDescriptor)
DEFINE_HANDLECLASS(StepElement_SurfaceElementProperty)
DEFINE_HANDLECLASS(StepElement_SurfaceElementPurposeMember)
DEFINE_HANDLECLASS(StepElement_SurfaceSection)
DEFINE_HANDLECLASS(StepElement_SurfaceSectionField)
DEFINE_HANDLECLASS(StepElement_SurfaceSectionFieldConstant)
DEFINE_HANDLECLASS(StepElement_SurfaceSectionFieldVarying)
DEFINE_HANDLECLASS(StepElement_UniformSurfaceSection)
DEFINE_HANDLECLASS(StepElement_Volume3dElementDescriptor)
DEFINE_HANDLECLASS(StepElement_VolumeElementPurposeMember)
DEFINE_HANDLECLASS(StepFEA_AlignedCurve3dElementCoordinateSystem)
DEFINE_HANDLECLASS(StepFEA_AlignedSurface3dElementCoordinateSystem)
DEFINE_HANDLECLASS(StepFEA_ArbitraryVolume3dElementCoordinateSystem)
DEFINE_HANDLECLASS(StepFEA_ConstantSurface3dElementCoordinateSystem)
DEFINE_HANDLECLASS(StepFEA_Curve3dElementProperty)
DEFINE_HANDLECLASS(StepFEA_Curve3dElementRepresentation)
DEFINE_HANDLECLASS(StepFEA_CurveElementEndOffset)
DEFINE_HANDLECLASS(StepFEA_CurveElementEndRelease)
DEFINE_HANDLECLASS(StepFEA_CurveElementInterval)
DEFINE_HANDLECLASS(StepFEA_CurveElementIntervalConstant)
DEFINE_HANDLECLASS(StepFEA_CurveElementIntervalLinearlyVarying)
DEFINE_HANDLECLASS(StepFEA_CurveElementLocation)
DEFINE_HANDLECLASS(StepFEA_DegreeOfFreedomMember)
DEFINE_HANDLECLASS(StepFEA_DummyNode)
DEFINE_HANDLECLASS(StepFEA_ElementGeometricRelationship)
DEFINE_HANDLECLASS(StepFEA_ElementGroup)
DEFINE_HANDLECLASS(StepFEA_ElementRepresentation)
DEFINE_HANDLECLASS(StepFEA_FeaAreaDensity)
DEFINE_HANDLECLASS(StepFEA_FeaAxis2Placement3d)
DEFINE_HANDLECLASS(StepFEA_FeaCurveSectionGeometricRelationship)
DEFINE_HANDLECLASS(StepFEA_FeaGroup)
DEFINE_HANDLECLASS(StepFEA_FeaLinearElasticity)
DEFINE_HANDLECLASS(StepFEA_FeaMassDensity)
DEFINE_HANDLECLASS(StepFEA_FeaMaterialPropertyRepresentation)
DEFINE_HANDLECLASS(StepFEA_FeaMaterialPropertyRepresentationItem)
DEFINE_HANDLECLASS(StepFEA_FeaModel)
DEFINE_HANDLECLASS(StepFEA_FeaModel3d)
DEFINE_HANDLECLASS(StepFEA_FeaModelDefinition)
DEFINE_HANDLECLASS(StepFEA_FeaMoistureAbsorption)
DEFINE_HANDLECLASS(StepFEA_FeaParametricPoint)
DEFINE_HANDLECLASS(StepFEA_FeaRepresentationItem)
DEFINE_HANDLECLASS(StepFEA_FeaSecantCoefficientOfLinearThermalExpansion)
DEFINE_HANDLECLASS(StepFEA_FeaShellBendingStiffness)
DEFINE_HANDLECLASS(StepFEA_FeaShellMembraneBendingCouplingStiffness)
DEFINE_HANDLECLASS(StepFEA_FeaShellMembraneStiffness)
DEFINE_HANDLECLASS(StepFEA_FeaShellShearStiffness)
DEFINE_HANDLECLASS(StepFEA_FeaSurfaceSectionGeometricRelationship)
DEFINE_HANDLECLASS(StepFEA_FeaTangentialCoefficientOfLinearThermalExpansion)
DEFINE_HANDLECLASS(StepFEA_FreedomAndCoefficient)
DEFINE_HANDLECLASS(StepFEA_FreedomsList)
DEFINE_HANDLECLASS(StepFEA_GeometricNode)
DEFINE_HANDLECLASS(StepFEA_Node)
DEFINE_HANDLECLASS(StepFEA_NodeDefinition)
DEFINE_HANDLECLASS(StepFEA_NodeGroup)
DEFINE_HANDLECLASS(StepFEA_NodeRepresentation)
DEFINE_HANDLECLASS(StepFEA_NodeSet)
DEFINE_HANDLECLASS(StepFEA_NodeWithSolutionCoordinateSystem)
DEFINE_HANDLECLASS(StepFEA_NodeWithVector)
DEFINE_HANDLECLASS(StepFEA_ParametricCurve3dElementCoordinateDirection)
DEFINE_HANDLECLASS(StepFEA_ParametricCurve3dElementCoordinateSystem)
DEFINE_HANDLECLASS(StepFEA_ParametricSurface3dElementCoordinateSystem)
DEFINE_HANDLECLASS(StepFEA_Surface3dElementRepresentation)
DEFINE_HANDLECLASS(StepFEA_SymmetricTensor23dMember)
DEFINE_HANDLECLASS(StepFEA_SymmetricTensor43dMember)
DEFINE_HANDLECLASS(StepFEA_Volume3dElementRepresentation)
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
DEFINE_HANDLECLASS(StepKinematics_ActuatedKinematicPair)
DEFINE_HANDLECLASS(StepKinematics_ActuatedKinPairAndOrderKinPair)
DEFINE_HANDLECLASS(StepKinematics_ContextDependentKinematicLinkRepresentation)
DEFINE_HANDLECLASS(StepKinematics_CylindricalPair)
DEFINE_HANDLECLASS(StepKinematics_CylindricalPairValue)
DEFINE_HANDLECLASS(StepKinematics_CylindricalPairWithRange)
DEFINE_HANDLECLASS(StepKinematics_FullyConstrainedPair)
DEFINE_HANDLECLASS(StepKinematics_GearPair)
DEFINE_HANDLECLASS(StepKinematics_GearPairValue)
DEFINE_HANDLECLASS(StepKinematics_GearPairWithRange)
DEFINE_HANDLECLASS(StepKinematics_HighOrderKinematicPair)
DEFINE_HANDLECLASS(StepKinematics_HomokineticPair)
DEFINE_HANDLECLASS(StepKinematics_KinematicJoint)
DEFINE_HANDLECLASS(StepKinematics_KinematicLink)
DEFINE_HANDLECLASS(StepKinematics_KinematicLinkRepresentation)
DEFINE_HANDLECLASS(StepKinematics_KinematicLinkRepresentationAssociation)
DEFINE_HANDLECLASS(StepKinematics_KinematicPair)
DEFINE_HANDLECLASS(StepKinematics_KinematicPropertyDefinitionRepresentation)
DEFINE_HANDLECLASS(StepKinematics_KinematicPropertyMechanismRepresentation)
DEFINE_HANDLECLASS(StepKinematics_KinematicTopologyDirectedStructure)
DEFINE_HANDLECLASS(StepKinematics_KinematicTopologyNetworkStructure)
DEFINE_HANDLECLASS(StepKinematics_KinematicTopologyStructure)
DEFINE_HANDLECLASS(StepKinematics_LinearFlexibleAndPinionPair)
DEFINE_HANDLECLASS(StepKinematics_LinearFlexibleAndPlanarCurvePair)
DEFINE_HANDLECLASS(StepKinematics_LinearFlexibleLinkRepresentation)
DEFINE_HANDLECLASS(StepKinematics_LowOrderKinematicPair)
DEFINE_HANDLECLASS(StepKinematics_LowOrderKinematicPairValue)
DEFINE_HANDLECLASS(StepKinematics_LowOrderKinematicPairWithMotionCoupling)
DEFINE_HANDLECLASS(StepKinematics_LowOrderKinematicPairWithRange)
DEFINE_HANDLECLASS(StepKinematics_MechanismRepresentation)
DEFINE_HANDLECLASS(StepKinematics_MechanismStateRepresentation)
DEFINE_HANDLECLASS(StepKinematics_OrientedJoint)
DEFINE_HANDLECLASS(StepKinematics_PairRepresentationRelationship)
DEFINE_HANDLECLASS(StepKinematics_PairValue)
DEFINE_HANDLECLASS(StepKinematics_PlanarCurvePair)
DEFINE_HANDLECLASS(StepKinematics_PlanarCurvePairRange)
DEFINE_HANDLECLASS(StepKinematics_PlanarPair)
DEFINE_HANDLECLASS(StepKinematics_PlanarPairValue)
DEFINE_HANDLECLASS(StepKinematics_PlanarPairWithRange)
DEFINE_HANDLECLASS(StepKinematics_PointOnPlanarCurvePair)
DEFINE_HANDLECLASS(StepKinematics_PointOnPlanarCurvePairValue)
DEFINE_HANDLECLASS(StepKinematics_PointOnPlanarCurvePairWithRange)
DEFINE_HANDLECLASS(StepKinematics_PointOnSurfacePair)
DEFINE_HANDLECLASS(StepKinematics_PointOnSurfacePairValue)
DEFINE_HANDLECLASS(StepKinematics_PointOnSurfacePairWithRange)
DEFINE_HANDLECLASS(StepKinematics_PrismaticPair)
DEFINE_HANDLECLASS(StepKinematics_PrismaticPairValue)
DEFINE_HANDLECLASS(StepKinematics_PrismaticPairWithRange)
DEFINE_HANDLECLASS(StepKinematics_ProductDefinitionKinematics)
DEFINE_HANDLECLASS(StepKinematics_ProductDefinitionRelationshipKinematics)
DEFINE_HANDLECLASS(StepKinematics_RackAndPinionPair)
DEFINE_HANDLECLASS(StepKinematics_RackAndPinionPairValue)
DEFINE_HANDLECLASS(StepKinematics_RackAndPinionPairWithRange)
DEFINE_HANDLECLASS(StepKinematics_RevolutePair)
DEFINE_HANDLECLASS(StepKinematics_RevolutePairValue)
DEFINE_HANDLECLASS(StepKinematics_RevolutePairWithRange)
DEFINE_HANDLECLASS(StepKinematics_RigidLinkRepresentation)
DEFINE_HANDLECLASS(StepKinematics_RollingCurvePair)
DEFINE_HANDLECLASS(StepKinematics_RollingCurvePairValue)
DEFINE_HANDLECLASS(StepKinematics_RollingSurfacePair)
DEFINE_HANDLECLASS(StepKinematics_RollingSurfacePairValue)
DEFINE_HANDLECLASS(StepKinematics_RotationAboutDirection)
DEFINE_HANDLECLASS(StepKinematics_ScrewPair)
DEFINE_HANDLECLASS(StepKinematics_ScrewPairValue)
DEFINE_HANDLECLASS(StepKinematics_ScrewPairWithRange)
DEFINE_HANDLECLASS(StepKinematics_SlidingCurvePair)
DEFINE_HANDLECLASS(StepKinematics_SlidingCurvePairValue)
DEFINE_HANDLECLASS(StepKinematics_SlidingSurfacePair)
DEFINE_HANDLECLASS(StepKinematics_SlidingSurfacePairValue)
DEFINE_HANDLECLASS(StepKinematics_SphericalPair)
DEFINE_HANDLECLASS(StepKinematics_SphericalPairWithPin)
DEFINE_HANDLECLASS(StepKinematics_SphericalPairWithPinAndRange)
DEFINE_HANDLECLASS(StepKinematics_SphericalPairWithRange)
DEFINE_HANDLECLASS(StepKinematics_SurfacePair)
DEFINE_HANDLECLASS(StepKinematics_SurfacePairWithRange)
DEFINE_HANDLECLASS(StepKinematics_UnconstrainedPair)
DEFINE_HANDLECLASS(StepKinematics_UnconstrainedPairValue)
DEFINE_HANDLECLASS(StepKinematics_UniversalPair)
DEFINE_HANDLECLASS(StepKinematics_UniversalPairValue)
DEFINE_HANDLECLASS(StepKinematics_UniversalPairWithRange)
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
DEFINE_HANDLECLASS(StepSelect_Activator)
DEFINE_HANDLECLASS(StepSelect_FileModifier)
DEFINE_HANDLECLASS(StepSelect_FloatFormat)
DEFINE_HANDLECLASS(StepSelect_ModelModifier)
DEFINE_HANDLECLASS(StepSelect_StepType)
DEFINE_HANDLECLASS(StepSelect_WorkLibrary)
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
DEFINE_HANDLECLASS(StepVisual_AnnotationCurveOccurrence)
DEFINE_HANDLECLASS(StepVisual_AnnotationCurveOccurrenceAndGeomReprItem)
DEFINE_HANDLECLASS(StepVisual_AnnotationFillArea)
DEFINE_HANDLECLASS(StepVisual_AnnotationFillAreaOccurrence)
DEFINE_HANDLECLASS(StepVisual_AnnotationOccurrence)
DEFINE_HANDLECLASS(StepVisual_AnnotationPlane)
DEFINE_HANDLECLASS(StepVisual_AnnotationText)
DEFINE_HANDLECLASS(StepVisual_AnnotationTextOccurrence)
DEFINE_HANDLECLASS(StepVisual_AreaInSet)
DEFINE_HANDLECLASS(StepVisual_BackgroundColour)
DEFINE_HANDLECLASS(StepVisual_CameraImage)
DEFINE_HANDLECLASS(StepVisual_CameraImage2dWithScale)
DEFINE_HANDLECLASS(StepVisual_CameraImage3dWithScale)
DEFINE_HANDLECLASS(StepVisual_CameraModel)
DEFINE_HANDLECLASS(StepVisual_CameraModelD2)
DEFINE_HANDLECLASS(StepVisual_CameraModelD3)
DEFINE_HANDLECLASS(StepVisual_CameraModelD3MultiClipping)
DEFINE_HANDLECLASS(StepVisual_CameraModelD3MultiClippingIntersection)
DEFINE_HANDLECLASS(StepVisual_CameraModelD3MultiClippingUnion)
DEFINE_HANDLECLASS(StepVisual_CameraUsage)
DEFINE_HANDLECLASS(StepVisual_CharacterizedObjAndRepresentationAndDraughtingModel)
DEFINE_HANDLECLASS(StepVisual_Colour)
DEFINE_HANDLECLASS(StepVisual_ColourRgb)
DEFINE_HANDLECLASS(StepVisual_ColourSpecification)
DEFINE_HANDLECLASS(StepVisual_ComplexTriangulatedFace)
DEFINE_HANDLECLASS(StepVisual_ComplexTriangulatedSurfaceSet)
DEFINE_HANDLECLASS(StepVisual_CompositeText)
DEFINE_HANDLECLASS(StepVisual_CompositeTextWithExtent)
DEFINE_HANDLECLASS(StepVisual_ContextDependentInvisibility)
DEFINE_HANDLECLASS(StepVisual_ContextDependentOverRidingStyledItem)
DEFINE_HANDLECLASS(StepVisual_CoordinatesList)
DEFINE_HANDLECLASS(StepVisual_CubicBezierTessellatedEdge)
DEFINE_HANDLECLASS(StepVisual_CubicBezierTriangulatedFace)
DEFINE_HANDLECLASS(StepVisual_CurveStyle)
DEFINE_HANDLECLASS(StepVisual_CurveStyleFont)
DEFINE_HANDLECLASS(StepVisual_CurveStyleFontPattern)
DEFINE_HANDLECLASS(StepVisual_DraughtingAnnotationOccurrence)
DEFINE_HANDLECLASS(StepVisual_DraughtingCallout)
DEFINE_HANDLECLASS(StepVisual_DraughtingModel)
DEFINE_HANDLECLASS(StepVisual_DraughtingPreDefinedColour)
DEFINE_HANDLECLASS(StepVisual_DraughtingPreDefinedCurveFont)
DEFINE_HANDLECLASS(StepVisual_ExternallyDefinedCurveFont)
DEFINE_HANDLECLASS(StepVisual_ExternallyDefinedTextFont)
DEFINE_HANDLECLASS(StepVisual_FillAreaStyle)
DEFINE_HANDLECLASS(StepVisual_FillAreaStyleColour)
DEFINE_HANDLECLASS(StepVisual_Invisibility)
DEFINE_HANDLECLASS(StepVisual_MarkerMember)
DEFINE_HANDLECLASS(StepVisual_MechanicalDesignGeometricPresentationArea)
DEFINE_HANDLECLASS(StepVisual_MechanicalDesignGeometricPresentationRepresentation)
DEFINE_HANDLECLASS(StepVisual_NullStyleMember)
DEFINE_HANDLECLASS(StepVisual_OverRidingStyledItem)
DEFINE_HANDLECLASS(StepVisual_PlanarBox)
DEFINE_HANDLECLASS(StepVisual_PlanarExtent)
DEFINE_HANDLECLASS(StepVisual_PointStyle)
DEFINE_HANDLECLASS(StepVisual_PreDefinedColour)
DEFINE_HANDLECLASS(StepVisual_PreDefinedCurveFont)
DEFINE_HANDLECLASS(StepVisual_PreDefinedItem)
DEFINE_HANDLECLASS(StepVisual_PreDefinedTextFont)
DEFINE_HANDLECLASS(StepVisual_PresentationArea)
DEFINE_HANDLECLASS(StepVisual_PresentationLayerAssignment)
DEFINE_HANDLECLASS(StepVisual_PresentationLayerUsage)
DEFINE_HANDLECLASS(StepVisual_PresentationRepresentation)
DEFINE_HANDLECLASS(StepVisual_PresentationSet)
DEFINE_HANDLECLASS(StepVisual_PresentationSize)
DEFINE_HANDLECLASS(StepVisual_PresentationStyleAssignment)
DEFINE_HANDLECLASS(StepVisual_PresentationStyleByContext)
DEFINE_HANDLECLASS(StepVisual_PresentationView)
DEFINE_HANDLECLASS(StepVisual_PresentedItem)
DEFINE_HANDLECLASS(StepVisual_PresentedItemRepresentation)
DEFINE_HANDLECLASS(StepVisual_RepositionedTessellatedGeometricSet)
DEFINE_HANDLECLASS(StepVisual_RepositionedTessellatedItem)
DEFINE_HANDLECLASS(StepVisual_StyledItem)
DEFINE_HANDLECLASS(StepVisual_SurfaceSideStyle)
DEFINE_HANDLECLASS(StepVisual_SurfaceStyleBoundary)
DEFINE_HANDLECLASS(StepVisual_SurfaceStyleControlGrid)
DEFINE_HANDLECLASS(StepVisual_SurfaceStyleFillArea)
DEFINE_HANDLECLASS(StepVisual_SurfaceStyleParameterLine)
DEFINE_HANDLECLASS(StepVisual_SurfaceStyleReflectanceAmbient)
DEFINE_HANDLECLASS(StepVisual_SurfaceStyleRendering)
DEFINE_HANDLECLASS(StepVisual_SurfaceStyleRenderingWithProperties)
DEFINE_HANDLECLASS(StepVisual_SurfaceStyleSegmentationCurve)
DEFINE_HANDLECLASS(StepVisual_SurfaceStyleSilhouette)
DEFINE_HANDLECLASS(StepVisual_SurfaceStyleTransparent)
DEFINE_HANDLECLASS(StepVisual_SurfaceStyleUsage)
DEFINE_HANDLECLASS(StepVisual_Template)
DEFINE_HANDLECLASS(StepVisual_TemplateInstance)
DEFINE_HANDLECLASS(StepVisual_TessellatedAnnotationOccurrence)
DEFINE_HANDLECLASS(StepVisual_TessellatedConnectingEdge)
DEFINE_HANDLECLASS(StepVisual_TessellatedCurveSet)
DEFINE_HANDLECLASS(StepVisual_TessellatedEdge)
DEFINE_HANDLECLASS(StepVisual_TessellatedFace)
DEFINE_HANDLECLASS(StepVisual_TessellatedGeometricSet)
DEFINE_HANDLECLASS(StepVisual_TessellatedItem)
DEFINE_HANDLECLASS(StepVisual_TessellatedPointSet)
DEFINE_HANDLECLASS(StepVisual_TessellatedShapeRepresentation)
DEFINE_HANDLECLASS(StepVisual_TessellatedShapeRepresentationWithAccuracyParameters)
DEFINE_HANDLECLASS(StepVisual_TessellatedShell)
DEFINE_HANDLECLASS(StepVisual_TessellatedSolid)
DEFINE_HANDLECLASS(StepVisual_TessellatedStructuredItem)
DEFINE_HANDLECLASS(StepVisual_TessellatedSurfaceSet)
DEFINE_HANDLECLASS(StepVisual_TessellatedVertex)
DEFINE_HANDLECLASS(StepVisual_TessellatedWire)
DEFINE_HANDLECLASS(StepVisual_TextLiteral)
DEFINE_HANDLECLASS(StepVisual_TextStyle)
DEFINE_HANDLECLASS(StepVisual_TextStyleForDefinedFont)
DEFINE_HANDLECLASS(StepVisual_TextStyleWithBoxCharacteristics)
DEFINE_HANDLECLASS(StepVisual_TriangulatedFace)
DEFINE_HANDLECLASS(StepVisual_ViewVolume)
