#ifndef TKXSDRAWPLY_SMOKE_H
#define TKXSDRAWPLY_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxsdrawply_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxsdrawply_Smoke;
extern "C" SMOKE_EXPORT void init_tkxsdrawply_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxsdrawply_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
