#ifndef _MAKE_GRAPHIC3D_VEC3_
#define _MAKE_GRAPHIC3D_VEC3_

#include <NCollection_Vec3.hxx>
#include <Standard_TypeDef.hxx>

#define DEFINE_MAKE_GRAPHIC3D_VEC3(C1,C2,C3) class Make_##C1 { \
public: \
  Make_##C1 () : vec(){} \
  Make_##C1 (C3 theValue) : vec(theValue){} \
  Make_##C1 (const C3 theX, const C3 theY, const C3 theZ) : vec(theX, theY, theZ){} \
  Make_##C1 (const C2 &theVec2, C3 theZ) : vec(theVec2, theZ){} \
  const C1 &get() {return vec;} \
  void SetValues (const C3 theX, const C3 theY, const C3 theZ) {vec.SetValues(theX, theY, theZ);} \
  void SetValues (const C2 &theVec2, C3 theZ) {vec.SetValues(theVec2, theZ);} \
  C3 x() {return vec.x();} \
  C3 y() {return vec.y();} \
  C3 z() {return vec.y();} \
  C3 &rx() {return vec.ChangeData()[0];} \
  C3 &ry() {return vec.ChangeData()[1];} \
  C3 &rz() {return vec.ChangeData()[3];} \
  C3 r() {return vec.x();} \
  C3 g() {return vec.y();} \
  C3 b() {return vec.y();} \
  C3 &rr() {return vec.ChangeData()[0];} \
  C3 &rg() {return vec.ChangeData()[1];} \
  C3 &rb() {return vec.ChangeData()[3];} \
  bool IsEqual(const C1 &theOther) {return vec.IsEqual(theOther);} \
  const C3 *GetData() {return vec.GetData();} \
  C3 *ChangeData() {return vec.ChangeData();} \
  static void SetValues (C1 *thevec, const C3 theX, const C3 theY, const C3 theZ) {thevec->SetValues(theX, theY, theZ);} \
  static void SetValues (C1 *thevec, const C2 &theVec2, C3 theZ) {thevec->SetValues(theVec2, theZ);} \
  static C3 x(C1 *thevec) {return thevec->x();} \
  static C3 y(C1 *thevec) {return thevec->y();} \
  static C3 z(C1 *thevec) {return thevec->y();} \
  static C3 &rx(C1 *thevec) {return thevec->ChangeData()[0];} \
  static C3 &ry(C1 *thevec) {return thevec->ChangeData()[1];} \
  static C3 &rz(C1 *thevec) {return thevec->ChangeData()[3];} \
  static C3 r(C1 *thevec) {return thevec->x();} \
  static C3 g(C1 *thevec) {return thevec->y();} \
  static C3 b(C1 *thevec) {return thevec->y();} \
  static C3 &rr(C1 *thevec) {return thevec->ChangeData()[0];} \
  static C3 &rg(C1 *thevec) {return thevec->ChangeData()[1];} \
  static C3 &rb(C1 *thevec) {return thevec->ChangeData()[3];} \
  static bool IsEqual(C1 *thevec, const C1 &theOther) {return thevec->IsEqual(theOther);} \
  static const C3 *GetData(C1 *thevec) {return thevec->GetData();} \
  static C3 *ChangeData(C1 *thevec) {return thevec->ChangeData();} \  
private: \
  C1 vec; \
};

DEFINE_MAKE_GRAPHIC3D_VEC3(Graphic3d_Vec3,Graphic3d_Vec2,Standard_ShortReal)
DEFINE_MAKE_GRAPHIC3D_VEC3(Graphic3d_Vec3d,Graphic3d_Vec2d,Standard_Real)
DEFINE_MAKE_GRAPHIC3D_VEC3(Graphic3d_Vec3i,Graphic3d_Vec2i,Standard_Integer)
DEFINE_MAKE_GRAPHIC3D_VEC3(Graphic3d_Vec3u,Graphic3d_Vec2u,unsigned int)
DEFINE_MAKE_GRAPHIC3D_VEC3(Graphic3d_Vec3ub,Graphic3d_Vec2ub,Standard_Byte)
DEFINE_MAKE_GRAPHIC3D_VEC3(Graphic3d_Vec3b,Graphic3d_Vec2b,Standard_Character)

#endif
