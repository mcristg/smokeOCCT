#ifndef tkqadraw_SMOKE_H
#define tkqadraw_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_ttkqadraw_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkqadraw_Smoke;
extern "C" SMOKE_EXPORT void init_tkqadraw_Smoke();
extern "C" SMOKE_EXPORT void delete_tkqadraw_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
