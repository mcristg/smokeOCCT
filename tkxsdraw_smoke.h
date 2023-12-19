#ifndef TKXSDRAW_SMOKE_H
#define TKXSDRAW_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxsdraw_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxsdraw_Smoke;
extern "C" SMOKE_EXPORT void init_tkxsdraw_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxsdraw_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
