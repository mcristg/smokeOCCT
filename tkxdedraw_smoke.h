#ifndef TKXDEDRAW_SMOKE_H
#define TKXDEDRAW_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_ttkxdedraw_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxdedraw_Smoke;
extern "C" SMOKE_EXPORT void init_tkxdedraw_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxdedraw_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
