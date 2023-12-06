#ifndef TKBINL_SMOKE_H
#define TKBINL_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkbinl_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkbinl_Smoke;
extern "C" SMOKE_EXPORT void init_tkbinl_Smoke();
extern "C" SMOKE_EXPORT void delete_tkbinl_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
