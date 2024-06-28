#include <tkg3d_includes.h>

Handle(Geom_Plane) handle_Geom_Plane_DownCast(Handle(Geom_Surface) &theObject)
{
  return Handle(Geom_Plane)::DownCast(theObject);
}


