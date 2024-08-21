#ifndef _MAKE_GRAPHIC3D_VEC2_
#define _MAKE_GRAPHIC3D_VEC2_

#include <NCollection_Vec2.hxx>
#include <Standard_TypeDef.hxx>

#define DEFINE_MAKE_GRAPHIC3D_VEC2(C1,C2) class Make_##C1 { \
public: \
  Make_##C1 () : vec(){} \
  Make_##C1 (C2 theValue) : vec(theValue){} \
  Make_##C1 (const C2 theX, const C2 theY) : vec(theX, theY){} \
  const C1 &get() {return vec;} \
  void SetValues (const C2 theX, const C2 theY) {vec.SetValues(theX, theY);} \
  C2 x() {return vec.x();} \
  C2 y() {return vec.y();} \
  C2 &rx() {return vec.ChangeData()[0];} \
  C2 &ry() {return vec.ChangeData()[1];} \
  bool IsEqual(const C1 &theOther) {return vec.IsEqual(theOther);} \
  const C2 *GetData() {return vec.GetData();} \
  C2 *ChangeData() {return vec.ChangeData();} \
  static void SetValues (C1 *thevec, const C2 theX, const C2 theY) {thevec->SetValues(theX, theY);} \
  static C2 x(C1 *thevec) {return thevec->x();} \
  static C2 y(C1 *thevec) {return thevec->y();} \
  static C2 rx(C1 *thevec) {return thevec->ChangeData()[0];} \
  static C2 &ry(C1 *thevec) {return thevec->ChangeData()[1];} \
  static bool IsEqual(C1 *thevec, const C1 &theOther) {return thevec->IsEqual(theOther);} \
  static const C2 *GetData(C1 *thevec) {return thevec->GetData();} \
  static C2 *ChangeData(C1 *thevec) {return thevec->ChangeData();} \
private: \
  C1 vec; \
};

DEFINE_MAKE_GRAPHIC3D_VEC2(Graphic3d_Vec2,Standard_ShortReal)
DEFINE_MAKE_GRAPHIC3D_VEC2(Graphic3d_Vec2d,Standard_Real)
DEFINE_MAKE_GRAPHIC3D_VEC2(Graphic3d_Vec2i,Standard_Integer)
DEFINE_MAKE_GRAPHIC3D_VEC2(Graphic3d_Vec2u,unsigned int)
DEFINE_MAKE_GRAPHIC3D_VEC2(Graphic3d_Vec2ub,Standard_Byte)
DEFINE_MAKE_GRAPHIC3D_VEC2(Graphic3d_Vec2b,Standard_Character)

#endif

