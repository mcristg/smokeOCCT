#ifndef TKDEVRML_SMOKE_H
#define TKDEVRML_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkdevrml_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkdevrml_Smoke;
extern "C" SMOKE_EXPORT void init_tkdevrml_Smoke();
extern "C" SMOKE_EXPORT void delete_tkdevrml_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
