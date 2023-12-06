#ifndef TKEXPRESS_SMOKE_H
#define TKEXPRESS_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkexpress_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkexpress_Smoke;
extern "C" SMOKE_EXPORT void init_tkexpress_Smoke();
extern "C" SMOKE_EXPORT void delete_tkexpress_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
