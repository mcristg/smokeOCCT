#ifndef TKTOPALGO_SMOKE_H
#define TKTOPALGO_SMOKE_H

#include <gp_Pnt.hxx>
#include <gp_Mat.hxx>
#include <BRepGProp_Domain.hxx>
#include <BRepGProp_Face.hxx>
#include <BRepGProp_MeshProps.hxx>
#include <BRepGProp_Gauss.hxx>
#include <Geom2d_Point.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tktopalgo_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tktopalgo_Smoke;
extern "C" SMOKE_EXPORT void init_tktopalgo_Smoke();
extern "C" SMOKE_EXPORT void delete_tktopalgo_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
