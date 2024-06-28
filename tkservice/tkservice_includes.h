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

