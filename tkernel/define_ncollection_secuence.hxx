#ifndef _DEFINE_NCOLLECTION_SEQUENCE
#define _DEFINE_NCOLLECTION_SEQUENCE
#include <NCollection_Sequence.hxx>

#define DEFINE_NCOLLECTION_SEQUENCE(C1,C2,C3) class Make_##C1##Of##C3 \
{ \
public: \
 	Make_##C1##Of##C3 () {} \
 	Make_##C1##Of##C3 (const NCollection_Sequence<C2> &theOther) {Sequence = theOther;} \
 	NCollection_Sequence<C2> &get() {return Sequence;} \
    Standard_Integer Size(void) {return Sequence.Size();} \
    Standard_Integer Length(void) {return Sequence.Length();} \
    Standard_Integer Lower(void) {return Sequence.Lower();} \
    Standard_Integer Upper(void) {return Sequence.Upper();} \
    Standard_Boolean IsEmpty(void) {return Sequence.IsEmpty();} \
    void Reverse(void) {return Sequence.Reverse();} \
    void Exchange(const Standard_Integer I, const Standard_Integer J) {Sequence.Exchange(I, J);} \
    void Clear() {Sequence.Clear();} \
    NCollection_Sequence<C2> & Assign(const NCollection_Sequence<C2> &theOther) {return Sequence.Assign(theOther);} \
    void Remove(const Standard_Integer theIndex){Sequence.Remove(theIndex);} \
    void Remove(const Standard_Integer theFromIndex, const Standard_Integer theToIndex) {Sequence.Remove(theFromIndex,theToIndex);} \
    void Append(const C2 &theItem) {Sequence.Append(theItem);} \
    void Append(NCollection_Sequence<C2> &theSeq) {Sequence.Append(theSeq);} \
    void Prepend(const C2 &theItem) {Sequence.Prepend(theItem);} \
    void Prepend(NCollection_Sequence<C2> &theSeq) {Sequence.Prepend(theSeq);} \
    void InsertBefore(const Standard_Integer theIndex, const C2 &theItem) {Sequence.InsertBefore(theIndex,theItem);} \
    void InsertBefore(const Standard_Integer theIndex, NCollection_Sequence<C2> &theSeq) {Sequence.InsertBefore(theIndex,theSeq);} \
    void InsertAfter(const Standard_Integer theIndex, NCollection_Sequence<C2> &theSeq) {Sequence.InsertAfter(theIndex,theSeq);} \
    void InsertAfter(const Standard_Integer theIndex, const C2 &theItem) {Sequence.InsertAfter(theIndex,theItem);} \
    void Split(const Standard_Integer theIndex, NCollection_Sequence<C2> &theSeq) {Sequence.Split(theIndex,theSeq);} \
    const C2 & First() {return Sequence.First();} \
    const C2 & Last() {return Sequence.Last();} \
    const C2 & Value(const Standard_Integer theIndex) {return Sequence.Value(theIndex);} \
    void SetValue(const Standard_Integer theIndex, const C2 &theItem) {return Sequence.SetValue(theIndex,theItem);} \
    \
    static Standard_Integer Size(void* seq) {return static_cast<NCollection_Sequence<C2>*>(seq)->Size();} \
    static Standard_Integer Length(void* seq) {return static_cast<NCollection_Sequence<C2>*>(seq)->Length();} \
    static Standard_Integer Lower(void* seq) {return static_cast<NCollection_Sequence<C2>*>(seq)->Lower();} \
    static Standard_Integer Upper(void* seq) {return static_cast<NCollection_Sequence<C2>*>(seq)->Upper();} \
    static Standard_Boolean IsEmpty(void* seq) {return static_cast<NCollection_Sequence<C2>*>(seq)->IsEmpty();} \
    static void Reverse(void* seq) {return static_cast<NCollection_Sequence<C2>*>(seq)->Reverse();} \
    static void Exchange(void* seq, const Standard_Integer I, const Standard_Integer J) {static_cast<NCollection_Sequence<C2>*>(seq)->Exchange(I, J);} \
    static void Clear(void* seq) {static_cast<NCollection_Sequence<C2>*>(seq)->Clear();} \
    static NCollection_Sequence<C2> & Assign(void* seq, const NCollection_Sequence<C2> &theOther) \
    {return static_cast<NCollection_Sequence<C2>*>(seq)->Assign(theOther);} \
    static void Remove(void* seq, const Standard_Integer theIndex){static_cast<NCollection_Sequence<C2>*>(seq)->Remove(theIndex);} \
    static void Remove(void* seq, const Standard_Integer theFromIndex, const Standard_Integer theToIndex) \
    {static_cast<NCollection_Sequence<C2>*>(seq)->Remove(theFromIndex,theToIndex);} \
    static void Append(void* seq, const C2 &theItem) {static_cast<NCollection_Sequence<C2>*>(seq)->Append(theItem);} \
    static void Append(void* seq, NCollection_Sequence<C2> &theSeq) {static_cast<NCollection_Sequence<C2>*>(seq)->Append(theSeq);} \
    static void Prepend(void* seq, const C2 &theItem) {static_cast<NCollection_Sequence<C2>*>(seq)->Prepend(theItem);} \
    static void Prepend(void* seq, NCollection_Sequence<C2> &theSeq) {static_cast<NCollection_Sequence<C2>*>(seq)->Prepend(theSeq);} \
    static void InsertBefore(void* seq, const Standard_Integer theIndex, const C2 &theItem) \
    {static_cast<NCollection_Sequence<C2>*>(seq)->InsertBefore(theIndex,theItem);} \
    static void InsertBefore(void* seq, const Standard_Integer theIndex, NCollection_Sequence<C2> &theSeq) \
    {static_cast<NCollection_Sequence<C2>*>(seq)->InsertBefore(theIndex,theSeq);} \
    static void InsertAfter(void* seq, const Standard_Integer theIndex, NCollection_Sequence<C2> &theSeq) \
    {static_cast<NCollection_Sequence<C2>*>(seq)->InsertAfter(theIndex,theSeq);} \
    static void InsertAfter(void* seq, const Standard_Integer theIndex, const C2 &theItem) {static_cast<NCollection_Sequence<C2>*>(seq)->InsertAfter(theIndex,theItem);} \
    static void Split(void* seq, const Standard_Integer theIndex, NCollection_Sequence<C2> &theSeq) \
    {static_cast<NCollection_Sequence<C2>*>(seq)->Split(theIndex,theSeq);} \
    static const C2 & First(void* seq) {return static_cast<NCollection_Sequence<C2>*>(seq)->First();} \
    static const C2 & Last(void* seq) {return static_cast<NCollection_Sequence<C2>*>(seq)->Last();} \
    static const C2 & Value(void* seq, const Standard_Integer theIndex) {return static_cast<NCollection_Sequence<C2>*>(seq)->Value(theIndex);} \
    static void SetValue(void* seq, const Standard_Integer theIndex, const C2 &theItem) \
    {return static_cast<NCollection_Sequence<C2>*>(seq)->SetValue(theIndex,theItem);} \
private: \
   NCollection_Sequence<C2> Sequence; \
};

#endif
