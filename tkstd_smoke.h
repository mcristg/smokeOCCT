#ifndef TKSTD_SMOKE_H
#define TKSTD_SMOKE_H

#include <Poly_Polygon2D.hxx>
#include <Poly_PolygonOnTriangulation.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkstd_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkstd_Smoke;
extern "C" SMOKE_EXPORT void init_tkstd_Smoke();
extern "C" SMOKE_EXPORT void delete_tkstd_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
