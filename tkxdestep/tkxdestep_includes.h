#include <STEPCAFControl_ActorWrite.hxx>
#include <STEPCAFControl_ConfigurationNode.hxx>
#include <STEPCAFControl_Controller.hxx>
#include <STEPCAFControl_DataMapIteratorOfDataMapOfLabelExternFile.hxx>
#include <STEPCAFControl_DataMapIteratorOfDataMapOfLabelShape.hxx>
#include <STEPCAFControl_DataMapIteratorOfDataMapOfPDExternFile.hxx>
#include <STEPCAFControl_DataMapIteratorOfDataMapOfSDRExternFile.hxx>
#include <STEPCAFControl_DataMapIteratorOfDataMapOfShapePD.hxx>
#include <STEPCAFControl_DataMapIteratorOfDataMapOfShapeSDR.hxx>
#include <STEPCAFControl_DataMapOfLabelExternFile.hxx>
#include <STEPCAFControl_DataMapOfLabelShape.hxx>
#include <STEPCAFControl_DataMapOfPDExternFile.hxx>
#include <STEPCAFControl_DataMapOfSDRExternFile.hxx>
#include <STEPCAFControl_DataMapOfShapePD.hxx>
#include <STEPCAFControl_DataMapOfShapeSDR.hxx>
#include <STEPCAFControl_ExternFile.hxx>
#include <STEPCAFControl_GDTProperty.hxx>
#include <STEPCAFControl_Provider.hxx>
#include <STEPCAFControl_Reader.hxx>
#include <STEPCAFControl_Writer.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(STEPCAFControl_ActorWrite)
DEFINE_HANDLECLASS(STEPCAFControl_Controller)
DEFINE_HANDLECLASS(STEPCAFControl_ExternFile)
