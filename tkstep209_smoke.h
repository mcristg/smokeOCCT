#ifndef TKSTEP209_SMOKE_H
#define TKSTEP209_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkstep209_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkstep209_Smoke;
extern "C" SMOKE_EXPORT void init_tkstep209_Smoke();
extern "C" SMOKE_EXPORT void delete_tkstep209_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
