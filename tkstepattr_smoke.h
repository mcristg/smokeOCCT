#ifndef TKSTEPATTR_SMOKE_H
#define TKSTEPATTR_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkstepattr_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkstepattr_Smoke;
extern "C" SMOKE_EXPORT void init_tkstepattr_Smoke();
extern "C" SMOKE_EXPORT void delete_tkstepattr_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
