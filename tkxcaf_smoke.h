#ifndef TKXCAF_SMOKE_H
#define TKXCAF_SMOKE_H

#include <TDF_DeltaOnModification.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxcaf_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxcaf_Smoke;
extern "C" SMOKE_EXPORT void init_tkxcaf_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxcaf_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
