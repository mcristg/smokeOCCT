#ifndef TKDCAF_SMOKE_H
#define TKDCAF_SMOKE_H

#include <TDF_DeltaOnModification.hxx>
#include <Standard_GUID.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkdcaf_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkdcaf_Smoke;
extern "C" SMOKE_EXPORT void init_tkdcaf_Smoke();
extern "C" SMOKE_EXPORT void delete_tkdcaf_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
