#ifndef _DEFINE_HANDLECLASS
#define _DEFINE_HANDLECLASS

#include <Standard_Handle.hxx>

#define DEFINE_HANDLECLASS(C1) class C1; class handle_##C1 \
{ \
public: \
  handle_##C1() {hobj = nullptr;} \
  handle_##C1(C1 *theobj) {hobj = new opencascade::handle< C1 >(theobj);} \
  C1 *get() {return hobj->get();} \
  static C1 *get(void* handle) {return dynamic_cast<C1*>(static_cast<opencascade::handle< C1 >*>(handle)->get());} \
  opencascade::handle< C1 >* get_handle() {return hobj;} \
  ~handle_##C1() {if (hobj != nullptr) delete hobj;} \
private: \
  opencascade::handle< C1 >* hobj; \
};

#endif

