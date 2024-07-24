#include <AppStdL_Application.hxx>
#include <TDF.hxx>
#include <TDF_Attribute.hxx>
#include <TDF_AttributeDelta.hxx>
#include <TDF_AttributeIterator.hxx>
#include <TDF_ChildIDIterator.hxx>
#include <TDF_ChildIterator.hxx>
#include <TDF_ClosureMode.hxx>
#include <TDF_ClosureTool.hxx>
#include <TDF_ComparisonTool.hxx>
#include <TDF_CopyLabel.hxx>
#include <TDF_CopyTool.hxx>
#include <TDF_Data.hxx>
#include <TDF_DataSet.hxx>
#include <TDF_DefaultDeltaOnModification.hxx>
#include <TDF_DefaultDeltaOnRemoval.hxx>
#include <TDF_Delta.hxx>
#include <TDF_DeltaOnAddition.hxx>
#include <TDF_DeltaOnForget.hxx>
#include <TDF_DeltaOnModification.hxx>
#include <TDF_DeltaOnRemoval.hxx>
#include <TDF_DeltaOnResume.hxx>
#include <TDF_DerivedAttribute.hxx>
#include <TDF_IDFilter.hxx>
#include <TDF_Label.hxx>
#include <TDF_LabelNode.hxx>
#include <TDF_Reference.hxx>
#include <TDF_RelocationTable.hxx>
#include <TDF_TagSource.hxx>
#include <TDF_Tool.hxx>
#include <TDF_Transaction.hxx>
#include <TDataStd.hxx>
#include <TDataStd_AsciiString.hxx>
#include <TDataStd_BooleanArray.hxx>
#include <TDataStd_BooleanList.hxx>
#include <TDataStd_ByteArray.hxx>
#include <TDataStd_ChildNodeIterator.hxx>
#include <TDataStd_Comment.hxx>
#include <TDataStd_Current.hxx>
#include <TDataStd_DeltaOnModificationOfByteArray.hxx>
#include <TDataStd_DeltaOnModificationOfExtStringArray.hxx>
#include <TDataStd_DeltaOnModificationOfIntArray.hxx>
#include <TDataStd_DeltaOnModificationOfIntPackedMap.hxx>
#include <TDataStd_DeltaOnModificationOfRealArray.hxx>
#include <TDataStd_Directory.hxx>
#include <TDataStd_Expression.hxx>
#include <TDataStd_ExtStringArray.hxx>
#include <TDataStd_ExtStringList.hxx>
#include <TDataStd_GenericEmpty.hxx>
#include <TDataStd_GenericExtString.hxx>
#include <TDataStd_HDataMapOfStringByte.hxx>
#include <TDataStd_HDataMapOfStringHArray1OfInteger.hxx>
#include <TDataStd_HDataMapOfStringHArray1OfReal.hxx>
#include <TDataStd_HDataMapOfStringInteger.hxx>
#include <TDataStd_HDataMapOfStringReal.hxx>
#include <TDataStd_HDataMapOfStringString.hxx>
#include <TDataStd_Integer.hxx>
#include <TDataStd_IntegerArray.hxx>
#include <TDataStd_IntegerList.hxx>
#include <TDataStd_IntPackedMap.hxx>
#include <TDataStd_Name.hxx>
#include <TDataStd_NamedData.hxx>
#include <TDataStd_NoteBook.hxx>
#include <TDataStd_Real.hxx>
#include <TDataStd_RealArray.hxx>
#include <TDataStd_RealList.hxx>
#include <TDataStd_ReferenceArray.hxx>
#include <TDataStd_ReferenceList.hxx>
#include <TDataStd_Relation.hxx>
#include <TDataStd_Tick.hxx>
#include <TDataStd_TreeNode.hxx>
#include <TDataStd_UAttribute.hxx>
#include <TDataStd_Variable.hxx>
#include <TDocStd.hxx>
#include <TDocStd_Application.hxx>
#include <TDocStd_ApplicationDelta.hxx>
#include <TDocStd_CompoundDelta.hxx>
#include <TDocStd_Context.hxx>
#include <TDocStd_Document.hxx>
#include <TDocStd_Modified.hxx>
#include <TDocStd_MultiTransactionManager.hxx>
#include <TDocStd_Owner.hxx>
#include <TDocStd_PathParser.hxx>
#include <TDocStd_XLink.hxx>
#include <TDocStd_XLinkIterator.hxx>
#include <TDocStd_XLinkRoot.hxx>
#include <TDocStd_XLinkTool.hxx>
#include <TFunction_Driver.hxx>
#include <TFunction_DriverTable.hxx>
#include <TFunction_Function.hxx>
#include <TFunction_GraphNode.hxx>
#include <TFunction_IFunction.hxx>
#include <TFunction_Iterator.hxx>
#include <TFunction_Logbook.hxx>
#include <TFunction_Scope.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(AppStdL_Application)
DEFINE_HANDLECLASS(TDF_Attribute)
DEFINE_HANDLECLASS(TDF_AttributeDelta)
DEFINE_HANDLECLASS(TDF_Data)
DEFINE_HANDLECLASS(TDF_DataSet)
DEFINE_HANDLECLASS(TDF_DefaultDeltaOnModification)
DEFINE_HANDLECLASS(TDF_DefaultDeltaOnRemoval)
DEFINE_HANDLECLASS(TDF_Delta)
DEFINE_HANDLECLASS(TDF_DeltaOnAddition)
DEFINE_HANDLECLASS(TDF_DeltaOnForget)
DEFINE_HANDLECLASS(TDF_DeltaOnModification)
DEFINE_HANDLECLASS(TDF_DeltaOnRemoval)
DEFINE_HANDLECLASS(TDF_DeltaOnResume)
DEFINE_HANDLECLASS(TDF_Reference)
DEFINE_HANDLECLASS(TDF_RelocationTable)
DEFINE_HANDLECLASS(TDF_TagSource)
DEFINE_HANDLECLASS(TDataStd_AsciiString)
DEFINE_HANDLECLASS(TDataStd_BooleanArray)
DEFINE_HANDLECLASS(TDataStd_BooleanList)
DEFINE_HANDLECLASS(TDataStd_ByteArray)
DEFINE_HANDLECLASS(TDataStd_Current)
DEFINE_HANDLECLASS(TDataStd_DeltaOnModificationOfByteArray)
DEFINE_HANDLECLASS(TDataStd_DeltaOnModificationOfExtStringArray)
DEFINE_HANDLECLASS(TDataStd_DeltaOnModificationOfIntArray)
DEFINE_HANDLECLASS(TDataStd_DeltaOnModificationOfIntPackedMap)
DEFINE_HANDLECLASS(TDataStd_DeltaOnModificationOfRealArray)
DEFINE_HANDLECLASS(TDataStd_Directory)
DEFINE_HANDLECLASS(TDataStd_Expression)
DEFINE_HANDLECLASS(TDataStd_ExtStringArray)
DEFINE_HANDLECLASS(TDataStd_ExtStringList)
DEFINE_HANDLECLASS(TDataStd_GenericEmpty)
DEFINE_HANDLECLASS(TDataStd_GenericExtString)
DEFINE_HANDLECLASS(TDataStd_HDataMapOfStringByte)
DEFINE_HANDLECLASS(TDataStd_HDataMapOfStringHArray1OfInteger)
DEFINE_HANDLECLASS(TDataStd_HDataMapOfStringHArray1OfReal)
DEFINE_HANDLECLASS(TDataStd_HDataMapOfStringInteger)
DEFINE_HANDLECLASS(TDataStd_HDataMapOfStringReal)
DEFINE_HANDLECLASS(TDataStd_HDataMapOfStringString)
DEFINE_HANDLECLASS(TDataStd_Integer)
DEFINE_HANDLECLASS(TDataStd_IntegerArray)
DEFINE_HANDLECLASS(TDataStd_IntegerList)
DEFINE_HANDLECLASS(TDataStd_IntPackedMap)
DEFINE_HANDLECLASS(TDataStd_Name)
DEFINE_HANDLECLASS(TDataStd_NamedData)
DEFINE_HANDLECLASS(TDataStd_NoteBook)
DEFINE_HANDLECLASS(TDataStd_Real)
DEFINE_HANDLECLASS(TDataStd_RealArray)
DEFINE_HANDLECLASS(TDataStd_RealList)
DEFINE_HANDLECLASS(TDataStd_ReferenceArray)
DEFINE_HANDLECLASS(TDataStd_ReferenceList)
DEFINE_HANDLECLASS(TDataStd_Relation)
DEFINE_HANDLECLASS(TDataStd_Tick)
DEFINE_HANDLECLASS(TDataStd_TreeNode)
DEFINE_HANDLECLASS(TDataStd_UAttribute)
DEFINE_HANDLECLASS(TDataStd_Variable)
DEFINE_HANDLECLASS(TDocStd_Application)
DEFINE_HANDLECLASS(TDocStd_ApplicationDelta)
DEFINE_HANDLECLASS(TDocStd_CompoundDelta)
DEFINE_HANDLECLASS(TDocStd_Document)
DEFINE_HANDLECLASS(TDocStd_Modified)
DEFINE_HANDLECLASS(TDocStd_MultiTransactionManager)
DEFINE_HANDLECLASS(TDocStd_Owner)
DEFINE_HANDLECLASS(TDocStd_XLink)
DEFINE_HANDLECLASS(TDocStd_XLinkRoot)
DEFINE_HANDLECLASS(TFunction_Driver)
DEFINE_HANDLECLASS(TFunction_DriverTable)
DEFINE_HANDLECLASS(TFunction_Function)
DEFINE_HANDLECLASS(TFunction_GraphNode)
DEFINE_HANDLECLASS(TFunction_Logbook)
DEFINE_HANDLECLASS(TFunction_Scope)

