#ifndef TKHDESTEP_SMOKE_H
#define TKHDESTEP_SMOKE_H

#include <Geom_Axis1Placement.hxx>
#include <Geom2d_AxisPlacement.hxx>
#include <Geom_BSplineCurve.hxx>
#include <Geom2d_BSplineCurve.hxx>
#include <Geom_BoundedCurve.hxx>
#include <Geom2d_BoundedCurve.hxx>
#include <Geom_CartesianPoint.hxx>
#include <Geom2d_CartesianPoint.hxx>
#include <Geom_Circle.hxx>
#include <Geom2d_Circle.hxx>
#include <Geom_Conic.hxx>
#include <Geom2d_Conic.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <Geom_Direction.hxx>
#include <Geom2d_Direction.hxx>
#include <Geom_Ellipse.hxx>
#include <Geom2d_Ellipse.hxx>
#include <Geom2d_Hyperbola.hxx>
#include <Geom_Hyperbola.hxx>
#include <Geom_Line.hxx>
#include <Geom2d_Line.hxx>
#include <Geom2d_Parabola.hxx>
#include <Geom_Parabola.hxx>
#include <Geom_Vector.hxx>
#include <Geom2d_Vector.hxx>
#include <StepShape_ShapeDefinitionRepresentation.hxx>
#include <StepRepr_NextAssemblyUsageOccurrence.hxx>
#include <StepRepr_GlobalUnitAssignedContext.hxx>
#include <StepBasic_NamedUnit.hxx>
#include <StepBasic_ProductDefinition.hxx>
#include <StepRepr_PropertyDefinition.hxx>
#include <StepShape_ShapeRepresentation.hxx>
#include <StepShape_ContextDependentShapeRepresentation.hxx>
#include <StepRepr_ShapeRepresentationRelationship.hxx>
#include <StepRepr_MappedItem.hxx>
#include <StepShape_FaceSurface.hxx>
#include <StepRepr_ConstructiveGeometryRepresentationRelationship.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepBasic_Product.hxx>
#include <StepBasic_ProductDefinitionFormation.hxx>
#include <StepRepr_ProductDefinitionShape.hxx>
#include <StepGeom_Axis2Placement3d.hxx>
#include <StepGeom_SuParameters.hxx>
#include <StepShape_ManifoldSolidBrep.hxx>
#include <StepShape_BrepWithVoids.hxx>
#include <StepShape_FacetedBrep.hxx>
#include <StepShape_FacetedBrepAndBrepWithVoids.hxx>
#include <StepShape_ShellBasedSurfaceModel.hxx>
#include <StepShape_EdgeBasedWireframeModel.hxx>
#include <StepShape_FaceBasedSurfaceModel.hxx>
#include <StepShape_GeometricSet.hxx>
#include <StepVisual_TessellatedSolid.hxx>
#include <StepVisual_TessellatedShell.hxx>
#include <StepVisual_TessellatedFace.hxx>
#include <Geom_Surface.hxx>

#include <TCollection_ExtendedString.hxx>
#include <smoke.h>

// Defined in smokedata.cpp, initialized by init_tkhdestep_Smoke(), used by all .cpp files
extern "C" SMOKE_EXPORT Smoke* tkhdestep_Smoke;
extern "C" SMOKE_EXPORT void init_tkhdestep_Smoke();
extern "C" SMOKE_EXPORT void delete_tkhdestep_Smoke();

#ifndef QGLOBALSPACE_CLASS
#define QGLOBALSPACE_CLASS
class QGlobalSpace { };

#endif

#endif
