#ifndef TKTOBJ_SMOKE_H
#define TKTOBJ_SMOKE_H

#include <Standard_GUID.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_RelocationTable.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tktobj_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tktobj_Smoke;
extern "C" SMOKE_EXPORT void init_tktobj_Smoke();
extern "C" SMOKE_EXPORT void delete_tktobj_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
