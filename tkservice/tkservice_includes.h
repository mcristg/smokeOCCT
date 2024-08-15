#include <Aspect_Background.hxx>
#include <Aspect_CircularGrid.hxx>
#include <Aspect_DisplayConnection.hxx>
#include <Aspect_FrustumLRBT.hxx>
#include <Aspect_GenId.hxx>
#include <Aspect_GradientBackground.hxx>
#include <Aspect_Grid.hxx>
#include <Aspect_NeutralWindow.hxx>
#include <Aspect_OpenVRSession.hxx>
#include <Aspect_RectangularGrid.hxx>
#include <Aspect_ScrollDelta.hxx>
#include <Aspect_SkydomeBackground.hxx>
#include <Aspect_Touch.hxx>
#include <Aspect_VKeySet.hxx>
#include <Aspect_Window.hxx>
#include <Aspect_WindowInputListener.hxx>
#include <Aspect_XRAction.hxx>
#include <Aspect_XRActionSet.hxx>
#include <Aspect_XRAnalogActionData.hxx>
#include <Aspect_XRDigitalActionData.hxx>
#include <Aspect_XRHapticActionData.hxx>
#include <Aspect_XRPoseActionData.hxx>
#include <Aspect_XRSession.hxx>
#include <Cocoa_LocalPool.hxx>
#include <Cocoa_Window.hxx>
#include <Font_FontMgr.hxx>
#include <Font_FTFont.hxx>
#include <Font_FTLibrary.hxx>
#include <Font_NListOfSystemFont.hxx>
#include <Font_Rect.hxx>
#include <Font_SystemFont.hxx>
#include <Font_TextFormatter.hxx>
#include <Graphic3d_ArrayOfPoints.hxx>
#include <Graphic3d_ArrayOfPolygons.hxx>
#include <Graphic3d_ArrayOfPolylines.hxx>
#include <Graphic3d_ArrayOfPrimitives.hxx>
#include <Graphic3d_ArrayOfQuadrangles.hxx>
#include <Graphic3d_ArrayOfQuadrangleStrips.hxx>
#include <Graphic3d_ArrayOfSegments.hxx>
#include <Graphic3d_ArrayOfTriangleFans.hxx>
#include <Graphic3d_ArrayOfTriangles.hxx>
#include <Graphic3d_ArrayOfTriangleStrips.hxx>
#include <Graphic3d_AspectFillArea3d.hxx>
#include <Graphic3d_AspectLine3d.hxx>
#include <Graphic3d_AspectMarker3d.hxx>
#include <Graphic3d_Aspects.hxx>
#include <Graphic3d_AspectText3d.hxx>
#include <Graphic3d_AttribBuffer.hxx>
#include <Graphic3d_BoundBuffer.hxx>
#include <Graphic3d_BSDF.hxx>
#include <Graphic3d_BufferRange.hxx>
#include <Graphic3d_BvhCStructureSet.hxx>
#include <Graphic3d_BvhCStructureSetTrsfPers.hxx>
#include <Graphic3d_Camera.hxx>
#include <Graphic3d_CameraTile.hxx>
#include <Graphic3d_CLight.hxx>
#include <Graphic3d_ClipPlane.hxx>
#include <Graphic3d_CStructure.hxx>
#include <Graphic3d_CubeMap.hxx>
#include <Graphic3d_CubeMapOrder.hxx>
#include <Graphic3d_CubeMapPacked.hxx>
#include <Graphic3d_CubeMapSeparate.hxx>
#include <Graphic3d_CullingTool.hxx>
#include <Graphic3d_CView.hxx>
#include <Graphic3d_DataStructureManager.hxx>
#include <Graphic3d_FrameStats.hxx>
#include <Graphic3d_FrameStatsData.hxx>
#include <Graphic3d_GraduatedTrihedron.hxx>
#include <Graphic3d_GraphicDriver.hxx>
#include <Graphic3d_GraphicDriverFactory.hxx>
#include <Graphic3d_Group.hxx>
#include <Graphic3d_HatchStyle.hxx>
#include <Graphic3d_IndexBuffer.hxx>
#include <Graphic3d_Layer.hxx>
#include <Graphic3d_LightSet.hxx>
#include <Graphic3d_MarkerImage.hxx>
#include <Graphic3d_MaterialAspect.hxx>
#include <Graphic3d_MediaTexture.hxx>
#include <Graphic3d_MediaTextureSet.hxx>
#include <Graphic3d_MutableIndexBuffer.hxx>
#include <Graphic3d_PBRMaterial.hxx>
#include <Graphic3d_PolygonOffset.hxx>
#include <Graphic3d_PresentationAttributes.hxx>
#include <Graphic3d_RenderingParams.hxx>
#include <Graphic3d_SequenceOfHClipPlane.hxx>
#include <Graphic3d_ShaderAttribute.hxx>
#include <Graphic3d_ShaderManager.hxx>
#include <Graphic3d_ShaderObject.hxx>
#include <Graphic3d_ShaderProgram.hxx>
#include <Graphic3d_ShaderVariable.hxx>
#include <Graphic3d_Structure.hxx>
#include <Graphic3d_StructureManager.hxx>
#include <Graphic3d_Text.hxx>
#include <Graphic3d_Texture1D.hxx>
#include <Graphic3d_Texture1Dmanual.hxx>
#include <Graphic3d_Texture1Dsegment.hxx>
#include <Graphic3d_Texture2D.hxx>
#include <Graphic3d_Texture2Dplane.hxx>
#include <Graphic3d_Texture3D.hxx>
#include <Graphic3d_TextureEnv.hxx>
#include <Graphic3d_TextureMap.hxx>
#include <Graphic3d_TextureParams.hxx>
#include <Graphic3d_TextureRoot.hxx>
#include <Graphic3d_TextureSet.hxx>
#include <Graphic3d_TransformPers.hxx>
#include <Graphic3d_TransformPersScaledAbove.hxx>
#include <Graphic3d_TransformUtils.hxx>
#include <Graphic3d_Vertex.hxx>
#include <Graphic3d_ViewAffinity.hxx>
#include <Graphic3d_WorldViewProjState.hxx>
#include <Graphic3d_ZLayerSettings.hxx>
#include <Image_AlienPixMap.hxx>
#include <Image_Color.hxx>
#include <Image_CompressedPixMap.hxx>
#include <Image_DDSParser.hxx>
#include <Image_Diff.hxx>
#include <Image_PixMap.hxx>
#include <Image_PixMapData.hxx>
#include <Image_PixMapTypedData.hxx>
#include <Image_SupportedFormats.hxx>
#include <Image_Texture.hxx>
#include <Image_VideoRecorder.hxx>
#include <Media_BufferPool.hxx>
#include <Media_CodecContext.hxx>
#include <Media_FormatContext.hxx>
#include <Media_Frame.hxx>
#include <Media_IFrameQueue.hxx>
#include <Media_Packet.hxx>
#include <Media_PlayerContext.hxx>
#include <Media_Scaler.hxx>
#include <Media_Timer.hxx>
#include <WNT_HIDSpaceMouse.hxx>
#include <Wasm_Window.hxx>
#include <Xw_Window.hxx>

#include <Graphic3d_MaterialDefinitionError.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(Aspect_CircularGrid)
DEFINE_HANDLECLASS(Aspect_DisplayConnection)
DEFINE_HANDLECLASS(Aspect_Grid)
DEFINE_HANDLECLASS(Aspect_NeutralWindow)
DEFINE_HANDLECLASS(Aspect_RectangularGrid)
DEFINE_HANDLECLASS(Aspect_Window)
DEFINE_HANDLECLASS(Font_FontMgr)
DEFINE_HANDLECLASS(Font_FTFont)
DEFINE_HANDLECLASS(Font_FTLibrary)
DEFINE_HANDLECLASS(Font_SystemFont)
DEFINE_HANDLECLASS(Font_TextFormatter)
DEFINE_HANDLECLASS(Graphic3d_ArrayOfPrimitives)
DEFINE_HANDLECLASS(Graphic3d_AspectLine3d)
DEFINE_HANDLECLASS(Graphic3d_AspectMarker3d)
DEFINE_HANDLECLASS(Graphic3d_Aspects)
DEFINE_HANDLECLASS(Graphic3d_AspectText3d)
DEFINE_HANDLECLASS(Graphic3d_Buffer)
DEFINE_HANDLECLASS(Graphic3d_Camera)
DEFINE_HANDLECLASS(Graphic3d_CLight)
DEFINE_HANDLECLASS(Graphic3d_ClipPlane)
DEFINE_HANDLECLASS(Graphic3d_CStructure)
DEFINE_HANDLECLASS(Graphic3d_CubeMap)
DEFINE_HANDLECLASS(Graphic3d_CubeMapPacked)
DEFINE_HANDLECLASS(Graphic3d_CubeMapSeparate)
DEFINE_HANDLECLASS(Graphic3d_CView)
DEFINE_HANDLECLASS(Graphic3d_DataStructureManager)
DEFINE_HANDLECLASS(Graphic3d_GraphicDriver)
DEFINE_HANDLECLASS(Graphic3d_Group)
DEFINE_HANDLECLASS(Graphic3d_HatchStyle)
DEFINE_HANDLECLASS(Graphic3d_LightSet)
DEFINE_HANDLECLASS(Graphic3d_MarkerImage)
DEFINE_HANDLECLASS(Graphic3d_MaterialDefinitionError)
DEFINE_HANDLECLASS(Graphic3d_PresentationAttributes)
DEFINE_HANDLECLASS(Graphic3d_SequenceOfHClipPlane)
DEFINE_HANDLECLASS(Graphic3d_ShaderAttribute)
DEFINE_HANDLECLASS(Graphic3d_ShaderObject)
DEFINE_HANDLECLASS(Graphic3d_ShaderProgram)
DEFINE_HANDLECLASS(Graphic3d_ShaderVariable)
DEFINE_HANDLECLASS(Graphic3d_Structure)
DEFINE_HANDLECLASS(Graphic3d_StructureManager)
DEFINE_HANDLECLASS(Graphic3d_Text)
DEFINE_HANDLECLASS(Graphic3d_Texture1Dmanual)
DEFINE_HANDLECLASS(Graphic3d_Texture1Dsegment)
DEFINE_HANDLECLASS(Graphic3d_Texture2D)
DEFINE_HANDLECLASS(Graphic3d_Texture2Dplane)
DEFINE_HANDLECLASS(Graphic3d_TextureEnv)
DEFINE_HANDLECLASS(Graphic3d_TextureMap)
DEFINE_HANDLECLASS(Graphic3d_TextureParams)
DEFINE_HANDLECLASS(Graphic3d_TextureRoot)
DEFINE_HANDLECLASS(Graphic3d_TransformPers)
DEFINE_HANDLECLASS(Graphic3d_TransformPersScaledAbove)
DEFINE_HANDLECLASS(Graphic3d_ViewAffinity)
DEFINE_HANDLECLASS(Image_AlienPixMap)
DEFINE_HANDLECLASS(Image_Diff)
DEFINE_HANDLECLASS(Image_PixMap)
DEFINE_HANDLECLASS(Image_VideoRecorder)
DEFINE_HANDLECLASS(Media_Timer)
#if defined(_WIN32) && !defined(OCCT_UWP)
DEFINE_HANDLECLASS(WNT_WClass)
DEFINE_HANDLECLASS(WNT_Window)
#endif
DEFINE_HANDLECLASS(Xw_Window)

// Graphic3d_RenderingParams exposes its data fields (they are public) without using a set method, in CommonOCCT they
// would be read-only and could not be modified. A wrapper class is then used to manage these data fields.

class Set_Graphic3d_RenderingParams_Data_Fields {
public: //! @name general parameters
  static Graphic3d_RenderingMode Method (Graphic3d_RenderingParams &RenderingParams, Graphic3d_RenderingMode Method)
  {
    RenderingParams.Method = Method;
    return RenderingParams.Method;
  }

  static Graphic3d_TypeOfShadingModel ShadingModel(Graphic3d_RenderingParams &RenderingParams, Graphic3d_TypeOfShadingModel ShadingModel)
  {
    RenderingParams.ShadingModel = ShadingModel;
    return RenderingParams.ShadingModel;
  }
                  
  static Graphic3d_RenderTransparentMethod TransparencyMethod(Graphic3d_RenderingParams &RenderingParams, Graphic3d_RenderTransparentMethod TransparencyMethod)
  {
    RenderingParams.TransparencyMethod = TransparencyMethod;
    return RenderingParams.TransparencyMethod;
  }

  static unsigned int Resolution(Graphic3d_RenderingParams &RenderingParams, unsigned int Resolution)
  {
    RenderingParams.Resolution = Resolution;
    return RenderingParams.Resolution;
  }
  
  static Font_Hinting FontHinting(Graphic3d_RenderingParams &RenderingParams, Font_Hinting FontHinting)
  {
    RenderingParams.FontHinting = FontHinting;
    return RenderingParams.FontHinting;
  }

  static Standard_ShortReal LineFeather(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal LineFeather)
  {
    RenderingParams.LineFeather = LineFeather;
    return RenderingParams.LineFeather;
  }

public: //! @name rendering resolution parameters

  static Standard_Integer PbrEnvPow2Size(Graphic3d_RenderingParams &RenderingParams, Standard_Integer PbrEnvPow2Size)
  {
    RenderingParams.PbrEnvPow2Size = PbrEnvPow2Size;
    return RenderingParams.PbrEnvPow2Size;
  }

  static Standard_Integer PbrEnvSpecMapNbLevels(Graphic3d_RenderingParams &RenderingParams, Standard_Integer PbrEnvSpecMapNbLevels)
  {
    RenderingParams.PbrEnvSpecMapNbLevels = PbrEnvSpecMapNbLevels;
    return RenderingParams.PbrEnvSpecMapNbLevels;
  }

  static Standard_Integer PbrEnvBakingDiffNbSamples(Graphic3d_RenderingParams &RenderingParams, Standard_Integer PbrEnvBakingDiffNbSamples)
  {
    RenderingParams.PbrEnvBakingDiffNbSamples = PbrEnvBakingDiffNbSamples;
    return RenderingParams.PbrEnvBakingDiffNbSamples;
  }

  static Standard_Integer PbrEnvBakingSpecNbSamples(Graphic3d_RenderingParams &RenderingParams, Standard_Integer PbrEnvBakingSpecNbSamples)
  {
    RenderingParams.PbrEnvBakingSpecNbSamples = PbrEnvBakingSpecNbSamples;
    return RenderingParams.PbrEnvBakingSpecNbSamples;
  }
                                      
  static Standard_ShortReal PbrEnvBakingProbability(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal PbrEnvBakingProbability)
  {
    RenderingParams.PbrEnvBakingProbability = PbrEnvBakingProbability;
    return RenderingParams.PbrEnvBakingProbability;
  }

  static Standard_ShortReal OitDepthFactor(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal OitDepthFactor)
  {
    RenderingParams.OitDepthFactor = OitDepthFactor;
    return RenderingParams.OitDepthFactor;
  }                                              

  static Standard_Integer NbOitDepthPeelingLayers(Graphic3d_RenderingParams &RenderingParams, Standard_Integer NbOitDepthPeelingLayers)
  {
    RenderingParams.NbOitDepthPeelingLayers = NbOitDepthPeelingLayers;
    return RenderingParams.NbOitDepthPeelingLayers;
  }

  static Standard_Integer NbMsaaSamples(Graphic3d_RenderingParams &RenderingParams, Standard_Integer NbMsaaSamples)
  {
    RenderingParams.NbMsaaSamples = NbMsaaSamples;
    return RenderingParams.NbMsaaSamples;
  }

  static Standard_ShortReal RenderResolutionScale(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal RenderResolutionScale)
  {
    RenderingParams.RenderResolutionScale = RenderResolutionScale;
    return RenderingParams.RenderResolutionScale;
  }

  static Standard_Integer ShadowMapResolution(Graphic3d_RenderingParams &RenderingParams, Standard_Integer ShadowMapResolution)
  {
    RenderingParams.ShadowMapResolution = ShadowMapResolution;
    return RenderingParams.ShadowMapResolution;
  }

  static Standard_ShortReal ShadowMapBias(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal ShadowMapBias)
  {
    RenderingParams.ShadowMapBias = ShadowMapBias;
    return RenderingParams.ShadowMapBias;
  }

  static Standard_Boolean ToEnableDepthPrepass(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean ToEnableDepthPrepass)
  {
    RenderingParams.ToEnableDepthPrepass = ToEnableDepthPrepass;
    return RenderingParams.ToEnableDepthPrepass;
  }

  static Standard_Boolean ToEnableAlphaToCoverage(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean ToEnableAlphaToCoverage)
  {
    RenderingParams.ToEnableAlphaToCoverage = ToEnableAlphaToCoverage;
    return RenderingParams.ToEnableAlphaToCoverage;
  }

public: //! @name Ray-Tracing/Path-Tracing parameters

  static Standard_Boolean IsGlobalIlluminationEnabled(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean IsGlobalIlluminationEnabled)
  {
    RenderingParams.IsGlobalIlluminationEnabled = IsGlobalIlluminationEnabled;
    return RenderingParams.IsGlobalIlluminationEnabled;
  }

  static Standard_Integer SamplesPerPixel(Graphic3d_RenderingParams &RenderingParams, Standard_Integer SamplesPerPixel)
  {
    RenderingParams.SamplesPerPixel = SamplesPerPixel;
    return RenderingParams.SamplesPerPixel;
  }

  static Standard_Integer RaytracingDepth(Graphic3d_RenderingParams &RenderingParams, Standard_Integer RaytracingDepth)
  {
    RenderingParams.RaytracingDepth = RaytracingDepth;
    return RenderingParams.RaytracingDepth;
  }

  static Standard_Boolean IsShadowEnabled(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean IsShadowEnabled)
  {
    RenderingParams.IsShadowEnabled = IsShadowEnabled;
    return RenderingParams.IsShadowEnabled;
  }

  static Standard_Boolean IsReflectionEnabled(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean IsReflectionEnabled)
  {
    RenderingParams.IsReflectionEnabled = IsReflectionEnabled;
    return RenderingParams.IsReflectionEnabled;
  }

  static Standard_Boolean IsAntialiasingEnabled(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean IsAntialiasingEnabled)
  {
    RenderingParams.IsAntialiasingEnabled = IsAntialiasingEnabled;
    return RenderingParams.IsAntialiasingEnabled;
  }

  static Standard_Boolean IsTransparentShadowEnabled(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean IsTransparentShadowEnabled)
  {
    RenderingParams.IsTransparentShadowEnabled = IsTransparentShadowEnabled;
    return RenderingParams.IsTransparentShadowEnabled;
  }

  static Standard_Boolean UseEnvironmentMapBackground(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean UseEnvironmentMapBackground)
  {
    RenderingParams.UseEnvironmentMapBackground = UseEnvironmentMapBackground;
    return RenderingParams.UseEnvironmentMapBackground;
  }

  static Standard_Boolean ToIgnoreNormalMapInRayTracing(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean ToIgnoreNormalMapInRayTracing)
  {
    RenderingParams.ToIgnoreNormalMapInRayTracing = ToIgnoreNormalMapInRayTracing;
    return RenderingParams.ToIgnoreNormalMapInRayTracing;
  }

  static Standard_Boolean CoherentPathTracingMode(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean CoherentPathTracingMode)
  {
    RenderingParams.CoherentPathTracingMode = CoherentPathTracingMode;
    return RenderingParams.CoherentPathTracingMode;
  }

  static Standard_Boolean AdaptiveScreenSampling(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean AdaptiveScreenSampling)
  {
    RenderingParams.AdaptiveScreenSampling = AdaptiveScreenSampling;
    return RenderingParams.AdaptiveScreenSampling;
  }

  static Standard_Boolean AdaptiveScreenSamplingAtomic(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean AdaptiveScreenSamplingAtomic)
  {
    RenderingParams.AdaptiveScreenSamplingAtomic = AdaptiveScreenSamplingAtomic;
    return RenderingParams.AdaptiveScreenSamplingAtomic;
  }

  static Standard_Boolean ShowSamplingTiles(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean ShowSamplingTiles)
  {
    RenderingParams.ShowSamplingTiles = ShowSamplingTiles;
    return RenderingParams.ShowSamplingTiles;
  }

  static Standard_Boolean TwoSidedBsdfModels(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean TwoSidedBsdfModels)
  {
    RenderingParams.TwoSidedBsdfModels = TwoSidedBsdfModels;
    return RenderingParams.TwoSidedBsdfModels;
  }

  static Standard_ShortReal RadianceClampingValue(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal RadianceClampingValue)
  {
    RenderingParams.RadianceClampingValue = RadianceClampingValue;
    return RenderingParams.RadianceClampingValue;
  }

  static Standard_Boolean RebuildRayTracingShaders(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean RebuildRayTracingShaders)
  {
    RenderingParams.RebuildRayTracingShaders = RebuildRayTracingShaders;
    return RenderingParams.RebuildRayTracingShaders;
  }

  static Standard_Integer RayTracingTileSize(Graphic3d_RenderingParams &RenderingParams, Standard_Integer RayTracingTileSize)
  {
    RenderingParams.RayTracingTileSize = RayTracingTileSize;
    return RenderingParams.RayTracingTileSize;
  }

  static Standard_Integer NbRayTracingTiles(Graphic3d_RenderingParams &RenderingParams, Standard_Integer NbRayTracingTiles)
  {
    RenderingParams.NbRayTracingTiles = NbRayTracingTiles;
    return RenderingParams.NbRayTracingTiles;
  }

  static Standard_ShortReal CameraApertureRadius(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal CameraApertureRadius)
  {
    RenderingParams.CameraApertureRadius = CameraApertureRadius;
    return RenderingParams.CameraApertureRadius;
  }

  static Standard_ShortReal CameraFocalPlaneDist(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal CameraFocalPlaneDist)
  {
    RenderingParams.CameraFocalPlaneDist = CameraFocalPlaneDist;
    return RenderingParams.CameraFocalPlaneDist;
  }

  static Graphic3d_RenderingParams::FrustumCulling FrustumCullingState(Graphic3d_RenderingParams &RenderingParams, Graphic3d_RenderingParams::FrustumCulling FrustumCullingState)
  {
    RenderingParams.FrustumCullingState = FrustumCullingState;
    return RenderingParams.FrustumCullingState;
  }

  static Graphic3d_ToneMappingMethod ToneMappingMethod(Graphic3d_RenderingParams &RenderingParams, Graphic3d_ToneMappingMethod ToneMappingMethod)
  {
    RenderingParams.ToneMappingMethod = ToneMappingMethod;
    return RenderingParams.ToneMappingMethod;
  }

  static Standard_ShortReal Exposure(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal Exposure)
  {
    RenderingParams.Exposure = Exposure;
    return RenderingParams.Exposure;
  }

  static Standard_ShortReal WhitePoint(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal WhitePoint)
  {
    RenderingParams.WhitePoint = WhitePoint;
    return RenderingParams.WhitePoint;
  }

public: //! @name VR / stereoscopic parameters

  static Graphic3d_StereoMode StereoMode(Graphic3d_RenderingParams &RenderingParams, Graphic3d_StereoMode StereoMode)
  {
    RenderingParams.StereoMode = StereoMode;
    return RenderingParams.StereoMode;
  }

  static Standard_ShortReal HmdFov2d(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal HmdFov2d)
  {
    RenderingParams.HmdFov2d = HmdFov2d;
    return RenderingParams.HmdFov2d;
  }

  static Graphic3d_RenderingParams::Anaglyph AnaglyphFilter(Graphic3d_RenderingParams &RenderingParams, Graphic3d_RenderingParams::Anaglyph AnaglyphFilter)
  {
    RenderingParams.AnaglyphFilter = AnaglyphFilter;
    return RenderingParams.AnaglyphFilter;
  }

  static Graphic3d_Mat4 AnaglyphLeft(Graphic3d_RenderingParams &RenderingParams, Graphic3d_Mat4 AnaglyphLeft)
  {
    RenderingParams.AnaglyphLeft = AnaglyphLeft;
    return RenderingParams.AnaglyphLeft;
  }

  static Graphic3d_Mat4 AnaglyphRight(Graphic3d_RenderingParams &RenderingParams, Graphic3d_Mat4 AnaglyphRight)
  {
    RenderingParams.AnaglyphRight = AnaglyphRight;
    return RenderingParams.AnaglyphRight;
  }

  static Standard_Boolean ToReverseStereo(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean ToReverseStereo)
  {
    RenderingParams.ToReverseStereo = ToReverseStereo;
    return RenderingParams.ToReverseStereo;
  }

  static Standard_Boolean ToSmoothInterlacing(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean ToSmoothInterlacing)
  {
    RenderingParams.ToSmoothInterlacing = ToSmoothInterlacing;
    return RenderingParams.ToSmoothInterlacing;
  }

  static Standard_Boolean ToMirrorComposer(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean ToMirrorComposer)
  {
    RenderingParams.ToMirrorComposer = ToMirrorComposer;
    return RenderingParams.ToMirrorComposer;
  }

public: //! @name on-screen display parameters

  static Handle(Graphic3d_TransformPers) & StatsPosition(Graphic3d_RenderingParams &RenderingParams, Handle(Graphic3d_TransformPers) &StatsPosition)
  {
    RenderingParams.StatsPosition = StatsPosition;
    return RenderingParams.StatsPosition;
  }

  static Handle(Graphic3d_TransformPers) &ChartPosition(Graphic3d_RenderingParams &RenderingParams, Handle(Graphic3d_TransformPers) &ChartPosition)
  {
    RenderingParams.ChartPosition = ChartPosition;
    return RenderingParams.ChartPosition;
  }  

  static Graphic3d_Vec2i ChartSize(Graphic3d_RenderingParams &RenderingParams, Graphic3d_Vec2i ChartSize)
  {
    RenderingParams.ChartSize = ChartSize;
    return RenderingParams.ChartSize;
  }

  static Handle(Graphic3d_AspectText3d) &StatsTextAspect(Graphic3d_RenderingParams &RenderingParams, Handle(Graphic3d_AspectText3d) &StatsTextAspect)
  {
    RenderingParams.StatsTextAspect = StatsTextAspect;
    return RenderingParams.StatsTextAspect;
  }

  static Standard_ShortReal StatsUpdateInterval(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal StatsUpdateInterval)
  {
    RenderingParams.StatsUpdateInterval = StatsUpdateInterval;
    return RenderingParams.StatsUpdateInterval;
  }

  static Standard_Integer StatsTextHeight(Graphic3d_RenderingParams &RenderingParams, Standard_Integer StatsTextHeight)
  {
    RenderingParams.StatsTextHeight = StatsTextHeight;
    return RenderingParams.StatsTextHeight;
  }

  static Standard_ShortReal StatsMaxChartTime(Graphic3d_RenderingParams &RenderingParams, Standard_ShortReal StatsMaxChartTime)
  {
    RenderingParams.StatsMaxChartTime = StatsMaxChartTime;
    return RenderingParams.StatsMaxChartTime;
  }

  static Graphic3d_RenderingParams::PerfCounters CollectedStats(Graphic3d_RenderingParams &RenderingParams, Graphic3d_RenderingParams::PerfCounters CollectedStats)
  {
    RenderingParams.CollectedStats = CollectedStats;
    return RenderingParams.CollectedStats;
  }

  static Standard_Boolean ToShowStats(Graphic3d_RenderingParams &RenderingParams, Standard_Boolean ToShowStats)
  {
    RenderingParams.ToShowStats = ToShowStats;
    return RenderingParams.ToShowStats;
  }
private:
  //! Not implemented
  Set_Graphic3d_RenderingParams_Data_Fields (const Set_Graphic3d_RenderingParams_Data_Fields& );
  ~Set_Graphic3d_RenderingParams_Data_Fields ();  
};


#include <Make_Graphic3d_Vec2.h>
#include <Make_Graphic3d_Vec3.h>


