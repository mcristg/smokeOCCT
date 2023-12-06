#ifndef TKCDF_SMOKE_H
#define TKCDF_SMOKE_H

#include <OSD_Path.hxx>
#include <OSD_FileIterator.hxx>
#include <Standard_GUID.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkcdf_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkcdf_Smoke;
extern "C" SMOKE_EXPORT void init_tkcdf_Smoke();
extern "C" SMOKE_EXPORT void delete_tkcdf_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
