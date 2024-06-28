#include <BinLDrivers.hxx>
#include <BinLDrivers_DocumentRetrievalDriver.hxx>
#include <BinLDrivers_DocumentSection.hxx>
#include <BinLDrivers_DocumentStorageDriver.hxx>
#include <BinMDF.hxx>
#include <BinMDF_ADriver.hxx>
#include <BinMDF_ADriverTable.hxx>
#include <BinMDF_DerivedDriver.hxx>
#include <BinMDF_ReferenceDriver.hxx>
#include <BinMDF_TagSourceDriver.hxx>
#include <BinMDataStd.hxx>
#include <BinMDataStd_AsciiStringDriver.hxx>
#include <BinMDataStd_BooleanArrayDriver.hxx>
#include <BinMDataStd_BooleanListDriver.hxx>
#include <BinMDataStd_ByteArrayDriver.hxx>
#include <BinMDataStd_ExpressionDriver.hxx>
#include <BinMDataStd_ExtStringArrayDriver.hxx>
#include <BinMDataStd_ExtStringListDriver.hxx>
#include <BinMDataStd_GenericEmptyDriver.hxx>
#include <BinMDataStd_GenericExtStringDriver.hxx>
#include <BinMDataStd_IntegerArrayDriver.hxx>
#include <BinMDataStd_IntegerDriver.hxx>
#include <BinMDataStd_IntegerListDriver.hxx>
#include <BinMDataStd_IntPackedMapDriver.hxx>
#include <BinMDataStd_NamedDataDriver.hxx>
#include <BinMDataStd_RealArrayDriver.hxx>
#include <BinMDataStd_RealDriver.hxx>
#include <BinMDataStd_RealListDriver.hxx>
#include <BinMDataStd_ReferenceArrayDriver.hxx>
#include <BinMDataStd_ReferenceListDriver.hxx>
#include <BinMDataStd_TreeNodeDriver.hxx>
#include <BinMDataStd_UAttributeDriver.hxx>
#include <BinMDataStd_VariableDriver.hxx>
#include <BinMDocStd.hxx>
#include <BinMDocStd_XLinkDriver.hxx>
#include <BinMFunction.hxx>
#include <BinMFunction_FunctionDriver.hxx>
#include <BinMFunction_GraphNodeDriver.hxx>
#include <BinMFunction_ScopeDriver.hxx>
#include <BinObjMgt_Persistent.hxx>
#include <BinObjMgt_Position.hxx>
#include <BinObjMgt_RRelocationTable.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(BinLDrivers_DocumentRetrievalDriver)
DEFINE_HANDLECLASS(BinLDrivers_DocumentStorageDriver)
DEFINE_HANDLECLASS(BinMDF_ADriver)
DEFINE_HANDLECLASS(BinMDF_ADriverTable)
DEFINE_HANDLECLASS(BinMDF_ReferenceDriver)
DEFINE_HANDLECLASS(BinMDF_TagSourceDriver)
DEFINE_HANDLECLASS(BinMDataStd_AsciiStringDriver)
DEFINE_HANDLECLASS(BinMDataStd_BooleanArrayDriver)
DEFINE_HANDLECLASS(BinMDataStd_BooleanListDriver)
DEFINE_HANDLECLASS(BinMDataStd_ByteArrayDriver)
DEFINE_HANDLECLASS(BinMDataStd_ExpressionDriver)
DEFINE_HANDLECLASS(BinMDataStd_ExtStringArrayDriver)
DEFINE_HANDLECLASS(BinMDataStd_ExtStringListDriver)
DEFINE_HANDLECLASS(BinMDataStd_GenericEmptyDriver)
DEFINE_HANDLECLASS(BinMDataStd_GenericExtStringDriver)
DEFINE_HANDLECLASS(BinMDataStd_IntegerArrayDriver)
DEFINE_HANDLECLASS(BinMDataStd_IntegerDriver)
DEFINE_HANDLECLASS(BinMDataStd_IntegerListDriver)
DEFINE_HANDLECLASS(BinMDataStd_IntPackedMapDriver)
DEFINE_HANDLECLASS(BinMDataStd_NamedDataDriver)
DEFINE_HANDLECLASS(BinMDataStd_RealArrayDriver)
DEFINE_HANDLECLASS(BinMDataStd_RealDriver)
DEFINE_HANDLECLASS(BinMDataStd_RealListDriver)
DEFINE_HANDLECLASS(BinMDataStd_ReferenceArrayDriver)
DEFINE_HANDLECLASS(BinMDataStd_ReferenceListDriver)
DEFINE_HANDLECLASS(BinMDataStd_TreeNodeDriver)
DEFINE_HANDLECLASS(BinMDataStd_UAttributeDriver)
DEFINE_HANDLECLASS(BinMDataStd_VariableDriver)
DEFINE_HANDLECLASS(BinMDocStd_XLinkDriver)
DEFINE_HANDLECLASS(BinMFunction_FunctionDriver)
DEFINE_HANDLECLASS(BinMFunction_GraphNodeDriver)
DEFINE_HANDLECLASS(BinMFunction_ScopeDriver)
DEFINE_HANDLECLASS(BinObjMgt_Position)

