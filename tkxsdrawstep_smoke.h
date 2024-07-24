#ifndef TKXSDRAWSTEP_SMOKE_H
#define TKXSDRAWSTEP_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxsdraw_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxsdrawstep_Smoke;
extern "C" SMOKE_EXPORT void init_tkxsdrawstep_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxsdrawstep_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
