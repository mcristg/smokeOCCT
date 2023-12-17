#ifndef TKTOPTEST_SMOKE_H
#define TKTOPTEST_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tktoptest_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tktoptest_Smoke;
extern "C" SMOKE_EXPORT void init_tktoptest_Smoke();
extern "C" SMOKE_EXPORT void delete_tktoptest_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
