#ifndef TKTOBJDRAW_SMOKE_H
#define TKTOBJDRAW_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tktobjdraw_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tktobjdraw_Smoke;
extern "C" SMOKE_EXPORT void init_tktobjdraw_Smoke();
extern "C" SMOKE_EXPORT void delete_tktobjdraw_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
