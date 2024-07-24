#ifndef TKDECASCADE_SMOKE_H
#define TKDECASCADE_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxdecascade_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkdecascade_Smoke;
extern "C" SMOKE_EXPORT void init_tkdecascade_Smoke();
extern "C" SMOKE_EXPORT void delete_tkdecascade_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
