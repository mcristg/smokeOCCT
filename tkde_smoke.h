#ifndef TKDE_SMOKE_H
#define TKDE_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxde_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkde_Smoke;
extern "C" SMOKE_EXPORT void init_tkde_Smoke();
extern "C" SMOKE_EXPORT void delete_tkde_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
