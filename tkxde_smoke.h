#ifndef TKXDE_SMOKE_H
#define TKXDE_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxde_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxde_Smoke;
extern "C" SMOKE_EXPORT void init_tkxde_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxde_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
