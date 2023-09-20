#ifndef TKERNEL_SMOKE_H
#define TKERNEL_SMOKE_H

#include <gp_XY.hxx>
#include <gp_XYZ.hxx>

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkernel_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkernel_Smoke;
extern "C" SMOKE_EXPORT void init_tkernel_Smoke();
extern "C" SMOKE_EXPORT void delete_tkernel_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
