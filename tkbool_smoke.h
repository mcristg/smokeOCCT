#ifndef tkbool_SMOKE_H
#define tkbool_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkbool_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkbool_Smoke;
extern "C" SMOKE_EXPORT void init_tkbool_Smoke();
extern "C" SMOKE_EXPORT void delete_tkbool_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
