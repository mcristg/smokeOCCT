#ifndef TKLCAF_SMOKE_H
#define TKLCAF_SMOKE_H

#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tklcaf_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tklcaf_Smoke;
extern "C" SMOKE_EXPORT void init_tklcaf_Smoke();
extern "C" SMOKE_EXPORT void delete_tklcaf_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };
#endif

#endif
