#include <BRepFeat.hxx>
#include <BRepFeat_Builder.hxx>
#include <BRepFeat_Form.hxx>
#include <BRepFeat_Gluer.hxx>
#include <BRepFeat_MakeCylindricalHole.hxx>
#include <BRepFeat_MakeDPrism.hxx>
#include <BRepFeat_MakeLinearForm.hxx>
#include <BRepFeat_MakePipe.hxx>
#include <BRepFeat_MakePrism.hxx>
#include <BRepFeat_MakeRevol.hxx>
#include <BRepFeat_MakeRevolutionForm.hxx>
#include <BRepFeat_RibSlot.hxx>
#include <BRepFeat_SplitShape.hxx>
#include <LocOpe.hxx>
#include <LocOpe_BuildShape.hxx>
#include <LocOpe_BuildWires.hxx>
#include <LocOpe_CSIntersector.hxx>
#include <LocOpe_CurveShapeIntersector.hxx>
#include <LocOpe_DPrism.hxx>
#include <LocOpe_FindEdges.hxx>
#include <LocOpe_FindEdgesInFace.hxx>
#include <LocOpe_GeneratedShape.hxx>
#include <LocOpe_Generator.hxx>
#include <LocOpe_GluedShape.hxx>
#include <LocOpe_Gluer.hxx>
#include <LocOpe_LinearForm.hxx>
#include <LocOpe_Pipe.hxx>
#include <LocOpe_PntFace.hxx>
#include <LocOpe_Prism.hxx>
#include <LocOpe_Revol.hxx>
#include <LocOpe_RevolutionForm.hxx>
#include <LocOpe_SplitDrafts.hxx>
#include <LocOpe_Spliter.hxx>
#include <LocOpe_SplitShape.hxx>
#include <LocOpe_WiresOnShape.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(LocOpe_GeneratedShape)
DEFINE_HANDLECLASS(LocOpe_GluedShape)
DEFINE_HANDLECLASS(LocOpe_WiresOnShape)
