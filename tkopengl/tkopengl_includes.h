#include <OpenGl_ArbDbg.hxx>
#include <OpenGl_ArbFBO.hxx>
#include <OpenGl_ArbIns.hxx>
#include <OpenGl_ArbSamplerObject.hxx>
#include <OpenGl_ArbTBO.hxx>
#include <OpenGl_ArbTexBindless.hxx>
#include <OpenGl_Aspects.hxx>
#include <OpenGl_AspectsProgram.hxx>
#include <OpenGl_AspectsSprite.hxx>
#include <OpenGl_AspectsTextureSet.hxx>
#include <OpenGl_BackgroundArray.hxx>
#include <OpenGl_Buffer.hxx>
#include <OpenGl_BufferCompatT.hxx>
#include <OpenGl_CappingAlgo.hxx>
#include <OpenGl_CappingPlaneResource.hxx>
#include <OpenGl_Caps.hxx>
#include <OpenGl_Clipping.hxx>
#include <OpenGl_ClippingIterator.hxx>
#include <OpenGl_Context.hxx>
#include <OpenGl_DepthPeeling.hxx>
#include <OpenGl_Element.hxx>
#include <OpenGl_ExtGS.hxx>
#include <OpenGl_Flipper.hxx>
#include <OpenGl_Font.hxx>
#include <OpenGl_FrameBuffer.hxx>
#include <OpenGl_FrameStats.hxx>
#include <OpenGl_FrameStatsPrs.hxx>
#include <OpenGl_GlCore11.hxx>
#include <OpenGl_GlCore11Fwd.hxx>
#include <OpenGl_GlCore12.hxx>
#include <OpenGl_GlCore13.hxx>
#include <OpenGl_GlCore14.hxx>
#include <OpenGl_GlCore15.hxx>
#include <OpenGl_GlCore20.hxx>
#include <OpenGl_GlCore21.hxx>
#include <OpenGl_GlCore30.hxx>
#include <OpenGl_GlCore31.hxx>
#include <OpenGl_GlCore32.hxx>
#include <OpenGl_GlCore33.hxx>
#include <OpenGl_GlCore40.hxx>
#include <OpenGl_GlCore41.hxx>
#include <OpenGl_GlCore42.hxx>
#include <OpenGl_GlCore43.hxx>
#include <OpenGl_GlCore44.hxx>
#include <OpenGl_GlCore45.hxx>
#include <OpenGl_GlCore46.hxx>
#include <OpenGl_GlFunctions.hxx>
#include <OpenGl_GraduatedTrihedron.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <OpenGl_GraphicDriverFactory.hxx>
#include <OpenGl_Group.hxx>
#include <OpenGl_HaltonSampler.hxx>
#include <OpenGl_IndexBuffer.hxx>
#include <OpenGl_LayerList.hxx>
#include <OpenGl_LineAttributes.hxx>
#include <OpenGl_Material.hxx>
#include <OpenGl_MaterialState.hxx>
#include <OpenGl_MatrixState.hxx>
#include <OpenGl_NamedResource.hxx>
#include <OpenGl_PBREnvironment.hxx>
#include <OpenGl_PointSprite.hxx>
#include <OpenGl_PrimitiveArray.hxx>
#include <OpenGl_Resource.hxx>
#include <OpenGl_Sampler.hxx>
#include <OpenGl_SceneGeometry.hxx>
#include <OpenGl_SetOfShaderPrograms.hxx>
#include <OpenGl_ShaderManager.hxx>
#include <OpenGl_ShaderObject.hxx>
#include <OpenGl_ShaderProgram.hxx>
#include <OpenGl_ShaderStates.hxx>
#include <OpenGl_ShadowMap.hxx>
#include <OpenGl_StencilTest.hxx>
#include <OpenGl_Structure.hxx>
#include <OpenGl_StructureShadow.hxx>
#include <OpenGl_Text.hxx>
#include <OpenGl_TextBuilder.hxx>
#include <OpenGl_Texture.hxx>
#include <OpenGl_TextureBuffer.hxx>
#include <OpenGl_TextureFormat.hxx>
#include <OpenGl_TextureSet.hxx>
#include <OpenGl_TextureSetPairIterator.hxx>
#include <OpenGl_TileSampler.hxx>
#include <OpenGl_UniformBuffer.hxx>
#include <OpenGl_VertexBuffer.hxx>
#include <OpenGl_VertexBufferEditor.hxx>
#include <OpenGl_View.hxx>
#include <OpenGl_Window.hxx>
#include <OpenGl_Workspace.hxx>
#include <OpenGlTest.hxx>

// OpenGl_Caps exposes its data fields (they are public) without using a set method, in CommonOCCT they
// would be read-only and could not be modified. A wrapper class is then used to manage these data fields.

class Set_OpenGl_Caps_Data_Fields {
public: //! @name flags to disable particular functionality, should be used only for testing purposes!
  static Standard_Boolean sRGBDisable(OpenGl_Caps &caps, Standard_Boolean sRGB_Disable)
  { 
    caps.sRGBDisable = sRGB_Disable;
    return caps.sRGBDisable;
  }
  
  static Standard_Boolean compressedTexturesDisable(OpenGl_Caps &caps, Standard_Boolean compressedTexturesDisable)
  {
    caps.compressedTexturesDisable = compressedTexturesDisable;
    return caps.compressedTexturesDisable;
  }

  static Standard_Boolean vboDisable(OpenGl_Caps &caps,  Standard_Boolean vboDisable)
  {
    caps.vboDisable = vboDisable;
    return caps.vboDisable;
  }
  
  static Standard_Boolean pntSpritesDisable(OpenGl_Caps &caps, Standard_Boolean pntSpritesDisable)
  {
    caps.pntSpritesDisable = pntSpritesDisable;
    return caps.pntSpritesDisable;
  }

  static Standard_Boolean keepArrayData(OpenGl_Caps &caps, Standard_Boolean keepArrayData)
  {
    caps.keepArrayData = keepArrayData;
    return caps.keepArrayData;
  }

  static Standard_Boolean ffpEnable(OpenGl_Caps &caps, Standard_Boolean ffpEnable)
  {
    caps.ffpEnable = ffpEnable;
    return caps.ffpEnable;
  }

  static Standard_Boolean usePolygonMode(OpenGl_Caps &caps, Standard_Boolean usePolygonMode)
  {
    caps.usePolygonMode = usePolygonMode;
    return caps.usePolygonMode;
  }

  static Standard_Boolean useSystemBuffer(OpenGl_Caps &caps, Standard_Boolean useSystemBuffer)
  {
    caps.useSystemBuffer = useSystemBuffer;
    return caps.useSystemBuffer;
  }

  static Standard_Integer swapInterval(OpenGl_Caps &caps, Standard_Integer swapInterval)
  {
    caps.swapInterval = swapInterval;
    return caps.swapInterval;
  }

  static Standard_Boolean useZeroToOneDepth(OpenGl_Caps &caps, Standard_Boolean useZeroToOneDepth)
  {
    caps.useZeroToOneDepth = useZeroToOneDepth;
    return caps.useZeroToOneDepth;
  }

  static Standard_Boolean buffersNoSwap(OpenGl_Caps &caps, Standard_Boolean buffersNoSwap)
  {
    caps.buffersNoSwap = buffersNoSwap;
    return caps.buffersNoSwap;
  }
  static Standard_Boolean buffersOpaqueAlpha(OpenGl_Caps &caps, Standard_Boolean buffersOpaqueAlpha)
  {
    caps.buffersOpaqueAlpha = buffersOpaqueAlpha;
    return caps.buffersOpaqueAlpha;
  }

  static Standard_Boolean buffersDeepColor(OpenGl_Caps &caps, Standard_Boolean buffersDeepColor)
  {
    caps.buffersDeepColor = buffersDeepColor;
    return caps.buffersDeepColor;
  }

  static Standard_Boolean contextStereo(OpenGl_Caps &caps, Standard_Boolean contextStereo)
  {
    caps.contextStereo = contextStereo;
    return caps.contextStereo;
  }

  static Standard_Boolean contextDebug(OpenGl_Caps &caps, Standard_Boolean contextDebug)
  {
    caps.contextDebug = contextDebug;
    return caps.contextDebug;
  }

  static Standard_Boolean contextSyncDebug(OpenGl_Caps &caps, Standard_Boolean contextSyncDebug)
  {
    caps.contextSyncDebug = contextSyncDebug;
    return caps.contextSyncDebug;
  }

  static Standard_Boolean contextNoAccel(OpenGl_Caps &caps, Standard_Boolean contextNoAccel)
  {
    caps.contextNoAccel = contextNoAccel;
    return caps.contextNoAccel;
  }

  static Standard_Boolean contextCompatible(OpenGl_Caps &caps, Standard_Boolean contextCompatible)
  {
    caps.contextCompatible = contextCompatible;
    return caps.contextCompatible;
  }

  static Standard_Boolean contextNoExtensions(OpenGl_Caps &caps, Standard_Boolean contextNoExtensions)
  {
    caps.contextNoExtensions = contextNoExtensions;
    return caps.contextNoExtensions;
  }

  static Standard_Boolean isTopDownTextureUV(OpenGl_Caps &caps, Standard_Boolean isTopDownTextureUV)
  {
    caps.isTopDownTextureUV = isTopDownTextureUV;
    return caps.isTopDownTextureUV;
  }

  static Standard_Boolean glslWarnings(OpenGl_Caps &caps, Standard_Boolean glslWarnings)
  {
    caps.glslWarnings = glslWarnings;
    return caps.glslWarnings;
  }

  static Standard_Boolean suppressExtraMsg(OpenGl_Caps &caps, Standard_Boolean suppressExtraMsg)
  {
    caps.suppressExtraMsg = suppressExtraMsg;
    return caps.suppressExtraMsg;
  }

  static OpenGl_ShaderProgramDumpLevel glslDumpLevel(OpenGl_Caps &caps, OpenGl_ShaderProgramDumpLevel glslDumpLevel)
  {
    caps.glslDumpLevel = glslDumpLevel;
    return caps.glslDumpLevel;
  }

private:
  //! Not implemented
  Set_OpenGl_Caps_Data_Fields (const Set_OpenGl_Caps_Data_Fields& );
  ~Set_OpenGl_Caps_Data_Fields ();
};
