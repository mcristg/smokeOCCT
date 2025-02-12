#ifndef TKQT3D_SMOKE_H
#define TKQT3D_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkqt3d_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkqt3d_Smoke;
extern "C" SMOKE_EXPORT void init_tkqt3d_Smoke();
extern "C" SMOKE_EXPORT void delete_tkqt3d_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
