#ifndef TKSTEPBASE_SMOKE_H
#define TKSTEPBASE_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkstepbase_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkstepbase_Smoke;
extern "C" SMOKE_EXPORT void init_tkstepbase_Smoke();
extern "C" SMOKE_EXPORT void delete_tkstepbase_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
