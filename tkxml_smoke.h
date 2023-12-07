#ifndef TKXML_SMOKE_H
#define TKXML_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxml_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxml_Smoke;
extern "C" SMOKE_EXPORT void init_tkxml_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxml_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
