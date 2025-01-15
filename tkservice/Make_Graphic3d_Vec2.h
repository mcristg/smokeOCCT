#ifndef _MAKE_GRAPHIC3D_VEC2_
#define _MAKE_GRAPHIC3D_VEC2_

#include <NCollection_Vec2.hxx>
#include <Standard_TypeDef.hxx>

#define DEFINE_MAKE_GRAPHIC3D_VEC2(C1,C2) class Make_##C1 { \
public: \
  Make_##C1 () : vec(){} \
  Make_##C1 (C2 theValue) : vec(theValue){} \
  Make_##C1 (const C2 theX, const C2 theY) : vec(theX, theY){} \
  Make_##C1 (C1 &theVec) : vec(theVec){} \
  const C1 &get() {return vec;} \
  void SetValues (const C2 theX, const C2 theY) {vec.SetValues(theX, theY);} \
  C2 x() {return vec.x();} \
  C2 y() {return vec.y();} \
  C2 &rx() {return vec.ChangeData()[0];} \
  C2 &ry() {return vec.ChangeData()[1];} \
  bool IsEqual(const C1 &theOther) {return vec.IsEqual(theOther);} \
  const C2 *GetData() {return vec.GetData();} \
  C2 *ChangeData() {return vec.ChangeData();} \
  C1 sum (Make_##C1 &theAdd) {return (this->vec + theAdd.vec);} \
  C1 diff (Make_##C1 &theDec) {return (this->vec - theDec.vec);} \
  C1 mul (Make_##C1 &theRight) {return (this->vec * theRight.vec);} \
  C1 div (Make_##C1 &theRight) {return (this->vec / theRight.vec);} \
  Make_##C1 * mul (C2 theFactor) {this->vec = this->vec * theFactor; return this;} \
  Make_##C1 * div (C2 theInvFactor) {this->vec = this->vec / theInvFactor; return this;} \
  void Multiply (C2 theFactor) {this->vec.Multiply(theFactor);} \
  Make_##C1 * Multiplied (C2 theFactor) {this->vec.Multiplied(theFactor); return this;} \
  C1 cwiseMin(Make_##C1 &theVec) { return this->vec.cwiseMin(theVec.vec);} \
  C1 cwiseMax (Make_##C1 &theVec) { return this->vec.cwiseMax(theVec.vec);} \
  C1 cwiseAbs () { return this->vec.cwiseAbs();} \
  C2 maxComp () {return this->vec.maxComp();} \
  C2 minComp () {return this->vec.minComp();} \
  static void SetValues (C1 *thevec, const C2 theX, const C2 theY) {thevec->SetValues(theX, theY);} \
  static C2 x(C1 *thevec) {return thevec->x();} \
  static C2 y(C1 *thevec) {return thevec->y();} \
  static C2 rx(C1 *thevec) {return thevec->ChangeData()[0];} \
  static C2 &ry(C1 *thevec) {return thevec->ChangeData()[1];} \
  static bool IsEqual(C1 *thevec, const C1 &theOther) {return thevec->IsEqual(theOther);} \
  static const C2 *GetData(C1 *thevec) {return thevec->GetData();} \
  static C2 *ChangeData(C1 *thevec) {return thevec->ChangeData();} \
  static C1 sum (C1 &theVec,C1 &theAdd) {return (theVec + theAdd);} \
  static C1 diff (C1 &theVec,C1 &theDec) {return (theVec - theDec);} \
  static C1 mul (C1 &theVec,C1 &theRight) {return (theVec * theRight);} \
  static C1 div (C1 &theVec,C1 &theRight) {return (theVec / theRight);} \
  static C1 * mul (C1 &theVec,C2 theFactor) {theVec = theVec * theFactor; return &theVec;} \
  static C1 * div (C1 &theVec,C2 theInvFactor) {theVec = theVec / theInvFactor; return &theVec;} \
  static void Multiply (C1 &theVec,C2 theFactor) {theVec.Multiply(theFactor);} \
  static C1 * Multiplied (C1 &theVec,C2 theInvFactor) {theVec.Multiplied(theInvFactor); return &theVec;} \
  static C1 cwiseMin(C1 *theVec, C1 *otherVec) { return theVec->cwiseMin(*otherVec);} \
  static C1 cwiseMax (C1 *theVec, C1 *otherVec) { return theVec->cwiseMax(*otherVec);} \
  static C1 cwiseAbs (C1 *theVec) { return theVec->cwiseAbs();} \
  static C2 maxComp (C1 *theVec) {return theVec->maxComp();} \
  static C2 minComp (C1 *theVec) {return theVec->minComp();} \
  static void Delete (C1 * theVec) {delete theVec;} \
private: \
  C1 vec; \
};

DEFINE_MAKE_GRAPHIC3D_VEC2(Graphic3d_Vec2,Standard_ShortReal)
DEFINE_MAKE_GRAPHIC3D_VEC2(Graphic3d_Vec2d,Standard_Real)
DEFINE_MAKE_GRAPHIC3D_VEC2(Graphic3d_Vec2i,Standard_Integer)
//DEFINE_MAKE_GRAPHIC3D_VEC2(Graphic3d_Vec2u,unsigned int)
DEFINE_MAKE_GRAPHIC3D_VEC2(Graphic3d_Vec2ub,Standard_Byte)
DEFINE_MAKE_GRAPHIC3D_VEC2(Graphic3d_Vec2b,Standard_Character)

#endif

