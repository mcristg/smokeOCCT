#ifndef TKBIN_SMOKE_H
#define TKBIN_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkbin_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkbin_Smoke;
extern "C" SMOKE_EXPORT void init_tkbin_Smoke();
extern "C" SMOKE_EXPORT void delete_tkbin_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
