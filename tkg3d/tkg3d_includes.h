#include <Adaptor3d_Curve.hxx>
#include <Adaptor3d_CurveOnSurface.hxx>
#include <Adaptor3d_HSurfaceTool.hxx>
#include <Adaptor3d_HVertex.hxx>
#include <Adaptor3d_InterFunc.hxx>
#include <Adaptor3d_IsoCurve.hxx>
#include <Adaptor3d_Surface.hxx>
#include <Adaptor3d_TopolTool.hxx>
#include <AdvApprox_ApproxAFunction.hxx>
#include <AdvApprox_Cutting.hxx>
#include <AdvApprox_DichoCutting.hxx>
#include <AdvApprox_EvaluatorFunction.hxx>
#include <AdvApprox_PrefAndRec.hxx>
#include <AdvApprox_PrefCutting.hxx>
#include <AdvApprox_SimpleApprox.hxx>
#include <GProp.hxx>
#include <GProp_CelGProps.hxx>
#include <GProp_GProps.hxx>
#include <GProp_PEquation.hxx>
#include <GProp_PGProps.hxx>
#include <GProp_PrincipalProps.hxx>
#include <GProp_SelGProps.hxx>
#include <GProp_VelGProps.hxx>
#include <Geom_Axis1Placement.hxx>
#include <Geom_Axis2Placement.hxx>
#include <Geom_AxisPlacement.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Conic.hxx>
#include <Geom_ConicalSurface.hxx>
#include <Geom_Curve.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_Direction.hxx>
#include <Geom_ElementarySurface.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom_Geometry.hxx>
#include <Geom_Hyperbola.hxx>
#include <Geom_Line.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Geom_OffsetSurface.hxx>
#include <Geom_OsculatingSurface.hxx>
#include <Geom_Parabola.hxx>
#include <Geom_Plane.hxx>
#include <Geom_Point.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <Geom_Surface.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_SweptSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_Transformation.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom_Vector.hxx>
#include <Geom_VectorWithMagnitude.hxx>
#include <GeomAdaptor.hxx>
#include <GeomAdaptor_Curve.hxx>
#include <GeomAdaptor_Surface.hxx>
#include <GeomAdaptor_SurfaceOfLinearExtrusion.hxx>
#include <GeomAdaptor_SurfaceOfRevolution.hxx>
#include <GeomEvaluator_Curve.hxx>
#include <GeomEvaluator_OffsetCurve.hxx>
#include <GeomEvaluator_OffsetSurface.hxx>
#include <GeomEvaluator_Surface.hxx>
#include <GeomEvaluator_SurfaceOfExtrusion.hxx>
#include <GeomEvaluator_SurfaceOfRevolution.hxx>
#include <GeomLProp.hxx>
#include <GeomLProp_CLProps.hxx>
#include <GeomLProp_CurveTool.hxx>
#include <GeomLProp_SLProps.hxx>
#include <GeomLProp_SurfaceTool.hxx>
#include <LProp3d_CLProps.hxx>
#include <LProp3d_CurveTool.hxx>
#include <LProp3d_SLProps.hxx>
#include <LProp3d_SurfaceTool.hxx>
#include <TopAbs.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(Geom_ConicalSurface)
DEFINE_HANDLECLASS(Geom_Curve)
DEFINE_HANDLECLASS(Geom_CylindricalSurface)
DEFINE_HANDLECLASS(Geom_Direction)
DEFINE_HANDLECLASS(Geom_ElementarySurface)
DEFINE_HANDLECLASS(Geom_Ellipse)
DEFINE_HANDLECLASS(Geom_Geometry)
DEFINE_HANDLECLASS(Geom_Hyperbola)
DEFINE_HANDLECLASS(Geom_Line)
DEFINE_HANDLECLASS(Geom_OffsetCurve)
DEFINE_HANDLECLASS(Geom_OffsetSurface)
DEFINE_HANDLECLASS(Geom_OsculatingSurface)
DEFINE_HANDLECLASS(Geom_Parabola)
DEFINE_HANDLECLASS(Geom_Plane)
DEFINE_HANDLECLASS(Geom_Point)
DEFINE_HANDLECLASS(Geom_RectangularTrimmedSurface)
DEFINE_HANDLECLASS(Geom_SphericalSurface)
DEFINE_HANDLECLASS(Geom_Surface)
DEFINE_HANDLECLASS(Geom_SurfaceOfLinearExtrusion)
DEFINE_HANDLECLASS(Geom_SurfaceOfRevolution)
DEFINE_HANDLECLASS(Geom_SweptSurface)
DEFINE_HANDLECLASS(Geom_ToroidalSurface)
DEFINE_HANDLECLASS(Geom_Transformation)
DEFINE_HANDLECLASS(Geom_TrimmedCurve)
DEFINE_HANDLECLASS(Geom_Vector)
DEFINE_HANDLECLASS(Geom_VectorWithMagnitude)
DEFINE_HANDLECLASS(GeomAdaptor_Curve)
DEFINE_HANDLECLASS(GeomAdaptor_Surface)
DEFINE_HANDLECLASS(GeomAdaptor_SurfaceOfLinearExtrusion)
DEFINE_HANDLECLASS(GeomAdaptor_SurfaceOfRevolution)
DEFINE_HANDLECLASS(GeomEvaluator_Curve)
DEFINE_HANDLECLASS(GeomEvaluator_OffsetCurve)
DEFINE_HANDLECLASS(GeomEvaluator_OffsetSurface)
DEFINE_HANDLECLASS(GeomEvaluator_Surface)
DEFINE_HANDLECLASS(GeomEvaluator_SurfaceOfExtrusion)
DEFINE_HANDLECLASS(GeomEvaluator_SurfaceOfRevolution) 

