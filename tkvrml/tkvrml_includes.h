#include <Vrml.hxx>
#include <Vrml_AsciiText.hxx>
#include <Vrml_AsciiTextJustification.hxx>
#include <Vrml_Cone.hxx>
#include <Vrml_ConeParts.hxx>
#include <Vrml_ConfigurationNode.hxx>
#include <Vrml_Coordinate3.hxx>
#include <Vrml_Cube.hxx>
#include <Vrml_Cylinder.hxx>
#include <Vrml_CylinderParts.hxx>
#include <Vrml_DirectionalLight.hxx>
#include <Vrml_FaceType.hxx>
#include <Vrml_FontStyle.hxx>
#include <Vrml_FontStyleFamily.hxx>
#include <Vrml_FontStyleStyle.hxx>
#include <Vrml_Group.hxx>
#include <Vrml_IndexedFaceSet.hxx>
#include <Vrml_IndexedLineSet.hxx>
#include <Vrml_Info.hxx>
#include <Vrml_Instancing.hxx>
#include <Vrml_LOD.hxx>
#include <Vrml_Material.hxx>
#include <Vrml_MaterialBinding.hxx>
#include <Vrml_MaterialBindingAndNormalBinding.hxx>
#include <Vrml_MatrixTransform.hxx>
#include <Vrml_Normal.hxx>
#include <Vrml_NormalBinding.hxx>
#include <Vrml_OrthographicCamera.hxx>
#include <Vrml_PerspectiveCamera.hxx>
#include <Vrml_PointLight.hxx>
#include <Vrml_PointSet.hxx>
#include <Vrml_Provider.hxx>
#include <Vrml_Rotation.hxx>
#include <Vrml_SFImage.hxx>
#include <Vrml_SFImageNumber.hxx>
#include <Vrml_SFRotation.hxx>
#include <Vrml_Scale.hxx>
#include <Vrml_Separator.hxx>
#include <Vrml_SeparatorRenderCulling.hxx>
#include <Vrml_ShapeHints.hxx>
#include <Vrml_ShapeType.hxx>
#include <Vrml_Sphere.hxx>
#include <Vrml_SpotLight.hxx>
#include <Vrml_Switch.hxx>
#include <Vrml_Texture2.hxx>
#include <Vrml_Texture2Transform.hxx>
#include <Vrml_Texture2Wrap.hxx>
#include <Vrml_TextureCoordinate2.hxx>
#include <Vrml_Transform.hxx>
#include <Vrml_TransformSeparator.hxx>
#include <Vrml_Translation.hxx>
#include <Vrml_VertexOrdering.hxx>
#include <Vrml_WWWAnchor.hxx>
#include <Vrml_WWWAnchorMap.hxx>
#include <Vrml_WWWInline.hxx>
#include <VrmlAPI.hxx>
#include <VrmlAPI_CafReader.hxx>
#include <VrmlAPI_Writer.hxx>
#include <VrmlConverter_Curve.hxx>
#include <VrmlConverter_DeflectionCurve.hxx>
#include <VrmlConverter_Drawer.hxx>
#include <VrmlConverter_HLRShape.hxx>
#include <VrmlConverter_IsoAspect.hxx>
#include <VrmlConverter_LineAspect.hxx>
#include <VrmlConverter_PointAspect.hxx>
#include <VrmlConverter_Projector.hxx>
#include <VrmlConverter_ShadedShape.hxx>
#include <VrmlConverter_ShadingAspect.hxx>
#include <VrmlConverter_TypeOfCamera.hxx>
#include <VrmlConverter_TypeOfLight.hxx>
#include <VrmlConverter_WFDeflectionRestrictedFace.hxx>
#include <VrmlConverter_WFDeflectionShape.hxx>
#include <VrmlConverter_WFRestrictedFace.hxx>
#include <VrmlConverter_WFShape.hxx>
#include <VrmlData_Appearance.hxx>
#include <VrmlData_ArrayVec3d.hxx>
#include <VrmlData_Box.hxx>
#include <VrmlData_Color.hxx>
#include <VrmlData_Cone.hxx>
#include <VrmlData_Coordinate.hxx>
#include <VrmlData_Cylinder.hxx>
#include <VrmlData_DataMapOfShapeAppearance.hxx>
#include <VrmlData_ErrorStatus.hxx>
#include <VrmlData_Faceted.hxx>
#include <VrmlData_Geometry.hxx>
#include <VrmlData_Group.hxx>
#include <VrmlData_ImageTexture.hxx>
#include <VrmlData_InBuffer.hxx>
#include <VrmlData_IndexedFaceSet.hxx>
#include <VrmlData_IndexedLineSet.hxx>
#include <VrmlData_ListOfNode.hxx>
#include <VrmlData_MapOfNode.hxx>
#include <VrmlData_Material.hxx>
#include <VrmlData_Node.hxx>
#include <VrmlData_Normal.hxx>
#include <VrmlData_Scene.hxx>
#include <VrmlData_ShapeConvert.hxx>
#include <VrmlData_ShapeNode.hxx>
#include <VrmlData_Sphere.hxx>
#include <VrmlData_Texture.hxx>
#include <VrmlData_TextureCoordinate.hxx>
#include <VrmlData_TextureTransform.hxx>
#include <VrmlData_UnknownNode.hxx>
#include <VrmlData_WorldInfo.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(Vrml_IndexedFaceSet)
DEFINE_HANDLECLASS(Vrml_IndexedLineSet)
DEFINE_HANDLECLASS(Vrml_LOD)
DEFINE_HANDLECLASS(Vrml_Material)
DEFINE_HANDLECLASS(Vrml_Normal)
DEFINE_HANDLECLASS(Vrml_SFImage)
DEFINE_HANDLECLASS(Vrml_TextureCoordinate2)
DEFINE_HANDLECLASS(VrmlConverter_Drawer)
DEFINE_HANDLECLASS(VrmlConverter_IsoAspect)
DEFINE_HANDLECLASS(VrmlConverter_LineAspect)
DEFINE_HANDLECLASS(VrmlConverter_PointAspect)
DEFINE_HANDLECLASS(VrmlConverter_Projector)
DEFINE_HANDLECLASS(VrmlConverter_ShadingAspect)
DEFINE_HANDLECLASS(VrmlData_Geometry)
DEFINE_HANDLECLASS(VrmlData_Group)
DEFINE_HANDLECLASS(VrmlData_IndexedFaceSet)
DEFINE_HANDLECLASS(VrmlData_IndexedLineSet)
DEFINE_HANDLECLASS(VrmlData_Material)
DEFINE_HANDLECLASS(VrmlData_Node)
DEFINE_HANDLECLASS(VrmlData_WorldInfo)
