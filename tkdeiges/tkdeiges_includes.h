#include <BRepToIGES_BREntity.hxx>
#include <BRepToIGES_BRShell.hxx>
#include <BRepToIGES_BRSolid.hxx>
#include <BRepToIGES_BRWire.hxx>
#include <BRepToIGESBRep_Entity.hxx>

#include <DEIGES_ConfigurationNode.hxx>
#include <DEIGES_Parameters.hxx>
#include <DEIGES_Provider.hxx>

#include <Geom2dToIGES_Geom2dCurve.hxx>
#include <Geom2dToIGES_Geom2dEntity.hxx>
#include <Geom2dToIGES_Geom2dPoint.hxx>
#include <Geom2dToIGES_Geom2dVector.hxx>
#include <GeomToIGES_GeomCurve.hxx>
#include <GeomToIGES_GeomEntity.hxx>
#include <GeomToIGES_GeomPoint.hxx>
#include <GeomToIGES_GeomSurface.hxx>
#include <GeomToIGES_GeomVector.hxx>
#include <IGESAppli.hxx>
#include <IGESAppli_DrilledHole.hxx>
#include <IGESAppli_ElementResults.hxx>
#include <IGESAppli_FiniteElement.hxx>
#include <IGESAppli_Flow.hxx>
#include <IGESAppli_FlowLineSpec.hxx>
#include <IGESAppli_GeneralModule.hxx>
#include <IGESAppli_LevelFunction.hxx>
#include <IGESAppli_LevelToPWBLayerMap.hxx>
#include <IGESAppli_LineWidening.hxx>
#include <IGESAppli_NodalConstraint.hxx>
#include <IGESAppli_NodalDisplAndRot.hxx>
#include <IGESAppli_NodalResults.hxx>
#include <IGESAppli_Node.hxx>
#include <IGESAppli_PWBArtworkStackup.hxx>
#include <IGESAppli_PWBDrilledHole.hxx>
#include <IGESAppli_PartNumber.hxx>
#include <IGESAppli_PinNumber.hxx>
#include <IGESAppli_PipingFlow.hxx>
#include <IGESAppli_Protocol.hxx>
#include <IGESAppli_ReadWriteModule.hxx>
#include <IGESAppli_ReferenceDesignator.hxx>
#include <IGESAppli_RegionRestriction.hxx>
#include <IGESAppli_SpecificModule.hxx>
#include <IGESAppli_ToolDrilledHole.hxx>
#include <IGESAppli_ToolElementResults.hxx>
#include <IGESAppli_ToolFiniteElement.hxx>
#include <IGESAppli_ToolFlow.hxx>
#include <IGESAppli_ToolFlowLineSpec.hxx>
#include <IGESAppli_ToolLevelFunction.hxx>
#include <IGESAppli_ToolLevelToPWBLayerMap.hxx>
#include <IGESAppli_ToolLineWidening.hxx>
#include <IGESAppli_ToolNodalConstraint.hxx>
#include <IGESAppli_ToolNodalDisplAndRot.hxx>
#include <IGESAppli_ToolNodalResults.hxx>
#include <IGESAppli_ToolNode.hxx>
#include <IGESAppli_ToolPWBArtworkStackup.hxx>
#include <IGESAppli_ToolPWBDrilledHole.hxx>
#include <IGESAppli_ToolPartNumber.hxx>
#include <IGESAppli_ToolPinNumber.hxx>
#include <IGESAppli_ToolPipingFlow.hxx>
#include <IGESAppli_ToolReferenceDesignator.hxx>
#include <IGESAppli_ToolRegionRestriction.hxx>
#include <IGESBasic.hxx>
#include <IGESBasic_AssocGroupType.hxx>
#include <IGESBasic_ExternalRefFile.hxx>
#include <IGESBasic_ExternalRefFileIndex.hxx>
#include <IGESBasic_ExternalRefFileName.hxx>
#include <IGESBasic_ExternalRefLibName.hxx>
#include <IGESBasic_ExternalRefName.hxx>
#include <IGESBasic_ExternalReferenceFile.hxx>
#include <IGESBasic_GeneralModule.hxx>
#include <IGESBasic_Group.hxx>
#include <IGESBasic_GroupWithoutBackP.hxx>
#include <IGESBasic_HArray1OfHArray1OfIGESEntity.hxx>
#include <IGESBasic_HArray1OfHArray1OfInteger.hxx>
#include <IGESBasic_HArray1OfHArray1OfReal.hxx>
#include <IGESBasic_HArray1OfHArray1OfXY.hxx>
#include <IGESBasic_HArray1OfHArray1OfXYZ.hxx>
#include <IGESBasic_Hierarchy.hxx>
#include <IGESBasic_Name.hxx>
#include <IGESBasic_OrderedGroup.hxx>
#include <IGESBasic_OrderedGroupWithoutBackP.hxx>
#include <IGESBasic_Protocol.hxx>
#include <IGESBasic_ReadWriteModule.hxx>
#include <IGESBasic_SingleParent.hxx>
#include <IGESBasic_SingularSubfigure.hxx>
#include <IGESBasic_SpecificModule.hxx>
#include <IGESBasic_SubfigureDef.hxx>
#include <IGESBasic_ToolAssocGroupType.hxx>
#include <IGESBasic_ToolExternalRefFile.hxx>
#include <IGESBasic_ToolExternalRefFileIndex.hxx>
#include <IGESBasic_ToolExternalRefFileName.hxx>
#include <IGESBasic_ToolExternalRefLibName.hxx>
#include <IGESBasic_ToolExternalRefName.hxx>
#include <IGESBasic_ToolExternalReferenceFile.hxx>
#include <IGESBasic_ToolGroup.hxx>
#include <IGESBasic_ToolGroupWithoutBackP.hxx>
#include <IGESBasic_ToolHierarchy.hxx>
#include <IGESBasic_ToolName.hxx>
#include <IGESBasic_ToolOrderedGroup.hxx>
#include <IGESBasic_ToolOrderedGroupWithoutBackP.hxx>
#include <IGESBasic_ToolSingleParent.hxx>
#include <IGESBasic_ToolSingularSubfigure.hxx>
#include <IGESBasic_ToolSubfigureDef.hxx>
#include <IGESCAFControl.hxx>
#include <IGESCAFControl_ConfigurationNode.hxx>
#include <IGESCAFControl_Provider.hxx>
#include <IGESCAFControl_Reader.hxx>
#include <IGESCAFControl_Writer.hxx>
#include <IGESControl_ActorWrite.hxx>
#include <IGESControl_AlgoContainer.hxx>
#include <IGESControl_Controller.hxx>
#include <IGESControl_IGESBoundary.hxx>
#include <IGESControl_Reader.hxx>
#include <IGESControl_ToolContainer.hxx>
#include <IGESControl_Writer.hxx>
#include <IGESConvGeom.hxx>
#include <IGESConvGeom_GeomBuilder.hxx>
#include <IGESData.hxx>
#include <IGESData_BasicEditor.hxx>
#include <IGESData_ColorEntity.hxx>
#include <IGESData_DefList.hxx>
#include <IGESData_DefSwitch.hxx>
#include <IGESData_DefType.hxx>
#include <IGESData_DefaultGeneral.hxx>
#include <IGESData_DefaultSpecific.hxx>
#include <IGESData_DirChecker.hxx>
#include <IGESData_DirPart.hxx>
#include <IGESData_FileProtocol.hxx>
#include <IGESData_FileRecognizer.hxx>
#include <IGESData_FreeFormatEntity.hxx>
#include <IGESData_GeneralModule.hxx>
#include <IGESData_GlobalNodeOfSpecificLib.hxx>
#include <IGESData_GlobalNodeOfWriterLib.hxx>
#include <IGESData_GlobalSection.hxx>
#include <IGESData_IGESDumper.hxx>
#include <IGESData_IGESEntity.hxx>
#include <IGESData_IGESModel.hxx>
#include <IGESData_IGESReaderData.hxx>
#include <IGESData_IGESReaderTool.hxx>
#include <IGESData_IGESType.hxx>
#include <IGESData_IGESWriter.hxx>
#include <IGESData_LabelDisplayEntity.hxx>
#include <IGESData_LevelListEntity.hxx>
#include <IGESData_LineFontEntity.hxx>
#include <IGESData_NameEntity.hxx>
#include <IGESData_NodeOfSpecificLib.hxx>
#include <IGESData_NodeOfWriterLib.hxx>
#include <IGESData_ParamCursor.hxx>
#include <IGESData_ParamReader.hxx>
#include <IGESData_Protocol.hxx>
#include <IGESData_ReadStage.hxx>
#include <IGESData_ReadWriteModule.hxx>
#include <IGESData_SingleParentEntity.hxx>
#include <IGESData_SpecificLib.hxx>
#include <IGESData_SpecificModule.hxx>
#include <IGESData_Status.hxx>
#include <IGESData_ToolLocation.hxx>
#include <IGESData_TransfEntity.hxx>
#include <IGESData_UndefinedEntity.hxx>
#include <IGESData_ViewKindEntity.hxx>
#include <IGESData_WriterLib.hxx>
#include <IGESDefs.hxx>
#include <IGESDefs_AssociativityDef.hxx>
#include <IGESDefs_AttributeDef.hxx>
#include <IGESDefs_AttributeTable.hxx>
#include <IGESDefs_GeneralModule.hxx>
#include <IGESDefs_GenericData.hxx>
#include <IGESDefs_HArray1OfHArray1OfTextDisplayTemplate.hxx>
#include <IGESDefs_MacroDef.hxx>
#include <IGESDefs_Protocol.hxx>
#include <IGESDefs_ReadWriteModule.hxx>
#include <IGESDefs_SpecificModule.hxx>
#include <IGESDefs_TabularData.hxx>
#include <IGESDefs_ToolAssociativityDef.hxx>
#include <IGESDefs_ToolAttributeDef.hxx>
#include <IGESDefs_ToolAttributeTable.hxx>
#include <IGESDefs_ToolGenericData.hxx>
#include <IGESDefs_ToolMacroDef.hxx>
#include <IGESDefs_ToolTabularData.hxx>
#include <IGESDefs_ToolUnitsData.hxx>
#include <IGESDefs_UnitsData.hxx>
#include <IGESDimen.hxx>
#include <IGESDimen_AngularDimension.hxx>
#include <IGESDimen_BasicDimension.hxx>
#include <IGESDimen_CenterLine.hxx>
#include <IGESDimen_CurveDimension.hxx>
#include <IGESDimen_DiameterDimension.hxx>
#include <IGESDimen_DimensionDisplayData.hxx>
#include <IGESDimen_DimensionTolerance.hxx>
#include <IGESDimen_DimensionUnits.hxx>
#include <IGESDimen_DimensionedGeometry.hxx>
#include <IGESDimen_FlagNote.hxx>
#include <IGESDimen_GeneralLabel.hxx>
#include <IGESDimen_GeneralModule.hxx>
#include <IGESDimen_GeneralNote.hxx>
#include <IGESDimen_GeneralSymbol.hxx>
#include <IGESDimen_LeaderArrow.hxx>
#include <IGESDimen_LinearDimension.hxx>
#include <IGESDimen_NewDimensionedGeometry.hxx>
#include <IGESDimen_NewGeneralNote.hxx>
#include <IGESDimen_OrdinateDimension.hxx>
#include <IGESDimen_PointDimension.hxx>
#include <IGESDimen_Protocol.hxx>
#include <IGESDimen_RadiusDimension.hxx>
#include <IGESDimen_ReadWriteModule.hxx>
#include <IGESDimen_Section.hxx>
#include <IGESDimen_SectionedArea.hxx>
#include <IGESDimen_SpecificModule.hxx>
#include <IGESDimen_ToolAngularDimension.hxx>
#include <IGESDimen_ToolBasicDimension.hxx>
#include <IGESDimen_ToolCenterLine.hxx>
#include <IGESDimen_ToolCurveDimension.hxx>
#include <IGESDimen_ToolDiameterDimension.hxx>
#include <IGESDimen_ToolDimensionDisplayData.hxx>
#include <IGESDimen_ToolDimensionTolerance.hxx>
#include <IGESDimen_ToolDimensionUnits.hxx>
#include <IGESDimen_ToolDimensionedGeometry.hxx>
#include <IGESDimen_ToolFlagNote.hxx>
#include <IGESDimen_ToolGeneralLabel.hxx>
#include <IGESDimen_ToolGeneralNote.hxx>
#include <IGESDimen_ToolGeneralSymbol.hxx>
#include <IGESDimen_ToolLeaderArrow.hxx>
#include <IGESDimen_ToolLinearDimension.hxx>
#include <IGESDimen_ToolNewDimensionedGeometry.hxx>
#include <IGESDimen_ToolNewGeneralNote.hxx>
#include <IGESDimen_ToolOrdinateDimension.hxx>
#include <IGESDimen_ToolPointDimension.hxx>
#include <IGESDimen_ToolRadiusDimension.hxx>
#include <IGESDimen_ToolSection.hxx>
#include <IGESDimen_ToolSectionedArea.hxx>
#include <IGESDimen_ToolWitnessLine.hxx>
#include <IGESDimen_WitnessLine.hxx>
#include <IGESDraw.hxx>
#include <IGESDraw_CircArraySubfigure.hxx>
#include <IGESDraw_ConnectPoint.hxx>
#include <IGESDraw_Drawing.hxx>
#include <IGESDraw_DrawingWithRotation.hxx>
#include <IGESDraw_GeneralModule.hxx>
#include <IGESDraw_LabelDisplay.hxx>
#include <IGESDraw_NetworkSubfigure.hxx>
#include <IGESDraw_NetworkSubfigureDef.hxx>
#include <IGESDraw_PerspectiveView.hxx>
#include <IGESDraw_Planar.hxx>
#include <IGESDraw_Protocol.hxx>
#include <IGESDraw_ReadWriteModule.hxx>
#include <IGESDraw_RectArraySubfigure.hxx>
#include <IGESDraw_SegmentedViewsVisible.hxx>
#include <IGESDraw_SpecificModule.hxx>
#include <IGESDraw_ToolCircArraySubfigure.hxx>
#include <IGESDraw_ToolConnectPoint.hxx>
#include <IGESDraw_ToolDrawing.hxx>
#include <IGESDraw_ToolDrawingWithRotation.hxx>
#include <IGESDraw_ToolLabelDisplay.hxx>
#include <IGESDraw_ToolNetworkSubfigure.hxx>
#include <IGESDraw_ToolNetworkSubfigureDef.hxx>
#include <IGESDraw_ToolPerspectiveView.hxx>
#include <IGESDraw_ToolPlanar.hxx>
#include <IGESDraw_ToolRectArraySubfigure.hxx>
#include <IGESDraw_ToolSegmentedViewsVisible.hxx>
#include <IGESDraw_ToolView.hxx>
#include <IGESDraw_ToolViewsVisible.hxx>
#include <IGESDraw_ToolViewsVisibleWithAttr.hxx>
#include <IGESDraw_View.hxx>
#include <IGESDraw_ViewsVisible.hxx>
#include <IGESDraw_ViewsVisibleWithAttr.hxx>
#include <IGESFile_Read.hxx>
#include <IGESGeom.hxx>
#include <IGESGeom_BSplineCurve.hxx>
#include <IGESGeom_BSplineSurface.hxx>
#include <IGESGeom_Boundary.hxx>
#include <IGESGeom_BoundedSurface.hxx>
#include <IGESGeom_CircularArc.hxx>
#include <IGESGeom_CompositeCurve.hxx>
#include <IGESGeom_ConicArc.hxx>
#include <IGESGeom_CopiousData.hxx>
#include <IGESGeom_CurveOnSurface.hxx>
#include <IGESGeom_Direction.hxx>
#include <IGESGeom_Flash.hxx>
#include <IGESGeom_GeneralModule.hxx>
#include <IGESGeom_Line.hxx>
#include <IGESGeom_OffsetCurve.hxx>
#include <IGESGeom_OffsetSurface.hxx>
#include <IGESGeom_Plane.hxx>
#include <IGESGeom_Point.hxx>
#include <IGESGeom_Protocol.hxx>
#include <IGESGeom_ReadWriteModule.hxx>
#include <IGESGeom_RuledSurface.hxx>
#include <IGESGeom_SpecificModule.hxx>
#include <IGESGeom_SplineCurve.hxx>
#include <IGESGeom_SplineSurface.hxx>
#include <IGESGeom_SurfaceOfRevolution.hxx>
#include <IGESGeom_TabulatedCylinder.hxx>
#include <IGESGeom_ToolBSplineCurve.hxx>
#include <IGESGeom_ToolBSplineSurface.hxx>
#include <IGESGeom_ToolBoundary.hxx>
#include <IGESGeom_ToolBoundedSurface.hxx>
#include <IGESGeom_ToolCircularArc.hxx>
#include <IGESGeom_ToolCompositeCurve.hxx>
#include <IGESGeom_ToolConicArc.hxx>
#include <IGESGeom_ToolCopiousData.hxx>
#include <IGESGeom_ToolCurveOnSurface.hxx>
#include <IGESGeom_ToolDirection.hxx>
#include <IGESGeom_ToolFlash.hxx>
#include <IGESGeom_ToolLine.hxx>
#include <IGESGeom_ToolOffsetCurve.hxx>
#include <IGESGeom_ToolOffsetSurface.hxx>
#include <IGESGeom_ToolPlane.hxx>
#include <IGESGeom_ToolPoint.hxx>
#include <IGESGeom_ToolRuledSurface.hxx>
#include <IGESGeom_ToolSplineCurve.hxx>
#include <IGESGeom_ToolSplineSurface.hxx>
#include <IGESGeom_ToolSurfaceOfRevolution.hxx>
#include <IGESGeom_ToolTabulatedCylinder.hxx>
#include <IGESGeom_ToolTransformationMatrix.hxx>
#include <IGESGeom_ToolTrimmedSurface.hxx>
#include <IGESGeom_TransformationMatrix.hxx>
#include <IGESGeom_TrimmedSurface.hxx>
#include <IGESGraph.hxx>
#include <IGESGraph_Color.hxx>
#include <IGESGraph_DefinitionLevel.hxx>
#include <IGESGraph_DrawingSize.hxx>
#include <IGESGraph_DrawingUnits.hxx>
#include <IGESGraph_GeneralModule.hxx>
#include <IGESGraph_HighLight.hxx>
#include <IGESGraph_IntercharacterSpacing.hxx>
#include <IGESGraph_LineFontDefPattern.hxx>
#include <IGESGraph_LineFontDefTemplate.hxx>
#include <IGESGraph_LineFontPredefined.hxx>
#include <IGESGraph_NominalSize.hxx>
#include <IGESGraph_Pick.hxx>
#include <IGESGraph_Protocol.hxx>
#include <IGESGraph_ReadWriteModule.hxx>
#include <IGESGraph_SpecificModule.hxx>
#include <IGESGraph_TextDisplayTemplate.hxx>
#include <IGESGraph_TextFontDef.hxx>
#include <IGESGraph_ToolColor.hxx>
#include <IGESGraph_ToolDefinitionLevel.hxx>
#include <IGESGraph_ToolDrawingSize.hxx>
#include <IGESGraph_ToolDrawingUnits.hxx>
#include <IGESGraph_ToolHighLight.hxx>
#include <IGESGraph_ToolIntercharacterSpacing.hxx>
#include <IGESGraph_ToolLineFontDefPattern.hxx>
#include <IGESGraph_ToolLineFontDefTemplate.hxx>
#include <IGESGraph_ToolLineFontPredefined.hxx>
#include <IGESGraph_ToolNominalSize.hxx>
#include <IGESGraph_ToolPick.hxx>
#include <IGESGraph_ToolTextDisplayTemplate.hxx>
#include <IGESGraph_ToolTextFontDef.hxx>
#include <IGESGraph_ToolUniformRectGrid.hxx>
#include <IGESGraph_UniformRectGrid.hxx>
#include <IGESSelect.hxx>
#include <IGESSelect_Activator.hxx>
#include <IGESSelect_AddFileComment.hxx>
#include <IGESSelect_AddGroup.hxx>
#include <IGESSelect_AutoCorrect.hxx>
#include <IGESSelect_ChangeLevelList.hxx>
#include <IGESSelect_ChangeLevelNumber.hxx>
#include <IGESSelect_ComputeStatus.hxx>
#include <IGESSelect_CounterOfLevelNumber.hxx>
#include <IGESSelect_DispPerDrawing.hxx>
#include <IGESSelect_DispPerSingleView.hxx>
#include <IGESSelect_Dumper.hxx>
#include <IGESSelect_EditDirPart.hxx>
#include <IGESSelect_EditHeader.hxx>
#include <IGESSelect_FileModifier.hxx>
#include <IGESSelect_FloatFormat.hxx>
#include <IGESSelect_IGESName.hxx>
#include <IGESSelect_IGESTypeForm.hxx>
#include <IGESSelect_ModelModifier.hxx>
#include <IGESSelect_RebuildDrawings.hxx>
#include <IGESSelect_RebuildGroups.hxx>
#include <IGESSelect_RemoveCurves.hxx>
#include <IGESSelect_SelectBasicGeom.hxx>
#include <IGESSelect_SelectBypassGroup.hxx>
#include <IGESSelect_SelectBypassSubfigure.hxx>
#include <IGESSelect_SelectDrawingFrom.hxx>
#include <IGESSelect_SelectFaces.hxx>
#include <IGESSelect_SelectFromDrawing.hxx>
#include <IGESSelect_SelectFromSingleView.hxx>
#include <IGESSelect_SelectLevelNumber.hxx>
#include <IGESSelect_SelectName.hxx>
#include <IGESSelect_SelectPCurves.hxx>
#include <IGESSelect_SelectSingleViewFrom.hxx>
#include <IGESSelect_SelectSubordinate.hxx>
#include <IGESSelect_SelectVisibleStatus.hxx>
#include <IGESSelect_SetGlobalParameter.hxx>
#include <IGESSelect_SetLabel.hxx>
#include <IGESSelect_SetVersion5.hxx>
#include <IGESSelect_SignColor.hxx>
#include <IGESSelect_SignLevelNumber.hxx>
#include <IGESSelect_SignStatus.hxx>
#include <IGESSelect_SplineToBSpline.hxx>
#include <IGESSelect_UpdateCreationDate.hxx>
#include <IGESSelect_UpdateFileName.hxx>
#include <IGESSelect_UpdateLastChange.hxx>
#include <IGESSelect_ViewSorter.hxx>
#include <IGESSelect_WorkLibrary.hxx>
#include <IGESSolid.hxx>
#include <IGESSolid_Block.hxx>
#include <IGESSolid_BooleanTree.hxx>
#include <IGESSolid_ConeFrustum.hxx>
#include <IGESSolid_ConicalSurface.hxx>
#include <IGESSolid_Cylinder.hxx>
#include <IGESSolid_CylindricalSurface.hxx>
#include <IGESSolid_EdgeList.hxx>
#include <IGESSolid_Ellipsoid.hxx>
#include <IGESSolid_Face.hxx>
#include <IGESSolid_GeneralModule.hxx>
#include <IGESSolid_Loop.hxx>
#include <IGESSolid_ManifoldSolid.hxx>
#include <IGESSolid_PlaneSurface.hxx>
#include <IGESSolid_Protocol.hxx>
#include <IGESSolid_ReadWriteModule.hxx>
#include <IGESSolid_RightAngularWedge.hxx>
#include <IGESSolid_SelectedComponent.hxx>
#include <IGESSolid_Shell.hxx>
#include <IGESSolid_SolidAssembly.hxx>
#include <IGESSolid_SolidInstance.hxx>
#include <IGESSolid_SolidOfLinearExtrusion.hxx>
#include <IGESSolid_SolidOfRevolution.hxx>
#include <IGESSolid_SpecificModule.hxx>
#include <IGESSolid_Sphere.hxx>
#include <IGESSolid_SphericalSurface.hxx>
#include <IGESSolid_ToolBlock.hxx>
#include <IGESSolid_ToolBooleanTree.hxx>
#include <IGESSolid_ToolConeFrustum.hxx>
#include <IGESSolid_ToolConicalSurface.hxx>
#include <IGESSolid_ToolCylinder.hxx>
#include <IGESSolid_ToolCylindricalSurface.hxx>
#include <IGESSolid_ToolEdgeList.hxx>
#include <IGESSolid_ToolEllipsoid.hxx>
#include <IGESSolid_ToolFace.hxx>
#include <IGESSolid_ToolLoop.hxx>
#include <IGESSolid_ToolManifoldSolid.hxx>
#include <IGESSolid_ToolPlaneSurface.hxx>
#include <IGESSolid_ToolRightAngularWedge.hxx>
#include <IGESSolid_ToolSelectedComponent.hxx>
#include <IGESSolid_ToolShell.hxx>
#include <IGESSolid_ToolSolidAssembly.hxx>
#include <IGESSolid_ToolSolidInstance.hxx>
#include <IGESSolid_ToolSolidOfLinearExtrusion.hxx>
#include <IGESSolid_ToolSolidOfRevolution.hxx>
#include <IGESSolid_ToolSphere.hxx>
#include <IGESSolid_ToolSphericalSurface.hxx>
#include <IGESSolid_ToolToroidalSurface.hxx>
#include <IGESSolid_ToolTorus.hxx>
#include <IGESSolid_ToolVertexList.hxx>
#include <IGESSolid_TopoBuilder.hxx>
#include <IGESSolid_ToroidalSurface.hxx>
#include <IGESSolid_Torus.hxx>
#include <IGESSolid_VertexList.hxx>
#include <IGESToBRep.hxx>
#include <IGESToBRep_Actor.hxx>
#include <IGESToBRep_AlgoContainer.hxx>
#include <IGESToBRep_BRepEntity.hxx>
#include <IGESToBRep_BasicCurve.hxx>
#include <IGESToBRep_BasicSurface.hxx>
#include <IGESToBRep_CurveAndSurface.hxx>
#include <IGESToBRep_IGESBoundary.hxx>
#include <IGESToBRep_Reader.hxx>
#include <IGESToBRep_ToolContainer.hxx>
#include <IGESToBRep_TopoCurve.hxx>
#include <IGESToBRep_TopoSurface.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(DEIGES_ConfigurationNode)

DEFINE_HANDLECLASS(IGESAppli_DrilledHole)
DEFINE_HANDLECLASS(IGESAppli_ElementResults)
DEFINE_HANDLECLASS(IGESAppli_FiniteElement)
DEFINE_HANDLECLASS(IGESAppli_Flow)
DEFINE_HANDLECLASS(IGESAppli_FlowLineSpec)
DEFINE_HANDLECLASS(IGESAppli_GeneralModule)
DEFINE_HANDLECLASS(IGESAppli_LevelFunction)
DEFINE_HANDLECLASS(IGESAppli_LevelToPWBLayerMap)
DEFINE_HANDLECLASS(IGESAppli_LineWidening)
DEFINE_HANDLECLASS(IGESAppli_NodalConstraint)
DEFINE_HANDLECLASS(IGESAppli_NodalDisplAndRot)
DEFINE_HANDLECLASS(IGESAppli_NodalResults)
DEFINE_HANDLECLASS(IGESAppli_Node)
DEFINE_HANDLECLASS(IGESAppli_PartNumber)
DEFINE_HANDLECLASS(IGESAppli_PipingFlow)
DEFINE_HANDLECLASS(IGESAppli_Protocol)
DEFINE_HANDLECLASS(IGESAppli_PWBArtworkStackup)
DEFINE_HANDLECLASS(IGESAppli_PWBDrilledHole)
DEFINE_HANDLECLASS(IGESAppli_ReadWriteModule)
DEFINE_HANDLECLASS(IGESAppli_ReferenceDesignator)
DEFINE_HANDLECLASS(IGESAppli_RegionRestriction)
DEFINE_HANDLECLASS(IGESAppli_SpecificModule)
DEFINE_HANDLECLASS(IGESBasic_AssocGroupType)
DEFINE_HANDLECLASS(IGESBasic_ExternalReferenceFile)
DEFINE_HANDLECLASS(IGESBasic_ExternalRefFile)
DEFINE_HANDLECLASS(IGESBasic_ExternalRefFileIndex)
DEFINE_HANDLECLASS(IGESBasic_ExternalRefFileName)
DEFINE_HANDLECLASS(IGESBasic_ExternalRefLibName)
DEFINE_HANDLECLASS(IGESBasic_ExternalRefName)
DEFINE_HANDLECLASS(IGESBasic_GeneralModule)
DEFINE_HANDLECLASS(IGESBasic_Group)
DEFINE_HANDLECLASS(IGESBasic_GroupWithoutBackP)
DEFINE_HANDLECLASS(IGESBasic_Hierarchy)
DEFINE_HANDLECLASS(IGESBasic_Name)
DEFINE_HANDLECLASS(IGESBasic_OrderedGroup)
DEFINE_HANDLECLASS(IGESBasic_OrderedGroupWithoutBackP)
DEFINE_HANDLECLASS(IGESBasic_Protocol)
DEFINE_HANDLECLASS(IGESBasic_ReadWriteModule)
DEFINE_HANDLECLASS(IGESBasic_SingleParent)
DEFINE_HANDLECLASS(IGESBasic_SingularSubfigure)
DEFINE_HANDLECLASS(IGESBasic_SpecificModule)
DEFINE_HANDLECLASS(IGESBasic_SubfigureDef)
DEFINE_HANDLECLASS(IGESControl_ActorWrite)
DEFINE_HANDLECLASS(IGESControl_AlgoContainer)
DEFINE_HANDLECLASS(IGESControl_Controller)
DEFINE_HANDLECLASS(IGESControl_IGESBoundary)
DEFINE_HANDLECLASS(IGESControl_ToolContainer)
DEFINE_HANDLECLASS(IGESData_ColorEntity)
DEFINE_HANDLECLASS(IGESData_DefaultGeneral)
DEFINE_HANDLECLASS(IGESData_DefaultSpecific)
DEFINE_HANDLECLASS(IGESData_FileProtocol)
DEFINE_HANDLECLASS(IGESData_FileRecognizer)
DEFINE_HANDLECLASS(IGESData_FreeFormatEntity)
DEFINE_HANDLECLASS(IGESData_GeneralModule)
DEFINE_HANDLECLASS(IGESData_GlobalNodeOfSpecificLib)
DEFINE_HANDLECLASS(IGESData_GlobalNodeOfWriterLib)
DEFINE_HANDLECLASS(IGESData_IGESEntity)
DEFINE_HANDLECLASS(IGESData_IGESModel)
DEFINE_HANDLECLASS(IGESData_IGESReaderData)
DEFINE_HANDLECLASS(IGESData_LabelDisplayEntity)
DEFINE_HANDLECLASS(IGESData_LevelListEntity)
DEFINE_HANDLECLASS(IGESData_LineFontEntity)
DEFINE_HANDLECLASS(IGESData_NameEntity)
DEFINE_HANDLECLASS(IGESData_NodeOfSpecificLib)
DEFINE_HANDLECLASS(IGESData_NodeOfWriterLib)
DEFINE_HANDLECLASS(IGESData_Protocol)
DEFINE_HANDLECLASS(IGESData_ReadWriteModule)
DEFINE_HANDLECLASS(IGESData_SingleParentEntity)
DEFINE_HANDLECLASS(IGESData_SpecificModule)
DEFINE_HANDLECLASS(IGESData_ToolLocation)
DEFINE_HANDLECLASS(IGESData_TransfEntity)
DEFINE_HANDLECLASS(IGESData_UndefinedEntity)
DEFINE_HANDLECLASS(IGESData_ViewKindEntity)
DEFINE_HANDLECLASS(IGESDefs_AssociativityDef)
DEFINE_HANDLECLASS(IGESDefs_AttributeDef)
DEFINE_HANDLECLASS(IGESDefs_AttributeTable)
DEFINE_HANDLECLASS(IGESDefs_GeneralModule)
DEFINE_HANDLECLASS(IGESDefs_GenericData)
DEFINE_HANDLECLASS(IGESDefs_HArray1OfHArray1OfTextDisplayTemplate)
DEFINE_HANDLECLASS(IGESDefs_MacroDef)
DEFINE_HANDLECLASS(IGESDefs_Protocol)
DEFINE_HANDLECLASS(IGESDefs_ReadWriteModule)
DEFINE_HANDLECLASS(IGESDefs_SpecificModule)
DEFINE_HANDLECLASS(IGESDefs_TabularData)
DEFINE_HANDLECLASS(IGESDefs_UnitsData)
DEFINE_HANDLECLASS(IGESDimen_AngularDimension)
DEFINE_HANDLECLASS(IGESDimen_BasicDimension)
DEFINE_HANDLECLASS(IGESDimen_CenterLine)
DEFINE_HANDLECLASS(IGESDimen_CurveDimension)
DEFINE_HANDLECLASS(IGESDimen_DiameterDimension)
DEFINE_HANDLECLASS(IGESDimen_DimensionedGeometry)
DEFINE_HANDLECLASS(IGESDimen_DimensionTolerance)
DEFINE_HANDLECLASS(IGESDimen_DimensionUnits)
DEFINE_HANDLECLASS(IGESDimen_FlagNote)
DEFINE_HANDLECLASS(IGESDimen_GeneralLabel)
DEFINE_HANDLECLASS(IGESDimen_GeneralModule)
DEFINE_HANDLECLASS(IGESDimen_GeneralNote)
DEFINE_HANDLECLASS(IGESDimen_GeneralSymbol)
DEFINE_HANDLECLASS(IGESDimen_LeaderArrow)
DEFINE_HANDLECLASS(IGESDimen_LinearDimension)
DEFINE_HANDLECLASS(IGESDimen_NewDimensionedGeometry)
DEFINE_HANDLECLASS(IGESDimen_NewGeneralNote)
DEFINE_HANDLECLASS(IGESDimen_OrdinateDimension)
DEFINE_HANDLECLASS(IGESDimen_PointDimension)
DEFINE_HANDLECLASS(IGESDimen_Protocol)
DEFINE_HANDLECLASS(IGESDimen_RadiusDimension)
DEFINE_HANDLECLASS(IGESDimen_ReadWriteModule)
DEFINE_HANDLECLASS(IGESDimen_Section)
DEFINE_HANDLECLASS(IGESDimen_SectionedArea)
DEFINE_HANDLECLASS(IGESDimen_SpecificModule)
DEFINE_HANDLECLASS(IGESDimen_WitnessLine)
DEFINE_HANDLECLASS(IGESDraw_CircArraySubfigure)
DEFINE_HANDLECLASS(IGESDraw_ConnectPoint)
DEFINE_HANDLECLASS(IGESDraw_Drawing)
DEFINE_HANDLECLASS(IGESDraw_DrawingWithRotation)
DEFINE_HANDLECLASS(IGESDraw_GeneralModule)
DEFINE_HANDLECLASS(IGESDraw_LabelDisplay)
DEFINE_HANDLECLASS(IGESDraw_NetworkSubfigure)
DEFINE_HANDLECLASS(IGESDraw_NetworkSubfigureDef)
DEFINE_HANDLECLASS(IGESDraw_PerspectiveView)
DEFINE_HANDLECLASS(IGESDraw_Planar)
DEFINE_HANDLECLASS(IGESDraw_Protocol)
DEFINE_HANDLECLASS(IGESDraw_ReadWriteModule)
DEFINE_HANDLECLASS(IGESDraw_RectArraySubfigure)
DEFINE_HANDLECLASS(IGESDraw_SegmentedViewsVisible)
DEFINE_HANDLECLASS(IGESDraw_SpecificModule)
DEFINE_HANDLECLASS(IGESDraw_View)
DEFINE_HANDLECLASS(IGESDraw_ViewsVisible)
DEFINE_HANDLECLASS(IGESDraw_ViewsVisibleWithAttr)
DEFINE_HANDLECLASS(IGESGeom_Boundary)
DEFINE_HANDLECLASS(IGESGeom_BoundedSurface)
DEFINE_HANDLECLASS(IGESGeom_BSplineCurve)
DEFINE_HANDLECLASS(IGESGeom_BSplineSurface)
DEFINE_HANDLECLASS(IGESGeom_CircularArc)
DEFINE_HANDLECLASS(IGESGeom_CompositeCurve)
DEFINE_HANDLECLASS(IGESGeom_ConicArc)
DEFINE_HANDLECLASS(IGESGeom_CopiousData)
DEFINE_HANDLECLASS(IGESGeom_CurveOnSurface)
DEFINE_HANDLECLASS(IGESGeom_Direction)
DEFINE_HANDLECLASS(IGESGeom_Flash)
DEFINE_HANDLECLASS(IGESGeom_GeneralModule)
DEFINE_HANDLECLASS(IGESGeom_Line)
DEFINE_HANDLECLASS(IGESGeom_OffsetCurve)
DEFINE_HANDLECLASS(IGESGeom_OffsetSurface)
DEFINE_HANDLECLASS(IGESGeom_Plane)
DEFINE_HANDLECLASS(IGESGeom_Point)
DEFINE_HANDLECLASS(IGESGeom_Protocol)
DEFINE_HANDLECLASS(IGESGeom_ReadWriteModule)
DEFINE_HANDLECLASS(IGESGeom_RuledSurface)
DEFINE_HANDLECLASS(IGESGeom_SpecificModule)
DEFINE_HANDLECLASS(IGESGeom_SplineCurve)
DEFINE_HANDLECLASS(IGESGeom_SplineSurface)
DEFINE_HANDLECLASS(IGESGeom_SurfaceOfRevolution)
DEFINE_HANDLECLASS(IGESGeom_TabulatedCylinder)
DEFINE_HANDLECLASS(IGESGeom_TransformationMatrix)
DEFINE_HANDLECLASS(IGESGeom_TrimmedSurface)
DEFINE_HANDLECLASS(IGESGraph_Color)
DEFINE_HANDLECLASS(IGESGraph_DefinitionLevel)
DEFINE_HANDLECLASS(IGESGraph_DrawingSize)
DEFINE_HANDLECLASS(IGESGraph_DrawingUnits)
DEFINE_HANDLECLASS(IGESGraph_GeneralModule)
DEFINE_HANDLECLASS(IGESGraph_IntercharacterSpacing)
DEFINE_HANDLECLASS(IGESGraph_LineFontDefPattern)
DEFINE_HANDLECLASS(IGESGraph_LineFontDefTemplate)
DEFINE_HANDLECLASS(IGESGraph_LineFontPredefined)
DEFINE_HANDLECLASS(IGESGraph_NominalSize)
DEFINE_HANDLECLASS(IGESGraph_Pick)
DEFINE_HANDLECLASS(IGESGraph_Protocol)
DEFINE_HANDLECLASS(IGESGraph_ReadWriteModule)
DEFINE_HANDLECLASS(IGESGraph_SpecificModule)
DEFINE_HANDLECLASS(IGESGraph_TextDisplayTemplate)
DEFINE_HANDLECLASS(IGESGraph_TextFontDef)
DEFINE_HANDLECLASS(IGESGraph_UniformRectGrid)
DEFINE_HANDLECLASS(IGESSelect_Activator)
DEFINE_HANDLECLASS(IGESSelect_AddFileComment)
DEFINE_HANDLECLASS(IGESSelect_AddGroup)
DEFINE_HANDLECLASS(IGESSelect_AutoCorrect)
DEFINE_HANDLECLASS(IGESSelect_ChangeLevelList)
DEFINE_HANDLECLASS(IGESSelect_ChangeLevelNumber)
DEFINE_HANDLECLASS(IGESSelect_ComputeStatus)
DEFINE_HANDLECLASS(IGESSelect_CounterOfLevelNumber)
DEFINE_HANDLECLASS(IGESSelect_DispPerDrawing)
DEFINE_HANDLECLASS(IGESSelect_DispPerSingleView)
DEFINE_HANDLECLASS(IGESSelect_Dumper)
DEFINE_HANDLECLASS(IGESSelect_EditDirPart)
DEFINE_HANDLECLASS(IGESSelect_EditHeader)
DEFINE_HANDLECLASS(IGESSelect_FileModifier)
DEFINE_HANDLECLASS(IGESSelect_FloatFormat)
DEFINE_HANDLECLASS(IGESSelect_IGESName)
DEFINE_HANDLECLASS(IGESSelect_IGESTypeForm)
DEFINE_HANDLECLASS(IGESSelect_ModelModifier)
DEFINE_HANDLECLASS(IGESSelect_RebuildDrawings)
DEFINE_HANDLECLASS(IGESSelect_RebuildGroups)
DEFINE_HANDLECLASS(IGESSelect_RemoveCurves)
DEFINE_HANDLECLASS(IGESSelect_SelectBasicGeom)
DEFINE_HANDLECLASS(IGESSelect_SelectBypassGroup)
DEFINE_HANDLECLASS(IGESSelect_SelectBypassSubfigure)
DEFINE_HANDLECLASS(IGESSelect_SelectDrawingFrom)
DEFINE_HANDLECLASS(IGESSelect_SelectFaces)
DEFINE_HANDLECLASS(IGESSelect_SelectFromDrawing)
DEFINE_HANDLECLASS(IGESSelect_SelectFromSingleView)
DEFINE_HANDLECLASS(IGESSelect_SelectLevelNumber)
DEFINE_HANDLECLASS(IGESSelect_SelectName)
DEFINE_HANDLECLASS(IGESSelect_SelectPCurves)
DEFINE_HANDLECLASS(IGESSelect_SelectSingleViewFrom)
DEFINE_HANDLECLASS(IGESSelect_SelectSubordinate)
DEFINE_HANDLECLASS(IGESSelect_SelectVisibleStatus)
DEFINE_HANDLECLASS(IGESSelect_SetGlobalParameter)
DEFINE_HANDLECLASS(IGESSelect_SetLabel)
DEFINE_HANDLECLASS(IGESSelect_SetVersion5)
DEFINE_HANDLECLASS(IGESSelect_SignColor)
DEFINE_HANDLECLASS(IGESSelect_SignLevelNumber)
DEFINE_HANDLECLASS(IGESSelect_SignStatus)
DEFINE_HANDLECLASS(IGESSelect_SplineToBSpline)
DEFINE_HANDLECLASS(IGESSelect_UpdateCreationDate)
DEFINE_HANDLECLASS(IGESSelect_UpdateFileName)
DEFINE_HANDLECLASS(IGESSelect_UpdateLastChange)
DEFINE_HANDLECLASS(IGESSelect_ViewSorter)
DEFINE_HANDLECLASS(IGESSelect_WorkLibrary)
DEFINE_HANDLECLASS(IGESSolid_Block)
DEFINE_HANDLECLASS(IGESSolid_BooleanTree)
DEFINE_HANDLECLASS(IGESSolid_ConeFrustum)
DEFINE_HANDLECLASS(IGESSolid_ConicalSurface)
DEFINE_HANDLECLASS(IGESSolid_Cylinder)
DEFINE_HANDLECLASS(IGESSolid_CylindricalSurface)
DEFINE_HANDLECLASS(IGESSolid_EdgeList)
DEFINE_HANDLECLASS(IGESSolid_Ellipsoid)
DEFINE_HANDLECLASS(IGESSolid_Face)
DEFINE_HANDLECLASS(IGESSolid_GeneralModule)
DEFINE_HANDLECLASS(IGESSolid_Loop)
DEFINE_HANDLECLASS(IGESSolid_ManifoldSolid)
DEFINE_HANDLECLASS(IGESSolid_PlaneSurface)
DEFINE_HANDLECLASS(IGESSolid_Protocol)
DEFINE_HANDLECLASS(IGESSolid_ReadWriteModule)
DEFINE_HANDLECLASS(IGESSolid_RightAngularWedge)
DEFINE_HANDLECLASS(IGESSolid_SelectedComponent)
DEFINE_HANDLECLASS(IGESSolid_Shell)
DEFINE_HANDLECLASS(IGESSolid_SolidAssembly)
DEFINE_HANDLECLASS(IGESSolid_SolidInstance)
DEFINE_HANDLECLASS(IGESSolid_SolidOfLinearExtrusion)
DEFINE_HANDLECLASS(IGESSolid_SolidOfRevolution)
DEFINE_HANDLECLASS(IGESSolid_SpecificModule)
DEFINE_HANDLECLASS(IGESSolid_Sphere)
DEFINE_HANDLECLASS(IGESSolid_SphericalSurface)
DEFINE_HANDLECLASS(IGESSolid_ToroidalSurface)
DEFINE_HANDLECLASS(IGESSolid_Torus)
DEFINE_HANDLECLASS(IGESSolid_VertexList)
DEFINE_HANDLECLASS(IGESToBRep_Actor)
DEFINE_HANDLECLASS(IGESToBRep_AlgoContainer)
DEFINE_HANDLECLASS(IGESToBRep_IGESBoundary)
DEFINE_HANDLECLASS(IGESToBRep_ToolContainer)

