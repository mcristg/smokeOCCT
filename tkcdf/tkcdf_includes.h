#include <CDF_Application.hxx>
#include <CDF_Directory.hxx>
#include <CDF_DirectoryIterator.hxx>
#include <CDF_FWOSDriver.hxx>
#include <CDF_MetaDataDriver.hxx>
#include <CDF_MetaDataDriverFactory.hxx>
#include <CDF_Store.hxx>
#include <CDF_StoreList.hxx>
#include <CDM_Application.hxx>
#include <CDM_Document.hxx>
#include <CDM_MetaData.hxx>
#include <CDM_Reference.hxx>
#include <CDM_ReferenceIterator.hxx>
#include <LDOMParser.hxx>
#include <LDOM_Attr.hxx>
#include <LDOM_BasicElement.hxx>
#include <LDOM_BasicNode.hxx>
#include <LDOM_BasicText.hxx>
#include <LDOM_CDATASection.hxx>
#include <LDOM_CharacterData.hxx>
#include <LDOM_CharReference.hxx>
#include <LDOM_Comment.hxx>
#include <LDOM_Document.hxx>
#include <LDOM_DocumentType.hxx>
#include <LDOM_Element.hxx>
#include <LDOM_LDOMImplementation.hxx>
#include <LDOM_MemManager.hxx>
#include <LDOM_Node.hxx>
#include <LDOM_NodeList.hxx>
#include <LDOM_OSStream.hxx>
#include <LDOM_Text.hxx>
#include <LDOM_XmlReader.hxx>
#include <LDOM_XmlWriter.hxx>
#include <PCDM_Document.hxx>
#include <PCDM_DOMHeaderParser.hxx>
#include <PCDM_Reader.hxx>
#include <PCDM_ReaderFilter.hxx>
#include <PCDM_ReadWriter.hxx>
#include <PCDM_ReadWriter_1.hxx>
#include <PCDM_Reference.hxx>
#include <PCDM_ReferenceIterator.hxx>
#include <PCDM_RetrievalDriver.hxx>
#include <PCDM_StorageDriver.hxx>
#include <PCDM_Writer.hxx>
#include <UTL.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(CDF_Application)
DEFINE_HANDLECLASS(CDF_Directory)
DEFINE_HANDLECLASS(CDF_FWOSDriver)
DEFINE_HANDLECLASS(CDF_MetaDataDriver)
DEFINE_HANDLECLASS(CDF_MetaDataDriverFactory)
DEFINE_HANDLECLASS(CDF_StoreList)
DEFINE_HANDLECLASS(CDM_Application)
DEFINE_HANDLECLASS(CDM_Document)
DEFINE_HANDLECLASS(CDM_MetaData)
DEFINE_HANDLECLASS(CDM_Reference)
DEFINE_HANDLECLASS(LDOM_MemManager)
DEFINE_HANDLECLASS(PCDM_Document)
DEFINE_HANDLECLASS(PCDM_Reader)
DEFINE_HANDLECLASS(PCDM_ReaderFilter)
DEFINE_HANDLECLASS(PCDM_ReadWriter)
DEFINE_HANDLECLASS(PCDM_ReadWriter_1)
DEFINE_HANDLECLASS(PCDM_ReferenceIterator)
DEFINE_HANDLECLASS(PCDM_RetrievalDriver)
DEFINE_HANDLECLASS(PCDM_StorageDriver)
DEFINE_HANDLECLASS(PCDM_Writer)







