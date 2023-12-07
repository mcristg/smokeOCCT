#ifndef TKXMLL_SMOKE_H
#define TKXMLL_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxmll_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxmll_Smoke;
extern "C" SMOKE_EXPORT void init_tkxmll_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxmll_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
