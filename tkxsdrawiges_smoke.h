#ifndef TKXSDRAWIGES_SMOKE_H
#define TKXSDRAWIGES_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxsdrawiges_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxsdrawiges_Smoke;
extern "C" SMOKE_EXPORT void init_tkxsdrawiges_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxsdrawiges_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
