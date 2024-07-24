#ifndef TKDESTL_SMOKE_H
#define TKDESTL_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkstl_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkdestl_Smoke;
extern "C" SMOKE_EXPORT void init_tkdestl_Smoke();
extern "C" SMOKE_EXPORT void delete_tkdestl_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
