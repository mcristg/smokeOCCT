#ifndef TKFILLET_SMOKE_H
#define TKFILLET_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkfillet_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkfillet_Smoke;
extern "C" SMOKE_EXPORT void init_tkfillet_Smoke();
extern "C" SMOKE_EXPORT void delete_tkfillet_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
