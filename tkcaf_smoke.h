#ifndef TKCAF_SMOKE_H
#define TKCAF_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkcaf_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkcaf_Smoke;
extern "C" SMOKE_EXPORT void init_tkcaf_Smoke();
extern "C" SMOKE_EXPORT void delete_tkcaf_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
