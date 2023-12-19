#ifndef TKOPENGLTEST_SMOKE_H
#define TKOPENGLTEST_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkopengltest_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkopengltest_Smoke;
extern "C" SMOKE_EXPORT void init_tkopengltest_Smoke();
extern "C" SMOKE_EXPORT void delete_tkopengltest_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
