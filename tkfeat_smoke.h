#ifndef TKFEAT_SMOKE_H
#define TKFEAT_SMOKE_H

#include <TopoDS_Solid.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkfeat_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkfeat_Smoke;
extern "C" SMOKE_EXPORT void init_tkfeat_Smoke();
extern "C" SMOKE_EXPORT void delete_tkfeat_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
