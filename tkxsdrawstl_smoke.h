#ifndef TKXSDRAWSTL_SMOKE_H
#define TKXSDRAWSTL_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxsdrawstl_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxsdrawstl_Smoke;
extern "C" SMOKE_EXPORT void init_tkxsdrawstl_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxsdrawstl_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
