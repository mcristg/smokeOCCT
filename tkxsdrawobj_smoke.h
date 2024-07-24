#ifndef TKXSDRAWOBJ_SMOKE_H
#define TKXSDRAWOBJ_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxsdrawobj_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxsdrawobj_Smoke;
extern "C" SMOKE_EXPORT void init_tkxsdrawobj_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxsdrawobj_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
