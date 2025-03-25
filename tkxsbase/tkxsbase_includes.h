#include <IFGraph_AllConnected.hxx>
#include <IFGraph_AllShared.hxx>
#include <IFGraph_Articulations.hxx>
#include <IFGraph_Compare.hxx>
#include <IFGraph_ConnectedComponants.hxx>
#include <IFGraph_Cumulate.hxx>
#include <IFGraph_Cycles.hxx>
#include <IFGraph_ExternalSources.hxx>
#include <IFGraph_SCRoots.hxx>
#include <IFGraph_StrongComponants.hxx>
#include <IFGraph_SubPartsIterator.hxx>
#include <IFSelect.hxx>
#include <IFSelect_Act.hxx>
#include <IFSelect_Activator.hxx>
#include <IFSelect_AppliedModifiers.hxx>
#include <IFSelect_BasicDumper.hxx>
#include <IFSelect_CheckCounter.hxx>
#include <IFSelect_ContextModif.hxx>
#include <IFSelect_ContextWrite.hxx>
#include <IFSelect_Dispatch.hxx>
#include <IFSelect_DispGlobal.hxx>
#include <IFSelect_DispPerCount.hxx>
#include <IFSelect_DispPerFiles.hxx>
#include <IFSelect_DispPerOne.hxx>
#include <IFSelect_DispPerSignature.hxx>
#include <IFSelect_EditForm.hxx>
#include <IFSelect_Editor.hxx>
#include <IFSelect_Functions.hxx>
#include <IFSelect_GeneralModifier.hxx>
#include <IFSelect_GraphCounter.hxx>
#include <IFSelect_IntParam.hxx>
#include <IFSelect_ListEditor.hxx>
#include <IFSelect_ModelCopier.hxx>
#include <IFSelect_ModifEditForm.hxx>
#include <IFSelect_Modifier.hxx>
#include <IFSelect_ModifReorder.hxx>
#include <IFSelect_PacketList.hxx>
#include <IFSelect_ParamEditor.hxx>
#include <IFSelect_SelectAnyList.hxx>
#include <IFSelect_SelectAnyType.hxx>
#include <IFSelect_SelectBase.hxx>
#include <IFSelect_SelectCombine.hxx>
#include <IFSelect_SelectControl.hxx>
#include <IFSelect_SelectDeduct.hxx>
#include <IFSelect_SelectDiff.hxx>
#include <IFSelect_SelectEntityNumber.hxx>
#include <IFSelect_SelectErrorEntities.hxx>
#include <IFSelect_SelectExplore.hxx>
#include <IFSelect_SelectExtract.hxx>
#include <IFSelect_SelectFlag.hxx>
#include <IFSelect_SelectIncorrectEntities.hxx>
#include <IFSelect_SelectInList.hxx>
#include <IFSelect_SelectIntersection.hxx>
#include <IFSelect_Selection.hxx>
#include <IFSelect_SelectionIterator.hxx>
#include <IFSelect_SelectModelEntities.hxx>
#include <IFSelect_SelectModelRoots.hxx>
#include <IFSelect_SelectPointed.hxx>
#include <IFSelect_SelectRange.hxx>
#include <IFSelect_SelectRootComps.hxx>
#include <IFSelect_SelectRoots.hxx>
#include <IFSelect_SelectSent.hxx>
#include <IFSelect_SelectShared.hxx>
#include <IFSelect_SelectSharing.hxx>
#include <IFSelect_SelectSignature.hxx>
#include <IFSelect_SelectSignedShared.hxx>
#include <IFSelect_SelectSignedSharing.hxx>
#include <IFSelect_SelectSuite.hxx>
#include <IFSelect_SelectType.hxx>
#include <IFSelect_SelectUnion.hxx>
#include <IFSelect_SelectUnknownEntities.hxx>
#include <IFSelect_SessionDumper.hxx>
#include <IFSelect_SessionFile.hxx>
#include <IFSelect_SessionPilot.hxx>
#include <IFSelect_ShareOut.hxx>
#include <IFSelect_ShareOutResult.hxx>
#include <IFSelect_SignAncestor.hxx>
#include <IFSelect_Signature.hxx>
#include <IFSelect_SignatureList.hxx>
#include <IFSelect_SignCategory.hxx>
#include <IFSelect_SignCounter.hxx>
#include <IFSelect_SignMultiple.hxx>
#include <IFSelect_SignType.hxx>
#include <IFSelect_SignValidity.hxx>
#include <IFSelect_Transformer.hxx>
#include <IFSelect_TransformStandard.hxx>
#include <IFSelect_WorkLibrary.hxx>
#include <IFSelect_WorkSession.hxx>
#include <Interface_BitMap.hxx>
#include <Interface_Category.hxx>
#include <Interface_Check.hxx>
#include <Interface_CheckIterator.hxx>
#include <Interface_CheckTool.hxx>
#include <Interface_CopyControl.hxx>
#include <Interface_CopyMap.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_EntityCluster.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_EntityList.hxx>
#include <Interface_FileParameter.hxx>
#include <Interface_FileReaderData.hxx>
#include <Interface_FileReaderTool.hxx>
#include <Interface_FloatWriter.hxx>
#include <Interface_GeneralLib.hxx>
#include <Interface_GeneralModule.hxx>
#include <Interface_GlobalNodeOfGeneralLib.hxx>
#include <Interface_GlobalNodeOfReaderLib.hxx>
#include <Interface_Graph.hxx>
#include <Interface_GraphContent.hxx>
#include <Interface_GTool.hxx>
#include <Interface_HGraph.hxx>
#include <Interface_InterfaceModel.hxx>
#include <Interface_IntList.hxx>
#include <Interface_IntVal.hxx>
#include <Interface_LineBuffer.hxx>
#include <Interface_MSG.hxx>
#include <Interface_NodeOfGeneralLib.hxx>
#include <Interface_NodeOfReaderLib.hxx>
#include <Interface_ParamList.hxx>
#include <Interface_ParamSet.hxx>
#include <Interface_Protocol.hxx>
#include <Interface_ReaderLib.hxx>
#include <Interface_ReaderModule.hxx>
#include <Interface_ReportEntity.hxx>
#include <Interface_ShareFlags.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_SignLabel.hxx>
#include <Interface_SignType.hxx>
#include <Interface_STAT.hxx>
#include <Interface_Static.hxx>
#include <Interface_TypedValue.hxx>
#include <Interface_UndefinedContent.hxx>
#include <MoniTool_AttrList.hxx>
#include <MoniTool_CaseData.hxx>
#include <MoniTool_DataInfo.hxx>
#include <MoniTool_Element.hxx>
#include <MoniTool_IntVal.hxx>
#include <MoniTool_RealVal.hxx>
#include <MoniTool_SignShape.hxx>
#include <MoniTool_SignText.hxx>
#include <MoniTool_Stat.hxx>
#include <MoniTool_Timer.hxx>
#include <MoniTool_TimerSentry.hxx>
#include <MoniTool_TransientElem.hxx>
#include <MoniTool_TypedValue.hxx>
#include <Transfer_ActorDispatch.hxx>
#include <Transfer_ActorOfFinderProcess.hxx>
#include <Transfer_ActorOfProcessForFinder.hxx>
#include <Transfer_ActorOfProcessForTransient.hxx>
#include <Transfer_ActorOfTransientProcess.hxx>
#include <Transfer_Binder.hxx>
#include <Transfer_BinderOfTransientInteger.hxx>
#include <Transfer_DataInfo.hxx>
#include <Transfer_DispatchControl.hxx>
#include <Transfer_Finder.hxx>
#include <Transfer_FinderProcess.hxx>
#include <Transfer_FindHasher.hxx>
#include <Transfer_IteratorOfProcessForFinder.hxx>
#include <Transfer_IteratorOfProcessForTransient.hxx>
#include <Transfer_MapContainer.hxx>
#include <Transfer_MultipleBinder.hxx>
#include <Transfer_ProcessForFinder.hxx>
#include <Transfer_ProcessForTransient.hxx>
#include <Transfer_ResultFromModel.hxx>
#include <Transfer_ResultFromTransient.hxx>
#include <Transfer_SimpleBinderOfTransient.hxx>
#include <Transfer_TransferDispatch.hxx>
#include <Transfer_TransferInput.hxx>
#include <Transfer_TransferIterator.hxx>
#include <Transfer_TransferOutput.hxx>
#include <Transfer_TransientListBinder.hxx>
#include <Transfer_TransientMapper.hxx>
#include <Transfer_TransientProcess.hxx>
#include <Transfer_VoidBinder.hxx>
#include <TransferBRep.hxx>
#include <TransferBRep_BinderOfShape.hxx>
#include <TransferBRep_Reader.hxx>
#include <TransferBRep_ShapeBinder.hxx>
#include <TransferBRep_ShapeInfo.hxx>
#include <TransferBRep_ShapeListBinder.hxx>
#include <TransferBRep_ShapeMapper.hxx>
#include <TransferBRep_TransferResultInfo.hxx>
#include <XSAlgo.hxx>
#include <XSAlgo_AlgoContainer.hxx>
#include <XSControl.hxx>
#include <XSControl_ConnectedShapes.hxx>
#include <XSControl_Controller.hxx>
#include <XSControl_FuncShape.hxx>
#include <XSControl_Functions.hxx>
#include <XSControl_Reader.hxx>
#include <XSControl_SelectForTransfer.hxx>
#include <XSControl_SignTransferStatus.hxx>
#include <XSControl_TransferReader.hxx>
#include <XSControl_TransferWriter.hxx>
#include <XSControl_Utils.hxx>
#include <XSControl_Vars.hxx>
#include <XSControl_WorkSession.hxx>
#include <XSControl_Writer.hxx>

#include <../handle_class.h>

DEFINE_HANDLECLASS(IFSelect_Act)
DEFINE_HANDLECLASS(IFSelect_Activator)
DEFINE_HANDLECLASS(IFSelect_AppliedModifiers)
DEFINE_HANDLECLASS(IFSelect_BasicDumper)
DEFINE_HANDLECLASS(IFSelect_CheckCounter)
DEFINE_HANDLECLASS(IFSelect_Dispatch)
DEFINE_HANDLECLASS(IFSelect_DispGlobal)
DEFINE_HANDLECLASS(IFSelect_DispPerCount)
DEFINE_HANDLECLASS(IFSelect_DispPerFiles)
DEFINE_HANDLECLASS(IFSelect_DispPerOne)
DEFINE_HANDLECLASS(IFSelect_DispPerSignature)
DEFINE_HANDLECLASS(IFSelect_EditForm)
DEFINE_HANDLECLASS(IFSelect_Editor)
DEFINE_HANDLECLASS(IFSelect_GeneralModifier)
DEFINE_HANDLECLASS(IFSelect_GraphCounter)
DEFINE_HANDLECLASS(IFSelect_IntParam)
DEFINE_HANDLECLASS(IFSelect_ListEditor)
DEFINE_HANDLECLASS(IFSelect_ModelCopier)
DEFINE_HANDLECLASS(IFSelect_ModifEditForm)
DEFINE_HANDLECLASS(IFSelect_Modifier)
DEFINE_HANDLECLASS(IFSelect_ModifReorder)
DEFINE_HANDLECLASS(IFSelect_PacketList)
DEFINE_HANDLECLASS(IFSelect_ParamEditor)
DEFINE_HANDLECLASS(IFSelect_SelectAnyList)
DEFINE_HANDLECLASS(IFSelect_SelectAnyType)
DEFINE_HANDLECLASS(IFSelect_SelectBase)
DEFINE_HANDLECLASS(IFSelect_SelectCombine)
DEFINE_HANDLECLASS(IFSelect_SelectControl)
DEFINE_HANDLECLASS(IFSelect_SelectDeduct)
DEFINE_HANDLECLASS(IFSelect_SelectDiff)
DEFINE_HANDLECLASS(IFSelect_SelectEntityNumber)
DEFINE_HANDLECLASS(IFSelect_SelectErrorEntities)
DEFINE_HANDLECLASS(IFSelect_SelectExplore)
DEFINE_HANDLECLASS(IFSelect_SelectExtract)
DEFINE_HANDLECLASS(IFSelect_SelectFlag)
DEFINE_HANDLECLASS(IFSelect_SelectIncorrectEntities)
DEFINE_HANDLECLASS(IFSelect_SelectInList)
DEFINE_HANDLECLASS(IFSelect_SelectIntersection)
DEFINE_HANDLECLASS(IFSelect_Selection)
DEFINE_HANDLECLASS(IFSelect_SelectModelEntities)
DEFINE_HANDLECLASS(IFSelect_SelectModelRoots)
DEFINE_HANDLECLASS(IFSelect_SelectPointed)
DEFINE_HANDLECLASS(IFSelect_SelectRange)
DEFINE_HANDLECLASS(IFSelect_SelectRootComps)
DEFINE_HANDLECLASS(IFSelect_SelectRoots)
DEFINE_HANDLECLASS(IFSelect_SelectSent)
DEFINE_HANDLECLASS(IFSelect_SelectShared)
DEFINE_HANDLECLASS(IFSelect_SelectSharing)
DEFINE_HANDLECLASS(IFSelect_SelectSignature)
DEFINE_HANDLECLASS(IFSelect_SelectSignedShared)
DEFINE_HANDLECLASS(IFSelect_SelectSignedSharing)
DEFINE_HANDLECLASS(IFSelect_SelectSuite)
DEFINE_HANDLECLASS(IFSelect_SelectType)
DEFINE_HANDLECLASS(IFSelect_SelectUnion)
DEFINE_HANDLECLASS(IFSelect_SelectUnknownEntities)
DEFINE_HANDLECLASS(IFSelect_SessionDumper)
DEFINE_HANDLECLASS(IFSelect_SessionPilot)
DEFINE_HANDLECLASS(IFSelect_ShareOut)
DEFINE_HANDLECLASS(IFSelect_SignAncestor)
DEFINE_HANDLECLASS(IFSelect_Signature)
DEFINE_HANDLECLASS(IFSelect_SignatureList)
DEFINE_HANDLECLASS(IFSelect_SignCategory)
DEFINE_HANDLECLASS(IFSelect_SignCounter)
DEFINE_HANDLECLASS(IFSelect_SignMultiple)
DEFINE_HANDLECLASS(IFSelect_SignType)
DEFINE_HANDLECLASS(IFSelect_SignValidity)
DEFINE_HANDLECLASS(IFSelect_Transformer)
DEFINE_HANDLECLASS(IFSelect_TransformStandard)
DEFINE_HANDLECLASS(IFSelect_WorkSession)
DEFINE_HANDLECLASS(Interface_Check)
DEFINE_HANDLECLASS(Interface_CopyControl)
DEFINE_HANDLECLASS(Interface_CopyMap)
DEFINE_HANDLECLASS(Interface_EntityCluster)
DEFINE_HANDLECLASS(Interface_FileReaderData)
DEFINE_HANDLECLASS(Interface_GeneralModule)
DEFINE_HANDLECLASS(Interface_GlobalNodeOfGeneralLib)
DEFINE_HANDLECLASS(Interface_GlobalNodeOfReaderLib)
DEFINE_HANDLECLASS(Interface_GTool)
DEFINE_HANDLECLASS(Interface_HGraph)
DEFINE_HANDLECLASS(Interface_InterfaceModel)
DEFINE_HANDLECLASS(Interface_IntVal)
DEFINE_HANDLECLASS(Interface_NodeOfGeneralLib)
DEFINE_HANDLECLASS(Interface_NodeOfReaderLib)
DEFINE_HANDLECLASS(Interface_ParamList)
DEFINE_HANDLECLASS(Interface_ParamSet)
DEFINE_HANDLECLASS(Interface_Protocol)
DEFINE_HANDLECLASS(Interface_ReaderModule)
DEFINE_HANDLECLASS(Interface_ReportEntity)
DEFINE_HANDLECLASS(Interface_SignLabel)
DEFINE_HANDLECLASS(Interface_SignType)
DEFINE_HANDLECLASS(Interface_Static)
DEFINE_HANDLECLASS(Interface_TypedValue)
DEFINE_HANDLECLASS(Interface_UndefinedContent)
DEFINE_HANDLECLASS(MoniTool_CaseData)
DEFINE_HANDLECLASS(MoniTool_Element)
DEFINE_HANDLECLASS(MoniTool_IntVal)
DEFINE_HANDLECLASS(MoniTool_RealVal)
DEFINE_HANDLECLASS(MoniTool_SignShape)
DEFINE_HANDLECLASS(MoniTool_SignText)
DEFINE_HANDLECLASS(MoniTool_Timer)
DEFINE_HANDLECLASS(MoniTool_TransientElem)
DEFINE_HANDLECLASS(MoniTool_TypedValue)
DEFINE_HANDLECLASS(Transfer_ActorDispatch)
DEFINE_HANDLECLASS(Transfer_ActorOfFinderProcess)
DEFINE_HANDLECLASS(Transfer_ActorOfProcessForFinder)
DEFINE_HANDLECLASS(Transfer_ActorOfProcessForTransient)
DEFINE_HANDLECLASS(Transfer_ActorOfTransientProcess)
DEFINE_HANDLECLASS(Transfer_Binder)
DEFINE_HANDLECLASS(Transfer_BinderOfTransientInteger)
DEFINE_HANDLECLASS(Transfer_DispatchControl)
DEFINE_HANDLECLASS(Transfer_Finder)
DEFINE_HANDLECLASS(Transfer_FinderProcess)
DEFINE_HANDLECLASS(Transfer_MapContainer)
DEFINE_HANDLECLASS(Transfer_MultipleBinder)
DEFINE_HANDLECLASS(Transfer_ProcessForFinder)
DEFINE_HANDLECLASS(Transfer_ProcessForTransient)
DEFINE_HANDLECLASS(Transfer_ResultFromModel)
DEFINE_HANDLECLASS(Transfer_ResultFromTransient)
DEFINE_HANDLECLASS(Transfer_SimpleBinderOfTransient)
DEFINE_HANDLECLASS(Transfer_TransientListBinder)
DEFINE_HANDLECLASS(Transfer_TransientMapper)
DEFINE_HANDLECLASS(Transfer_TransientProcess)
DEFINE_HANDLECLASS(Transfer_VoidBinder)
DEFINE_HANDLECLASS(TransferBRep_BinderOfShape)
DEFINE_HANDLECLASS(TransferBRep_ShapeBinder)
DEFINE_HANDLECLASS(TransferBRep_ShapeListBinder)
DEFINE_HANDLECLASS(TransferBRep_ShapeMapper)
DEFINE_HANDLECLASS(TransferBRep_TransferResultInfo)
DEFINE_HANDLECLASS(XSAlgo_AlgoContainer)
DEFINE_HANDLECLASS(XSControl_ConnectedShapes)
DEFINE_HANDLECLASS(XSControl_Controller)
DEFINE_HANDLECLASS(XSControl_SelectForTransfer)
DEFINE_HANDLECLASS(XSControl_SignTransferStatus)
DEFINE_HANDLECLASS(XSControl_TransferReader)
DEFINE_HANDLECLASS(XSControl_TransferWriter)
DEFINE_HANDLECLASS(XSControl_Vars)
DEFINE_HANDLECLASS(XSControl_WorkSession)

