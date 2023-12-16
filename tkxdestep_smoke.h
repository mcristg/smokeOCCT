#ifndef TKXDESTEP_SMOKE_H
#define TKXDESTEP_SMOKE_H

#include <TCollection_ExtendedString.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxdestep_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxdestep_Smoke;
extern "C" SMOKE_EXPORT void init_tkxdestep_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxdestep_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
