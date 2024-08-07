#include <BRepOffset.hxx>
#include <BRepOffset_Analyse.hxx>
#include <BRepOffset_Inter2d.hxx>
#include <BRepOffset_Inter3d.hxx>
#include <BRepOffset_Interval.hxx>
#include <BRepOffset_MakeLoops.hxx>
#include <BRepOffset_MakeOffset.hxx>
#include <BRepOffset_Offset.hxx>
#include <BRepOffset_SimpleOffset.hxx>
#include <BRepOffset_Tool.hxx>
#include <BRepOffsetAPI_DraftAngle.hxx>
#include <BRepOffsetAPI_FindContigousEdges.hxx>
#include <BRepOffsetAPI_MakeDraft.hxx>
#include <BRepOffsetAPI_MakeEvolved.hxx>
#include <BRepOffsetAPI_MakeFilling.hxx>
#include <BRepOffsetAPI_MakeOffset.hxx>
#include <BRepOffsetAPI_MakeOffsetShape.hxx>
#include <BRepOffsetAPI_MakePipe.hxx>
#include <BRepOffsetAPI_MakePipeShell.hxx>
#include <BRepOffsetAPI_MakeThickSolid.hxx>
#include <BRepOffsetAPI_MiddlePath.hxx>
#include <BRepOffsetAPI_NormalProjection.hxx>
#include <BRepOffsetAPI_ThruSections.hxx>
#include <BiTgte_Blend.hxx>
#include <BiTgte_CurveOnEdge.hxx>
#include <BiTgte_CurveOnVertex.hxx>
#include <Draft.hxx>
#include <Draft_EdgeInfo.hxx>
#include <Draft_FaceInfo.hxx>
#include <Draft_Modification.hxx>
#include <Draft_VertexInfo.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(BRepOffset_SimpleOffset)
DEFINE_HANDLECLASS(BiTgte_CurveOnEdge)
DEFINE_HANDLECLASS(BiTgte_CurveOnVertex)
DEFINE_HANDLECLASS(Draft_Modification)
