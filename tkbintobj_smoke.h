#ifndef TKBINTOBJ_SMOKE_H
#define TKBINTOBJ_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkbintobj_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkbintobj_Smoke;
extern "C" SMOKE_EXPORT void init_tkbintobj_Smoke();
extern "C" SMOKE_EXPORT void delete_tkbintobj_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
