#ifndef TKOPENGL_SMOKE_H
#define TKOPENGL_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkopengl_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkopengl_Smoke;
extern "C" SMOKE_EXPORT void init_tkopengl_Smoke();
extern "C" SMOKE_EXPORT void delete_tkopengl_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
