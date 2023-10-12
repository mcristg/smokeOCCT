#ifndef TKOFFSET_SMOKE_H
#define TKOFFSET_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkoffset_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkoffset_Smoke;
extern "C" SMOKE_EXPORT void init_tkoffset_Smoke();
extern "C" SMOKE_EXPORT void delete_tkoffset_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
