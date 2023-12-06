#ifndef TKSERVICE_SMOKE_H
#define TKSERVICE_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkservice_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkservice_Smoke;
extern "C" SMOKE_EXPORT void init_tkservice_Smoke();
extern "C" SMOKE_EXPORT void delete_tkservice_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
