#ifndef TKXSDRAWGLTF_SMOKE_H
#define TKXSDRAWGLTF_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxsdrawgltf_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxsdrawgltf_Smoke;
extern "C" SMOKE_EXPORT void init_tkxsdrawgltf_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxsdrawgltf_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
