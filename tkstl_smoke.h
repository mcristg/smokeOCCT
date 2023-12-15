#ifndef TKSTL_SMOKE_H
#define TKSTL_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkstl_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkstl_Smoke;
extern "C" SMOKE_EXPORT void init_tkstl_Smoke();
extern "C" SMOKE_EXPORT void delete_tkstl_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
