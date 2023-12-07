#ifndef TKXSBASE_SMOKE_H
#define TKXSBASE_SMOKE_H

#include <Message_Msg.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Wire.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Shell.hxx>
#include <TopoDS_Solid.hxx>
#include <TopoDS_CompSolid.hxx>
#include <TopoDS_Compound.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkxsbase_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkxsbase_Smoke;
extern "C" SMOKE_EXPORT void init_tkxsbase_Smoke();
extern "C" SMOKE_EXPORT void delete_tkxsbase_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
