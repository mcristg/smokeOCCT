#ifndef TKPRIM_SMOKE_H
#define TKPRIM_SMOKE_H

#include <gp_Pln.hxx>
#include <gp_Lin.hxx>

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkprim_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkprim_Smoke;
extern "C" SMOKE_EXPORT void init_tkprim_Smoke();
extern "C" SMOKE_EXPORT void delete_tkprim_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
