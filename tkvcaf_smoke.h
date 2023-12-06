#ifndef TKVCAF_SMOKE_H
#define TKVCAF_SMOKE_H

#include <TDF_DeltaOnModification.hxx>
#include <V3d_Viewer.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkvcaf_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkvcaf_Smoke;
extern "C" SMOKE_EXPORT void init_tkvcaf_Smoke();
extern "C" SMOKE_EXPORT void delete_tkvcaf_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
