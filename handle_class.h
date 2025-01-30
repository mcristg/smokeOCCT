#ifndef _DEFINE_HANDLECLASS
#define _DEFINE_HANDLECLASS

#include <Standard_Handle.hxx>

#define DEFINE_HANDLECLASS(C1) class C1; class handle_##C1 \
{ \
public: \
  handle_##C1() {hobj = nullptr;} \
  handle_##C1(C1 *theobj) {hobj = new opencascade::handle< C1 >(theobj);} \
  ~handle_##C1() {if (hobj != nullptr) delete hobj;} \
  C1 *get() {return hobj->get();} \
  bool IsNull(void) {return hobj->IsNull();} \
  void Nullify() {hobj->Nullify(); hobj = nullptr;} \
  opencascade::handle< C1 >* get_handle() {return hobj;} \
  static C1 *get(void* handle) {return dynamic_cast<C1*>(static_cast<opencascade::handle< C1 >*>(handle)->get());} \
  static bool IsNull(void* handle) {return static_cast<opencascade::handle< C1 >*>(handle)->IsNull();} \
  static void Nullify(void* handle) {static_cast<opencascade::handle< C1 >*>(handle)->Nullify();} \
private: \
  opencascade::handle< C1 >* hobj; \
};

#endif

