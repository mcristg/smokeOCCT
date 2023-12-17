#ifndef TKDRAW_SMOKE_H
#define TKDRAW_SMOKE_H

#include <Poly_Triangulation.hxx>
#include <Poly_Polygon3D.hxx>
#include <Poly_Polygon2D.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkdraw_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkdraw_Smoke;
extern "C" SMOKE_EXPORT void init_tkdraw_Smoke();
extern "C" SMOKE_EXPORT void delete_tkdraw_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
