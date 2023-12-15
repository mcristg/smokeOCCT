#ifndef TKXDEIGES_SMOKE_H
#define TKXDEIGES_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxdeiges_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxdeiges_Smoke;
extern "C" SMOKE_EXPORT void init_tkxdeiges_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxdeiges_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
