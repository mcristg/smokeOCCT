#ifndef TKBINXCAF_SMOKE_H
#define TKBINXCAF_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkbinxcaf_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkbinxcaf_Smoke;
extern "C" SMOKE_EXPORT void init_tkbinxcaf_Smoke();
extern "C" SMOKE_EXPORT void delete_tkbinxcaf_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
