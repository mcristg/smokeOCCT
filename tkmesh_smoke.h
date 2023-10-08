#ifndef TKMESH_SMOKE_H
#define TKMESH_SMOKE_H

#include <Plugin_MapOfFunctions.hxx>

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkmesh_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkmesh_Smoke;
extern "C" SMOKE_EXPORT void init_tkmesh_Smoke();
extern "C" SMOKE_EXPORT void delete_tkmesh_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
