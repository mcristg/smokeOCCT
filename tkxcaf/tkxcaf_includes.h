#include <XCAFApp_Application.hxx>
#include <XCAFDimTolObjects_AngularQualifier.hxx>
#include <XCAFDimTolObjects_DataMapOfToleranceDatum.hxx>
#include <XCAFDimTolObjects_DatumModifWithValue.hxx>
#include <XCAFDimTolObjects_DatumModifiersSequence.hxx>
#include <XCAFDimTolObjects_DatumObject.hxx>
#include <XCAFDimTolObjects_DatumObjectSequence.hxx>
#include <XCAFDimTolObjects_DatumSingleModif.hxx>
#include <XCAFDimTolObjects_DatumTargetType.hxx>
#include <XCAFDimTolObjects_DimensionFormVariance.hxx>
#include <XCAFDimTolObjects_DimensionGrade.hxx>
#include <XCAFDimTolObjects_DimensionModif.hxx>
#include <XCAFDimTolObjects_DimensionModifiersSequence.hxx>
#include <XCAFDimTolObjects_DimensionObject.hxx>
#include <XCAFDimTolObjects_DimensionObjectSequence.hxx>
#include <XCAFDimTolObjects_DimensionQualifier.hxx>
#include <XCAFDimTolObjects_DimensionType.hxx>
#include <XCAFDimTolObjects_GeomToleranceMatReqModif.hxx>
#include <XCAFDimTolObjects_GeomToleranceModif.hxx>
#include <XCAFDimTolObjects_GeomToleranceModifiersSequence.hxx>
#include <XCAFDimTolObjects_GeomToleranceObject.hxx>
#include <XCAFDimTolObjects_GeomToleranceObjectSequence.hxx>
#include <XCAFDimTolObjects_GeomToleranceType.hxx>
#include <XCAFDimTolObjects_GeomToleranceTypeValue.hxx>
#include <XCAFDimTolObjects_GeomToleranceZoneModif.hxx>
#include <XCAFDimTolObjects_ToleranceZoneAffectedPlane.hxx>
#include <XCAFDimTolObjects_Tool.hxx>
#include <XCAFDoc.hxx>
#include <XCAFDoc_Area.hxx>
#include <XCAFDoc_AssemblyGraph.hxx>
#include <XCAFDoc_AssemblyItemId.hxx>
#include <XCAFDoc_AssemblyItemRef.hxx>
#include <XCAFDoc_AssemblyIterator.hxx>
#include <XCAFDoc_AssemblyTool.hxx>
#include <XCAFDoc_Centroid.hxx>
#include <XCAFDoc_ClippingPlaneTool.hxx>
#include <XCAFDoc_Color.hxx>
#include <XCAFDoc_ColorTool.hxx>
#include <XCAFDoc_ColorType.hxx>
#include <XCAFDoc_DataMapIteratorOfDataMapOfShapeLabel.hxx>
#include <XCAFDoc_DataMapOfShapeLabel.hxx>
#include <XCAFDoc_Datum.hxx>
#include <XCAFDoc_DimTol.hxx>
#include <XCAFDoc_DimTolTool.hxx>
#include <XCAFDoc_Dimension.hxx>
#include <XCAFDoc_DocumentTool.hxx>
#include <XCAFDoc_Editor.hxx>
#include <XCAFDoc_GeomTolerance.hxx>
#include <XCAFDoc_GraphNode.hxx>
#include <XCAFDoc_GraphNodeSequence.hxx>
#include <XCAFDoc_LayerTool.hxx>
#include <XCAFDoc_LengthUnit.hxx>
#include <XCAFDoc_Location.hxx>
#include <XCAFDoc_Material.hxx>
#include <XCAFDoc_MaterialTool.hxx>
#include <XCAFDoc_Note.hxx>
#include <XCAFDoc_NoteBalloon.hxx>
#include <XCAFDoc_NoteBinData.hxx>
#include <XCAFDoc_NoteComment.hxx>
#include <XCAFDoc_NotesTool.hxx>
#include <XCAFDoc_PartId.hxx>
#include <XCAFDoc_ShapeMapTool.hxx>
#include <XCAFDoc_ShapeTool.hxx>
#include <XCAFDoc_View.hxx>
#include <XCAFDoc_ViewTool.hxx>
#include <XCAFDoc_VisMaterial.hxx>
#include <XCAFDoc_VisMaterialCommon.hxx>
#include <XCAFDoc_VisMaterialPBR.hxx>
#include <XCAFDoc_VisMaterialTool.hxx>
#include <XCAFDoc_Volume.hxx>
#include <XCAFNoteObjects_NoteObject.hxx>
#include <XCAFPrs.hxx>
#include <XCAFPrs_AISObject.hxx>
#include <XCAFPrs_DataMapIteratorOfDataMapOfStyleShape.hxx>
#include <XCAFPrs_DataMapIteratorOfDataMapOfStyleTransient.hxx>
#include <XCAFPrs_DataMapIteratorOfIndexedDataMapOfShapeStyle.hxx>
#include <XCAFPrs_DataMapOfStyleShape.hxx>
#include <XCAFPrs_DataMapOfStyleTransient.hxx>
#include <XCAFPrs_DocumentExplorer.hxx>
#include <XCAFPrs_DocumentIdIterator.hxx>
#include <XCAFPrs_DocumentNode.hxx>
#include <XCAFPrs_Driver.hxx>
#include <XCAFPrs_IndexedDataMapOfShapeStyle.hxx>
#include <XCAFPrs_Style.hxx>
#include <XCAFPrs_Texture.hxx>
#include <XCAFView_Object.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(XCAFApp_Application)
DEFINE_HANDLECLASS(XCAFDimTolObjects_DatumObject)
DEFINE_HANDLECLASS(XCAFDimTolObjects_DimensionObject)
DEFINE_HANDLECLASS(XCAFDimTolObjects_GeomToleranceObject)
DEFINE_HANDLECLASS(XCAFDoc_Area)
DEFINE_HANDLECLASS(XCAFDoc_AssemblyGraph)
DEFINE_HANDLECLASS(XCAFDoc_AssemblyItemRef)
DEFINE_HANDLECLASS(XCAFDoc_Centroid)
DEFINE_HANDLECLASS(XCAFDoc_ClippingPlaneTool)
DEFINE_HANDLECLASS(XCAFDoc_Color)
DEFINE_HANDLECLASS(XCAFDoc_ColorTool)
DEFINE_HANDLECLASS(XCAFDoc_Datum)
DEFINE_HANDLECLASS(XCAFDoc_Dimension)
DEFINE_HANDLECLASS(XCAFDoc_DimTol)
DEFINE_HANDLECLASS(XCAFDoc_DimTolTool)
DEFINE_HANDLECLASS(XCAFDoc_DocumentTool)
DEFINE_HANDLECLASS(XCAFDoc_GeomTolerance)
DEFINE_HANDLECLASS(XCAFDoc_GraphNode)
DEFINE_HANDLECLASS(XCAFDoc_LayerTool)
DEFINE_HANDLECLASS(XCAFDoc_LengthUnit)
DEFINE_HANDLECLASS(XCAFDoc_Location)
DEFINE_HANDLECLASS(XCAFDoc_Material)
DEFINE_HANDLECLASS(XCAFDoc_MaterialTool)
DEFINE_HANDLECLASS(XCAFDoc_Note)
DEFINE_HANDLECLASS(XCAFDoc_NoteBalloon)
DEFINE_HANDLECLASS(XCAFDoc_NoteBinData)
DEFINE_HANDLECLASS(XCAFDoc_NoteComment)
DEFINE_HANDLECLASS(XCAFDoc_NotesTool)
DEFINE_HANDLECLASS(XCAFDoc_ShapeMapTool)
DEFINE_HANDLECLASS(XCAFDoc_ShapeTool)
DEFINE_HANDLECLASS(XCAFDoc_View)
DEFINE_HANDLECLASS(XCAFDoc_ViewTool)
DEFINE_HANDLECLASS(XCAFDoc_VisMaterial)
DEFINE_HANDLECLASS(XCAFDoc_VisMaterialTool)
DEFINE_HANDLECLASS(XCAFDoc_Volume)
DEFINE_HANDLECLASS(XCAFNoteObjects_NoteObject)
DEFINE_HANDLECLASS(XCAFPrs_AISObject)
DEFINE_HANDLECLASS(XCAFPrs_Driver)
DEFINE_HANDLECLASS(XCAFView_Object)

