@class IMDiMessagePipelineResources;

@interface IMNotifyRecipientCommandProcessingPipelineComponent : IMPipelineComponent

@property (readonly, nonatomic) IMDiMessagePipelineResources *pipelineResources;

- (id)_account;
- (void).cxx_destruct;
- (id)_messageStore;
- (id)_idsAccount;
- (void)_markMessageAsNotifiedRecipientAndNotify:(id)a0 session:(id)a1 chat:(id)a2;
- (id)initWithPipelineResources:(id)a0;
- (id)runIndividuallyWithInput:(id)a0;

@end
