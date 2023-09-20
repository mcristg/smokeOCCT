#ifndef TKG2D_SMOKE_H
#define TKG2D_SMOKE_H

#include <Geom_Axis2Placement.hxx>
#include <Geom2d_Point.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <Poly_Triangulation.hxx>

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkg2d_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkg2d_Smoke;
extern "C" SMOKE_EXPORT void init_tkg2d_Smoke();
extern "C" SMOKE_EXPORT void delete_tkg2d_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
