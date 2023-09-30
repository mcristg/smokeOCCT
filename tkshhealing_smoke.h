#ifndef TKSHHEALING_SMOKE_H
#define TKSHHEALING_SMOKE_H

#include <gp_GTrsf2d.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <TopoDS_Solid.hxx>
#include <smoke.h>

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkshhealing _Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkshhealing_Smoke;
extern "C" SMOKE_EXPORT void init_tkshhealing_Smoke();
extern "C" SMOKE_EXPORT void delete_tkshhealing_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
