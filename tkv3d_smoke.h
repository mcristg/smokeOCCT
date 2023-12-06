#ifndef TKV3D_SMOKE_H
#define TKV3D_SMOKE_H

#include <Geom_Axis1Placement.hxx>
#include <Geom_Axis2Placement.hxx>
#include <AIS_DataMapOfIOStatus.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkv3d_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkv3d_Smoke;
extern "C" SMOKE_EXPORT void init_tkv3d_Smoke();
extern "C" SMOKE_EXPORT void delete_tkv3d_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
