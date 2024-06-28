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

#include <../handle_class.h>

DEFINE_HANDLECLASS(OpenGl_Buffer)
DEFINE_HANDLECLASS(OpenGl_CappingPlaneResource)
DEFINE_HANDLECLASS(OpenGl_Caps)
DEFINE_HANDLECLASS(OpenGl_Context)
DEFINE_HANDLECLASS(OpenGl_Font)
DEFINE_HANDLECLASS(OpenGl_FrameBuffer)
DEFINE_HANDLECLASS(OpenGl_FrameStats)
DEFINE_HANDLECLASS(OpenGl_GraphicDriver)
DEFINE_HANDLECLASS(OpenGl_Group)
DEFINE_HANDLECLASS(OpenGl_IndexBuffer)
DEFINE_HANDLECLASS(OpenGl_LineAttributes)
DEFINE_HANDLECLASS(OpenGl_PointSprite)
DEFINE_HANDLECLASS(OpenGl_Resource)
DEFINE_HANDLECLASS(OpenGl_Sampler)
DEFINE_HANDLECLASS(OpenGl_ShaderObject)
DEFINE_HANDLECLASS(OpenGl_ShaderProgram)
DEFINE_HANDLECLASS(OpenGl_StructureShadow)
DEFINE_HANDLECLASS(OpenGl_Texture)
DEFINE_HANDLECLASS(OpenGl_TextureBuffer)
DEFINE_HANDLECLASS(OpenGl_VertexBuffer)
DEFINE_HANDLECLASS(OpenGl_View)
DEFINE_HANDLECLASS(OpenGl_Window)
DEFINE_HANDLECLASS(OpenGl_Workspace)

