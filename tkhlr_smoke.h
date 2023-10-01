#ifndef TKHLR_SMOKE_H
#define TKHLR_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkhlr_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkhlr_Smoke;
extern "C" SMOKE_EXPORT void init_tkhlr_Smoke();
extern "C" SMOKE_EXPORT void delete_tkhlr_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
