#ifndef TKXMLTOBJ_SMOKE_H
#define TKXMLTOBJ_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxmltobj_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxmltobj_Smoke;
extern "C" SMOKE_EXPORT void init_tkxmltobj_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxmltobj_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
