#ifndef TKGEOMBASE_SMOKE_H
#define TKGEOMBASE_SMOKE_H

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
