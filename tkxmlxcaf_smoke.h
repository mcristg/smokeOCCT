#ifndef TKXMLXCAF_SMOKE_H
#define TKXMLXCAF_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxmlxcaf_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxmlxcaf_Smoke;
extern "C" SMOKE_EXPORT void init_tkxmlxcaf_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxmlxcaf_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
