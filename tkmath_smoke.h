#ifndef TKMATH_SMOKE_H
#define TKMATH_SMOKE_H

#include <gp_XY.hxx>
#include <gp_XYZ.hxx>

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkmath_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkmath_Smoke;
extern "C" SMOKE_EXPORT void init_tkmath_Smoke();
extern "C" SMOKE_EXPORT void delete_tkmath_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
