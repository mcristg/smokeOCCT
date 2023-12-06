#ifndef TKSTDL_SMOKE_H
#define TKSTDL_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkstdl_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkstdl_Smoke;
extern "C" SMOKE_EXPORT void init_tkstdl_Smoke();
extern "C" SMOKE_EXPORT void delete_tkstdl_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
