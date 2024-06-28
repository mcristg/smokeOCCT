#include <DBRep.hxx>
#include <DBRep_DrawableShape.hxx>
#include <DBRep_Edge.hxx>
#include <DBRep_Face.hxx>
#include <DBRep_HideData.hxx>
#include <DBRep_IsoBuilder.hxx>
#include <DBRep_ListIteratorOfListOfEdge.hxx>
#include <DBRep_ListIteratorOfListOfFace.hxx>
#include <DBRep_ListIteratorOfListOfHideData.hxx>
#include <DBRep_ListOfEdge.hxx>
#include <DBRep_ListOfFace.hxx>
#include <DBRep_ListOfHideData.hxx>
#include <DBRep_Params.hxx>
#include <Draw.hxx>
#include <Draw_Appli.hxx>
#include <Draw_Axis2D.hxx>
#include <Draw_Axis3D.hxx>
#include <Draw_Box.hxx>
#include <Draw_Chronometer.hxx>
#include <Draw_Circle2D.hxx>
#include <Draw_Circle3D.hxx>
#include <Draw_Color.hxx>
#include <Draw_ColorKind.hxx>
#include <Draw_Display.hxx>
#include <Draw_Drawable2D.hxx>
#include <Draw_Drawable3D.hxx>
#include <Draw_Failure.hxx>
#include <Draw_Grid.hxx>
#include <Draw_Interpretor.hxx>
#include <Draw_Main.hxx>
#include <Draw_MapOfAsciiString.hxx>
#include <Draw_Marker2D.hxx>
#include <Draw_Marker3D.hxx>
#include <Draw_MarkerShape.hxx>
#include <Draw_Number.hxx>
#include <Draw_PInterp.hxx>
#include <Draw_PluginMacro.hxx>
#include <Draw_Printer.hxx>
#include <Draw_ProgressIndicator.hxx>
#include <Draw_Segment2D.hxx>
#include <Draw_Segment3D.hxx>
#include <Draw_SequenceOfDrawable3D.hxx>
#include <Draw_Text2D.hxx>
#include <Draw_Text3D.hxx>
#include <Draw_View.hxx>
#include <Draw_Viewer.hxx>
#include <Draw_Window.hxx>
#include <DrawTrSurf.hxx>
#include <DrawTrSurf_BSplineCurve.hxx>
#include <DrawTrSurf_BSplineCurve2d.hxx>
#include <DrawTrSurf_BSplineSurface.hxx>
#include <DrawTrSurf_BezierCurve.hxx>
#include <DrawTrSurf_BezierCurve2d.hxx>
#include <DrawTrSurf_BezierSurface.hxx>
#include <DrawTrSurf_Curve.hxx>
#include <DrawTrSurf_Curve2d.hxx>
#include <DrawTrSurf_Drawable.hxx>
#include <DrawTrSurf_Params.hxx>
#include <DrawTrSurf_Point.hxx>
#include <DrawTrSurf_Polygon2D.hxx>
#include <DrawTrSurf_Polygon3D.hxx>
#include <DrawTrSurf_Surface.hxx>
#include <DrawTrSurf_Triangulation.hxx>
#include <DrawTrSurf_Triangulation2D.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(DBRep_DrawableShape)
DEFINE_HANDLECLASS(DBRep_Edge)
DEFINE_HANDLECLASS(DBRep_Face)
DEFINE_HANDLECLASS(Draw_Axis2D)
DEFINE_HANDLECLASS(Draw_Axis3D)
DEFINE_HANDLECLASS(Draw_Box)
DEFINE_HANDLECLASS(Draw_Chronometer)
DEFINE_HANDLECLASS(Draw_Circle2D)
DEFINE_HANDLECLASS(Draw_Circle3D)
DEFINE_HANDLECLASS(Draw_Drawable2D)
DEFINE_HANDLECLASS(Draw_Drawable3D)
DEFINE_HANDLECLASS(Draw_Grid)
DEFINE_HANDLECLASS(Draw_Marker2D)
DEFINE_HANDLECLASS(Draw_Marker3D)
DEFINE_HANDLECLASS(Draw_Number)
DEFINE_HANDLECLASS(Draw_Printer)
DEFINE_HANDLECLASS(Draw_ProgressIndicator)
DEFINE_HANDLECLASS(Draw_Segment2D)
DEFINE_HANDLECLASS(Draw_Segment3D)
DEFINE_HANDLECLASS(Draw_Text2D)
DEFINE_HANDLECLASS(Draw_Text3D)
DEFINE_HANDLECLASS(DrawTrSurf_BezierCurve)
DEFINE_HANDLECLASS(DrawTrSurf_BezierCurve2d)
DEFINE_HANDLECLASS(DrawTrSurf_BezierSurface)
DEFINE_HANDLECLASS(DrawTrSurf_BSplineCurve)
DEFINE_HANDLECLASS(DrawTrSurf_BSplineCurve2d)
DEFINE_HANDLECLASS(DrawTrSurf_BSplineSurface)
DEFINE_HANDLECLASS(DrawTrSurf_Curve)
DEFINE_HANDLECLASS(DrawTrSurf_Curve2d)
DEFINE_HANDLECLASS(DrawTrSurf_Drawable)
DEFINE_HANDLECLASS(DrawTrSurf_Point)
DEFINE_HANDLECLASS(DrawTrSurf_Polygon2D)
DEFINE_HANDLECLASS(DrawTrSurf_Polygon3D)
DEFINE_HANDLECLASS(DrawTrSurf_Surface)
DEFINE_HANDLECLASS(DrawTrSurf_Triangulation)
DEFINE_HANDLECLASS(DrawTrSurf_Triangulation2D)

















