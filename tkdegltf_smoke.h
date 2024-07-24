#ifndef TKDEGLTF_SMOKE_H
#define TKDEGLTF_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkdegltf_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkdegltf_Smoke;
extern "C" SMOKE_EXPORT void init_tkdegltf_Smoke();
extern "C" SMOKE_EXPORT void delete_tkdegltf_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
