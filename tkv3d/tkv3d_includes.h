#include <AIS.hxx>
#include <AIS_Animation.hxx>
#include <AIS_AnimationCamera.hxx>
#include <AIS_AnimationObject.hxx>
#include <AIS_AttributeFilter.hxx>
#include <AIS_Axis.hxx>
#include <AIS_BadEdgeFilter.hxx>
#include <AIS_C0RegularityFilter.hxx>
#include <AIS_CameraFrustum.hxx>
#include <AIS_Circle.hxx>
#include <AIS_ColoredDrawer.hxx>
#include <AIS_ColoredShape.hxx>
#include <AIS_ColorScale.hxx>
#include <AIS_ConnectedInteractive.hxx>
#include <AIS_ExclusionFilter.hxx>
#include <AIS_GlobalStatus.hxx>
#include <AIS_GraphicTool.hxx>
#include <AIS_InteractiveContext.hxx>
#include <AIS_InteractiveObject.hxx>
#include <AIS_LightSource.hxx>
#include <AIS_Line.hxx>
#include <AIS_Manipulator.hxx>
#include <AIS_ManipulatorOwner.hxx>
#include <AIS_MediaPlayer.hxx>
#include <AIS_MultipleConnectedInteractive.hxx>
#include <AIS_Plane.hxx>
#include <AIS_PlaneTrihedron.hxx>
#include <AIS_Point.hxx>
#include <AIS_PointCloud.hxx>
#include <AIS_RubberBand.hxx>
#include <AIS_Selection.hxx>
#include <AIS_Shape.hxx>
#include <AIS_SignatureFilter.hxx>
#include <AIS_TextLabel.hxx>
#include <AIS_TexturedShape.hxx>
#include <AIS_Triangulation.hxx>
#include <AIS_Trihedron.hxx>
#include <AIS_TrihedronOwner.hxx>
#include <AIS_TypeFilter.hxx>
#include <AIS_ViewController.hxx>
#include <AIS_ViewCube.hxx>
#include <AIS_ViewInputBuffer.hxx>
#include <AIS_WalkDelta.hxx>
#include <AIS_XRTrackedDevice.hxx>
#include <DsgPrs.hxx>
#include <DsgPrs_AnglePresentation.hxx>
#include <DsgPrs_Chamf2dPresentation.hxx>
#include <DsgPrs_ConcentricPresentation.hxx>
#include <DsgPrs_DatumPrs.hxx>
#include <DsgPrs_DiameterPresentation.hxx>
#include <DsgPrs_EllipseRadiusPresentation.hxx>
#include <DsgPrs_EqualDistancePresentation.hxx>
#include <DsgPrs_EqualRadiusPresentation.hxx>
#include <DsgPrs_FilletRadiusPresentation.hxx>
#include <DsgPrs_FixPresentation.hxx>
#include <DsgPrs_IdenticPresentation.hxx>
#include <DsgPrs_LengthPresentation.hxx>
#include <DsgPrs_MidPointPresentation.hxx>
#include <DsgPrs_OffsetPresentation.hxx>
#include <DsgPrs_ParalPresentation.hxx>
#include <DsgPrs_PerpenPresentation.hxx>
#include <DsgPrs_RadiusPresentation.hxx>
#include <DsgPrs_ShadedPlanePresentation.hxx>
#include <DsgPrs_ShapeDirPresentation.hxx>
#include <DsgPrs_SymbPresentation.hxx>
#include <DsgPrs_SymmetricPresentation.hxx>
#include <DsgPrs_TangentPresentation.hxx>
#include <DsgPrs_XYZAxisPresentation.hxx>
#include <DsgPrs_XYZPlanePresentation.hxx>
#include <Prs3d.hxx>
#include <Prs3d_Arrow.hxx>
#include <Prs3d_ArrowAspect.hxx>
#include <Prs3d_BasicAspect.hxx>
#include <Prs3d_BndBox.hxx>
#include <Prs3d_DatumAspect.hxx>
#include <Prs3d_DimensionAspect.hxx>
#include <Prs3d_DimensionUnits.hxx>
#include <Prs3d_Drawer.hxx>
#include <Prs3d_IsoAspect.hxx>
#include <Prs3d_LineAspect.hxx>
#include <Prs3d_PlaneAspect.hxx>
#include <Prs3d_Point.hxx>
#include <Prs3d_PointAspect.hxx>
#include <Prs3d_PresentationShadow.hxx>
#include <Prs3d_Root.hxx>
#include <Prs3d_ShadingAspect.hxx>
#include <Prs3d_Text.hxx>
#include <Prs3d_TextAspect.hxx>
#include <Prs3d_ToolCylinder.hxx>
#include <Prs3d_ToolDisk.hxx>
#include <Prs3d_ToolQuadric.hxx>
#include <Prs3d_ToolSector.hxx>
#include <Prs3d_ToolSphere.hxx>
#include <Prs3d_ToolTorus.hxx>
#include <PrsDim.hxx>
#include <PrsDim_AngleDimension.hxx>
#include <PrsDim_Chamf2dDimension.hxx>
#include <PrsDim_Chamf3dDimension.hxx>
#include <PrsDim_ConcentricRelation.hxx>
#include <PrsDim_DiameterDimension.hxx>
#include <PrsDim_Dimension.hxx>
#include <PrsDim_DimensionOwner.hxx>
#include <PrsDim_EllipseRadiusDimension.hxx>
#include <PrsDim_EqualDistanceRelation.hxx>
#include <PrsDim_EqualRadiusRelation.hxx>
#include <PrsDim_FixRelation.hxx>
#include <PrsDim_IdenticRelation.hxx>
#include <PrsDim_LengthDimension.hxx>
#include <PrsDim_MaxRadiusDimension.hxx>
#include <PrsDim_MidPointRelation.hxx>
#include <PrsDim_MinRadiusDimension.hxx>
#include <PrsDim_OffsetDimension.hxx>
#include <PrsDim_ParallelRelation.hxx>
#include <PrsDim_PerpendicularRelation.hxx>
#include <PrsDim_RadiusDimension.hxx>
#include <PrsDim_Relation.hxx>
#include <PrsDim_SymmetricRelation.hxx>
#include <PrsDim_TangentRelation.hxx>
#include <PrsMgr_PresentableObject.hxx>
#include <PrsMgr_Presentation.hxx>
#include <PrsMgr_PresentationManager.hxx>
#include <Select3D_BVHIndexBuffer.hxx>
#include <Select3D_Pnt.hxx>
#include <Select3D_PointData.hxx>
#include <Select3D_SensitiveBox.hxx>
#include <Select3D_SensitiveCircle.hxx>
#include <Select3D_SensitiveCurve.hxx>
#include <Select3D_SensitiveCylinder.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <Select3D_SensitiveFace.hxx>
#include <Select3D_SensitiveGroup.hxx>
#include <Select3D_SensitivePoint.hxx>
#include <Select3D_SensitivePoly.hxx>
#include <Select3D_SensitivePrimitiveArray.hxx>
#include <Select3D_SensitiveSegment.hxx>
#include <Select3D_SensitiveSphere.hxx>
#include <Select3D_SensitiveTriangle.hxx>
#include <Select3D_SensitiveTriangulation.hxx>
#include <Select3D_SensitiveWire.hxx>
#include <SelectBasics.hxx>
#include <SelectBasics_PickResult.hxx>
#include <SelectBasics_SelectingVolumeManager.hxx>
#include <SelectMgr.hxx>
#include <SelectMgr_AndFilter.hxx>
#include <SelectMgr_AndOrFilter.hxx>
#include <SelectMgr_AxisIntersector.hxx>
#include <SelectMgr_BaseFrustum.hxx>
#include <SelectMgr_BaseIntersector.hxx>
#include <SelectMgr_BVHThreadPool.hxx>
#include <SelectMgr_CompositionFilter.hxx>
#include <SelectMgr_EntityOwner.hxx>
#include <SelectMgr_Filter.hxx>
#include <SelectMgr_Frustum.hxx>
#include <SelectMgr_FrustumBuilder.hxx>
#include <SelectMgr_OrFilter.hxx>
#include <SelectMgr_RectangularFrustum.hxx>
#include <SelectMgr_SelectableObject.hxx>
#include <SelectMgr_SelectableObjectSet.hxx>
#include <SelectMgr_SelectingVolumeManager.hxx>
#include <SelectMgr_Selection.hxx>
#include <SelectMgr_SelectionImageFiller.hxx>
#include <SelectMgr_SelectionManager.hxx>
#include <SelectMgr_SensitiveEntity.hxx>
#include <SelectMgr_SortCriterion.hxx>
#include <SelectMgr_ToleranceMap.hxx>
#include <SelectMgr_TriangularFrustum.hxx>
#include <SelectMgr_TriangularFrustumSet.hxx>
#include <SelectMgr_ViewClipRange.hxx>
#include <SelectMgr_ViewerSelector.hxx>
#include <StdPrs_BRepFont.hxx>
#include <StdPrs_BRepTextBuilder.hxx>
#include <StdPrs_Curve.hxx>
#include <StdPrs_DeflectionCurve.hxx>
#include <StdPrs_HLRPolyShape.hxx>
#include <StdPrs_HLRShape.hxx>
#include <StdPrs_HLRShapeI.hxx>
#include <StdPrs_HLRToolShape.hxx>
#include <StdPrs_Isolines.hxx>
#include <StdPrs_Plane.hxx>
#include <StdPrs_PoleCurve.hxx>
#include <StdPrs_ShadedShape.hxx>
#include <StdPrs_ShadedSurface.hxx>
#include <StdPrs_ShapeTool.hxx>
#include <StdPrs_ToolPoint.hxx>
#include <StdPrs_ToolRFace.hxx>
#include <StdPrs_ToolTriangulatedShape.hxx>
#include <StdPrs_ToolVertex.hxx>
#include <StdPrs_WFDeflectionRestrictedFace.hxx>
#include <StdPrs_WFDeflectionSurface.hxx>
#include <StdPrs_WFPoleSurface.hxx>
#include <StdPrs_WFRestrictedFace.hxx>
#include <StdPrs_WFShape.hxx>
#include <StdPrs_WFSurface.hxx>
#include <StdSelect.hxx>
#include <StdSelect_BRepOwner.hxx>
#include <StdSelect_BRepSelectionTool.hxx>
#include <StdSelect_EdgeFilter.hxx>
#include <StdSelect_FaceFilter.hxx>
#include <StdSelect_Shape.hxx>
#include <StdSelect_ShapeTypeFilter.hxx>
#include <V3d.hxx>
#include <V3d_AmbientLight.hxx>
#include <V3d_CircularGrid.hxx>
#include <V3d_DirectionalLight.hxx>
#include <V3d_ImageDumpOptions.hxx>
#include <V3d_PositionalLight.hxx>
#include <V3d_PositionLight.hxx>
#include <V3d_RectangularGrid.hxx>
#include <V3d_SpotLight.hxx>
#include <V3d_Trihedron.hxx>
#include <V3d_View.hxx>
#include <V3d_Viewer.hxx>

#include <Select3D_InteriorSensitivePointSet.hxx>
#include <V3d_Plane.hxx>

class NCollection_Sequence_Handle_V3d_View {
public:
  static Standard_Integer Length (NCollection_Sequence< opencascade::handle< V3d_View > > * TheView) {return TheView->Length();}
  static Standard_Boolean IsEmpty (NCollection_Sequence< opencascade::handle< V3d_View > > *TheView) {return TheView->IsEmpty();}
  static const opencascade::handle< V3d_View > & Value (NCollection_Sequence< opencascade::handle< V3d_View > > * TheView, Standard_Integer theIndex) 
  {return TheView->Value(theIndex);}
private:
  //! Not implemented
  NCollection_Sequence_Handle_V3d_View ();
  ~NCollection_Sequence_Handle_V3d_View (); 
};

class Make_AIS_MouseGestureMap {
public:
  Make_AIS_MouseGestureMap() {}

  AIS_MouseGestureMap& get(void) {return obj;}
  Standard_Boolean Bind (const unsigned int theKey, const unsigned int theItem) {return obj.Bind(theKey, (AIS_MouseGesture)theItem);}
  AIS_MouseGestureMap& Assign (AIS_MouseGestureMap& theOther) {return obj.Assign(theOther);}
  void Clear (const Standard_Boolean doReleaseMemory=Standard_False) {obj.Clear(doReleaseMemory);}

  static Standard_Boolean Bind (AIS_MouseGestureMap& the, const unsigned int theKey, const unsigned int theItem)
  {return the.Bind(theKey, (AIS_MouseGesture)theItem);}
  static AIS_MouseGestureMap& Assign (AIS_MouseGestureMap& the, AIS_MouseGestureMap& theOther) {return the.Assign(theOther);}
  static void Clear (AIS_MouseGestureMap& the, const Standard_Boolean doReleaseMemory=Standard_False) {the.Clear(doReleaseMemory);}
private:
  AIS_MouseGestureMap obj;
};

class Make_AIS_MouseSelectionSchemeMap {
public:
  Make_AIS_MouseSelectionSchemeMap() {obj = new AIS_MouseSelectionSchemeMap;}
  ~Make_AIS_MouseSelectionSchemeMap() {delete obj;}
  
  void* get(void) {return obj;}
  Standard_Boolean Bind (const unsigned int theKey, const unsigned int theItem) {return obj->Bind(theKey, (AIS_SelectionScheme)theItem);}
  void* Assign (void* theOther) {return &obj->Assign(*(AIS_MouseSelectionSchemeMap*)theOther);}
  
  static Standard_Boolean Bind (void* the, const unsigned int theKey, const unsigned int theItem)
  {return ((AIS_MouseSelectionSchemeMap*)the)->Bind(theKey, (AIS_SelectionScheme)theItem);}
  static void* Assign (void* the, void* theOther) {return &((AIS_MouseSelectionSchemeMap*)the)->Assign(*(AIS_MouseSelectionSchemeMap*)theOther);}
  static void Clear (void* the, const Standard_Boolean doReleaseMemory=Standard_False) {((AIS_MouseGestureMap*)the)->Clear(doReleaseMemory);} 
private:
  AIS_MouseSelectionSchemeMap *obj;
};
