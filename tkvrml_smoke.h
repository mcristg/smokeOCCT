#ifndef TKVRML_SMOKE_H
#define TKVRML_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkvrml_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkvrml_Smoke;
extern "C" SMOKE_EXPORT void init_tkvrml_Smoke();
extern "C" SMOKE_EXPORT void delete_tkvrml_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
