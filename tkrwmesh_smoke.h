#ifndef TKRWMESH_SMOKE_H
#define TKRWMESH_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkrwmesh_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkrwmesh_Smoke;
extern "C" SMOKE_EXPORT void init_tkrwmesh_Smoke();
extern "C" SMOKE_EXPORT void delete_tkrwmesh_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
