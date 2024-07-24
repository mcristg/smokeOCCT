#ifndef TKDEOBJ_SMOKE_H
#define TKDEOBJ_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkdeobj_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkdeobj_Smoke;
extern "C" SMOKE_EXPORT void init_tkdeobj_Smoke();
extern "C" SMOKE_EXPORT void delete_tkdeobj_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
