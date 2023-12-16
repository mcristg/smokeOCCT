#ifndef TKXDECASCADE_SMOKE_H
#define TKXDECASCADE_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxdecascade_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxdecascade_Smoke;
extern "C" SMOKE_EXPORT void init_tkxdecascade_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxdecascade_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
