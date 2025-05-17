#include <gp.hxx>
#include <gp_XY.hxx>
#include <gp_XYZ.hxx>


#include <FSD_Base64.hxx>
#include <FSD_BinaryFile.hxx>
#include <FSD_CmpFile.hxx>
#include <FSD_File.hxx>
#include <Message.hxx>
#include <Message_Alert.hxx>
#include <Message_AlertExtended.hxx>
#include <Message_Algorithm.hxx>
#include <Message_Attribute.hxx>
#include <Message_AttributeMeter.hxx>
#include <Message_AttributeObject.hxx>
#include <Message_AttributeStream.hxx>
#include <Message_CompositeAlerts.hxx>
#include <Message_ExecStatus.hxx>
#include <Message_LazyProgressScope.hxx>
#include <Message_Level.hxx>
#include <Message_Messenger.hxx>
#include <Message_Msg.hxx>
#include <Message_MsgFile.hxx>
#include <Message_Printer.hxx>
#include <Message_PrinterOStream.hxx>
#include <Message_PrinterSystemLog.hxx>
#include <Message_PrinterToReport.hxx>
#include <Message_ProgressIndicator.hxx>
#include <Message_ProgressRange.hxx>
#include <Message_ProgressScope.hxx>
#include <Message_ProgressSentry.hxx>
#include <Message_Report.hxx>
#include <NCollection_AccAllocator.hxx>
#include <NCollection_AliasedArray.hxx>
#include <NCollection_AlignedAllocator.hxx>
#include <NCollection_Array1.hxx>
#include <NCollection_Array2.hxx>
#include <NCollection_BaseAllocator.hxx>
#include <NCollection_BaseList.hxx>
#include <NCollection_BaseMap.hxx>
#include <NCollection_BaseSequence.hxx>
#include <NCollection_Buffer.hxx>
#include <NCollection_CellFilter.hxx>
#include <NCollection_DataMap.hxx>
#include <NCollection_DefaultHasher.hxx>
#include <NCollection_DoubleMap.hxx>
#include <NCollection_EBTree.hxx>
#include <NCollection_Handle.hxx>
#include <NCollection_HeapAllocator.hxx>
#include <NCollection_IncAllocator.hxx>
#include <NCollection_IndexedDataMap.hxx>
#include <NCollection_IndexedMap.hxx>
#include <NCollection_Lerp.hxx>
#include <NCollection_List.hxx>
#include <NCollection_ListNode.hxx>
#include <NCollection_LocalArray.hxx>
#include <NCollection_Map.hxx>
#include <NCollection_Mat3.hxx>
#include <NCollection_Mat4.hxx>
#include <NCollection_Sequence.hxx>
#include <NCollection_Shared.hxx>
#include <NCollection_SparseArray.hxx>
#include <NCollection_StlIterator.hxx>
#include <NCollection_TListIterator.hxx>
#include <NCollection_TListNode.hxx>
#include <NCollection_UBTree.hxx>
#include <NCollection_UBTreeFiller.hxx>
#include <NCollection_UtfIterator.hxx>
#include <NCollection_UtfString.hxx>
#include <NCollection_Vec2.hxx>
#include <NCollection_Vec3.hxx>
#include <NCollection_Vec4.hxx>
#include <NCollection_Vector.hxx>
#include <OSD.hxx>
#include <OSD_CachedFileSystem.hxx>
#include <OSD_Chronometer.hxx>
#include <OSD_Directory.hxx>
#include <OSD_DirectoryIterator.hxx>
#include <OSD_Disk.hxx>
#include <OSD_Environment.hxx>
#include <OSD_Error.hxx>
#include <OSD_File.hxx>
#include <OSD_FileIterator.hxx>
#include <OSD_FileNode.hxx>
#include <OSD_FileSystem.hxx>
#include <OSD_FileSystemSelector.hxx>
#include <OSD_Host.hxx>
#include <OSD_LocalFileSystem.hxx>
#include <OSD_MAllocHook.hxx>
#include <OSD_MemInfo.hxx>
#include <OSD_OpenFile.hxx>
#include <OSD_OSDError.hxx>
#include <OSD_Parallel.hxx>
#include <OSD_Path.hxx>
#include <OSD_PerfMeter.hxx>
#include <OSD_Process.hxx>
#include <OSD_Protection.hxx>
#include <OSD_SharedLibrary.hxx>
#include <OSD_StreamBuffer.hxx>
#include <OSD_Thread.hxx>
#include <OSD_ThreadPool.hxx>
#include <OSD_Timer.hxx>
#include <Plugin.hxx>
#include <Plugin_DataMapIteratorOfMapOfFunctions.hxx>
#include <Quantity_Color.hxx>
#include <Quantity_ColorRGBA.hxx>
#include <Quantity_Date.hxx>
#include <Quantity_Period.hxx>
#include <Resource_LexicalCompare.hxx>
#include <Resource_Manager.hxx>
#include <Resource_Unicode.hxx>
#include <Standard.hxx>
#include <Standard_ArrayStreamBuffer.hxx>
#include <Standard_Byte.hxx>
#include <Standard_Character.hxx>
#include <Standard_CLocaleSentry.hxx>
#include <Standard_Condition.hxx>
#include <Standard_CString.hxx>
#include <Standard_CStringHasher.hxx>
#include <Standard_Dump.hxx>
#include <Standard_ErrorHandler.hxx>
#include <Standard_ExtCharacter.hxx>
#include <Standard_Failure.hxx>
#include <Standard_GUID.hxx>
#include <Standard_Integer.hxx>
#include <Standard_MMgrOpt.hxx>
#include <Standard_MMgrRoot.hxx>
#include <Standard_Mutex.hxx>
#include <Standard_ProgramError.hxx>
#include <Standard_OutOfMemory.hxx>
#include <Standard_Persistent.hxx>
#include <Standard_ReadBuffer.hxx>
#include <Standard_ReadLineBuffer.hxx>
#include <Standard_Real.hxx>
#include <Standard_ShortReal.hxx>
#include <Standard_Time.hxx>
#include <Standard_Transient.hxx>
#include <Standard_Type.hxx>
#include <Storage.hxx>
#include <Storage_BaseDriver.hxx>
#include <Storage_BucketOfPersistent.hxx>
#include <Storage_CallBack.hxx>
#include <Storage_Data.hxx>
#include <Storage_DataMapIteratorOfMapOfCallBack.hxx>
#include <Storage_DataMapIteratorOfMapOfPers.hxx>
#include <Storage_DefaultCallBack.hxx>
#include <Storage_HeaderData.hxx>
#include <Storage_InternalData.hxx>
#include <Storage_Root.hxx>
#include <Storage_RootData.hxx>
#include <Storage_Schema.hxx>
#include <Storage_TypeData.hxx>
#include <Storage_TypedCallBack.hxx>
#include <TColStd_MapIteratorOfMapOfInteger.hxx>
#include <TColStd_MapIteratorOfMapOfReal.hxx>
#include <TColStd_MapIteratorOfMapOfTransient.hxx>
#include <TColStd_PackedMapOfInteger.hxx>
#include <TCollection.hxx>
#include <TCollection_AsciiString.hxx>
#include <TCollection_ExtendedString.hxx>
#include <TCollection_HAsciiString.hxx>
#include <TCollection_HExtendedString.hxx>
#include <Units.hxx>
#include <Units_Dimensions.hxx>
#include <Units_Explorer.hxx>
#include <Units_Lexicon.hxx>
#include <Units_MathSentence.hxx>
#include <Units_Measurement.hxx>
#include <Units_Quantity.hxx>
#include <Units_Sentence.hxx>
#include <Units_ShiftedToken.hxx>
#include <Units_ShiftedUnit.hxx>
#include <Units_Token.hxx>
#include <Units_Unit.hxx>
#include <Units_UnitsDictionary.hxx>
#include <Units_UnitSentence.hxx>
#include <Units_UnitsLexicon.hxx>
#include <Units_UnitsSystem.hxx>
#include <UnitsAPI.hxx>
#include <UnitsMethods.hxx>

#include <OSD_Signal.hxx>
#include <Plugin_Failure.hxx>
#include <Quantity_DateDefinitionError.hxx>
#include <Quantity_PeriodDefinitionError.hxx>
#include <Resource_NoSuchResource.hxx>
#include <Standard_ConstructionError.hxx>
#include <Standard_DimensionError.hxx>
#include <Standard_DimensionMismatch.hxx>
#include <Standard_DivideByZero.hxx>
#include <Standard_DomainError.hxx>
#include <Standard_ImmutableObject.hxx>
#include <Standard_MultiplyDefined.hxx>
#include <Standard_NegativeValue.hxx>
#include <Standard_NoMoreObject.hxx>
#include <Standard_NoSuchObject.hxx>
#include <Standard_NotImplemented.hxx>
#include <Standard_NullObject.hxx>
#include <Standard_NullValue.hxx>
#include <Standard_NumericError.hxx>
#include <Standard_OutOfRange.hxx>
#include <Standard_Overflow.hxx>
#include <Standard_ProgramError.hxx>
#include <Standard_RangeError.hxx>
#include <Standard_TypeMismatch.hxx>
#include <Standard_Underflow.hxx>
#include <StdFail_InfiniteSolutions.hxx>
#include <StdFail_NotDone.hxx>
#include <StdFail_Undefined.hxx>
#include <StdFail_UndefinedDerivative.hxx>
#include <StdFail_UndefinedValue.hxx>
#include <Storage_StreamExtCharParityError.hxx>
#include <Storage_StreamFormatError.hxx>
#include <Storage_StreamModeError.hxx>
#include <Storage_StreamReadError.hxx>
#include <Storage_StreamTypeMismatchError.hxx>
#include <Storage_StreamUnknownTypeError.hxx>
#include <Storage_StreamWriteError.hxx>
#include <Units_NoSuchType.hxx>
#include <Units_NoSuchUnit.hxx>

#include <../handle.h>
#include <define_ncollection_secuence.hxx>

//#pragma message(DEFINE_NCOLLECTION_SEQUENCE(TColgp_Sequence,gp_Pnt2d),Pnt2d)
DEFINE_NCOLLECTION_SEQUENCE(TColgp_Sequence,gp_Pnt2d,Pnt2d)
DEFINE_NCOLLECTION_SEQUENCE(TColStd_Sequence,Standard_Real,Real)
DEFINE_NCOLLECTION_SEQUENCE(TColStd_Sequence,Standard_Integer,Integer)

#include <NCollection_IndexedDataMap.hxx>
#include <TColStd_IndexedDataMapOfStringString.hxx>

class Make_TColStd_IndexedDataMapOfStringString {
public:
  Make_TColStd_IndexedDataMapOfStringString(void)
  {
    IndexedDataMapOfStringString = new TColStd_IndexedDataMapOfStringString();
  }
   
  ~Make_TColStd_IndexedDataMapOfStringString(void)
  {
    delete IndexedDataMapOfStringString;
  }
  
  TColStd_IndexedDataMapOfStringString *get(void)
  { 
    return IndexedDataMapOfStringString;
  }
  
  Standard_Integer Add (TCollection_AsciiString& theKey1, TCollection_AsciiString& theItem)
  {
    return IndexedDataMapOfStringString->Add(theKey1, theItem);
  }
  
  Standard_Boolean Contains (TCollection_AsciiString &theKey1)  
  {
    return IndexedDataMapOfStringString->Contains(theKey1);
  }
     
private:
  TColStd_IndexedDataMapOfStringString *IndexedDataMapOfStringString;
};

class TColStd_IndexedDataMapOfStringString_Iterator {
public:
  TColStd_IndexedDataMapOfStringString_Iterator(TColStd_IndexedDataMapOfStringString &IndexedDataMapOfStringString)
  {
    Indexed = new TColStd_IndexedDataMapOfStringString::Iterator(IndexedDataMapOfStringString);
  }
  
  ~TColStd_IndexedDataMapOfStringString_Iterator(void)
  {
    delete Indexed;
  }  
  
  TCollection_AsciiString *Value(void)
  {
    return (TCollection_AsciiString*)&Indexed->Value();
  }
  
  Standard_Boolean More(void)
  {
    return Indexed->More();
  }
  
  void Next(void)
  {
    return Indexed->Next();
  }
  
  const TCollection_AsciiString &Key(void)
  {
    return Indexed->Key();
  }
  
private:
  TColStd_IndexedDataMapOfStringString::Iterator *Indexed;
};

