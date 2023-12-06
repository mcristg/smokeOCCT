/* Redefine the MeshVS_TwoColors structure with a constructor 
   because smokegen expects it to generate the code */
   
#ifndef MeshVS_TwoColors_HeaderFile
#define MeshVS_TwoColors_HeaderFile

#include <Quantity_Color.hxx>

typedef struct MeshVS_TwoColors {
  unsigned int r1 : 8;
  unsigned int g1 : 8;
  unsigned int b1 : 8;
  unsigned int r2 : 8;
  unsigned int g2 : 8;
  unsigned int b2 : 8;
  MeshVS_TwoColors() {r1=g1=b1=r2=g2=b2=0;}
} MeshVS_TwoColors;


//! Computes a hash code for the key, in the range [1, theUpperBound]
//! @param theKey the key which hash code is to be computed
//! @param theUpperBound the upper bound of the range a computing hash code must be within
//! @return a computed hash code, in the range [1, theUpperBound]
Standard_EXPORT Standard_Integer HashCode (const MeshVS_TwoColors& theKey, Standard_Integer theUpperBound);

Standard_EXPORT Standard_Boolean IsEqual (const MeshVS_TwoColors& K1,
                                          const MeshVS_TwoColors& K2  );

Standard_EXPORT Standard_Boolean operator== ( const MeshVS_TwoColors& K1,
                                              const MeshVS_TwoColors& K2  );

Standard_EXPORT MeshVS_TwoColors  BindTwoColors ( const Quantity_Color&, const Quantity_Color& );
Standard_EXPORT Quantity_Color    ExtractColor  ( MeshVS_TwoColors&, const Standard_Integer );
Standard_EXPORT void              ExtractColors ( MeshVS_TwoColors&, Quantity_Color&, Quantity_Color& );

#endif

#include <MeshVS_CommonSensitiveEntity.hxx>
#include <MeshVS_DataSource.hxx>
#include <MeshVS_DataSource3D.hxx>
#include <MeshVS_DeformedDataSource.hxx>
#include <MeshVS_Drawer.hxx>
#include <MeshVS_DummySensitiveEntity.hxx>
#include <MeshVS_ElementalColorPrsBuilder.hxx>
#include <MeshVS_Mesh.hxx>
#include <MeshVS_MeshEntityOwner.hxx>
#include <MeshVS_MeshOwner.hxx>
#include <MeshVS_MeshPrsBuilder.hxx>
#include <MeshVS_NodalColorPrsBuilder.hxx>
#include <MeshVS_PrsBuilder.hxx>
#include <MeshVS_SensitiveFace.hxx>
#include <MeshVS_SensitiveMesh.hxx>
#include <MeshVS_SensitivePolyhedron.hxx>
#include <MeshVS_SensitiveQuad.hxx>
#include <MeshVS_SensitiveSegment.hxx>
#include <MeshVS_TextPrsBuilder.hxx>
#include <MeshVS_Tool.hxx>
#include <MeshVS_TwoNodes.hxx>
#include <MeshVS_VectorPrsBuilder.hxx>
