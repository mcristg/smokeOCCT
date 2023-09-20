#ifndef TKBREP_SMOKE_H
#define TKBREP_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkbrep_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkbrep_Smoke;
extern "C" SMOKE_EXPORT void init_tkbrep_Smoke();
extern "C" SMOKE_EXPORT void delete_tkbrep_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
