#ifndef TKIGES_SMOKE_H
#define TKIGES_SMOKE_H

#include <Geom2d_Point.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <Geom2d_Vector.hxx>
#include <Geom2d_VectorWithMagnitude.hxx>
#include <Geom2d_Direction.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom_BezierCurve.hxx>
#include <Geom_TrimmedCurve.hxx>
#include <Geom_Conic.hxx>
#include <Geom_Circle.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom_Hyperbola.hxx>
#include <Geom_Line.hxx>
#include <Geom_Parabola.hxx>
#include <Geom_OffsetCurve.hxx>
#include <Geom_Point.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom_Surface.hxx>
#include <Geom_BoundedSurface.hxx>
#include <Geom_BSplineSurface.hxx>
#include <Geom_BezierSurface.hxx>
#include <Geom_RectangularTrimmedSurface.hxx>
#include <Geom_ElementarySurface.hxx>
#include <Geom_Plane.hxx>
#include <Geom_CylindricalSurface.hxx>
#include <Geom_ConicalSurface.hxx>
#include <Geom_SphericalSurface.hxx>
#include <Geom_ToroidalSurface.hxx>
#include <Geom_SweptSurface.hxx>
#include <Geom_SurfaceOfLinearExtrusion.hxx>
#include <Geom_SurfaceOfRevolution.hxx>
#include <Geom_OffsetSurface.hxx>
#include <Geom_Vector.hxx>
#include <Geom_VectorWithMagnitude.hxx>
#include <Geom_Direction.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <gp_GTrsf.hxx>
#include <Interface_EntityIterator.hxx>
#include <TopoDS_Vertex.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkiges_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkiges_Smoke;
extern "C" SMOKE_EXPORT void init_tkiges_Smoke();
extern "C" SMOKE_EXPORT void delete_tkiges_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
