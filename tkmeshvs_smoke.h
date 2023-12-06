#ifndef TKMESHVS_SMOKE_H
#define TKMESHVS_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkmeshvs_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkmeshvs_Smoke;
extern "C" SMOKE_EXPORT void init_tkmeshvs_Smoke();
extern "C" SMOKE_EXPORT void delete_tkmeshvs_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
