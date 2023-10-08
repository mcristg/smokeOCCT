#ifndef TKBO_SMOKE_H
#define TKBO_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkbo_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkbo_Smoke;
extern "C" SMOKE_EXPORT void init_tkbo_Smoke();
extern "C" SMOKE_EXPORT void delete_tkbo_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
