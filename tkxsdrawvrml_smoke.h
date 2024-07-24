#ifndef TKXSDRAWVRML_SMOKE_H
#define TKXSDRAWVRML_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxsdrawvrml_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxsdrawvrml_Smoke;
extern "C" SMOKE_EXPORT void init_tkxsdrawvrml_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxsdrawvrml_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
