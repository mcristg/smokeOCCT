#ifndef TKVIEWERTEST_SMOKE_H
#define TKVIEWERTEST_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkviewertest_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkviewertest_Smoke;
extern "C" SMOKE_EXPORT void init_tkviewertest_Smoke();
extern "C" SMOKE_EXPORT void delete_tkviewertest_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
