#ifndef TKG3D_SMOKE_H
#define TKG3D_SMOKE_H

#include <gp_GTrsf2d.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkg3d_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkg3d_Smoke;
extern "C" SMOKE_EXPORT void init_tkg3d_Smoke();
extern "C" SMOKE_EXPORT void delete_tkg3d_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
