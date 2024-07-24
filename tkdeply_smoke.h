#ifndef TKDEPLY_SMOKE_H
#define TKDEPLY_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkdeply_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkdeply_Smoke;
extern "C" SMOKE_EXPORT void init_tkdeply_Smoke();
extern "C" SMOKE_EXPORT void delete_tkdeply_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
