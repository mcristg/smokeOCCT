#ifndef TKGEOMALGO_SMOKE_H
#define TKGEOMALGO_SMOKE_H

#include <gp_GTrsf2d.hxx>
#include <TopoDS_Face.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkgeomalgo_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkgeomalgo_Smoke;
extern "C" SMOKE_EXPORT void init_tkgeomalgo_Smoke();
extern "C" SMOKE_EXPORT void delete_tkgeomalgo_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
