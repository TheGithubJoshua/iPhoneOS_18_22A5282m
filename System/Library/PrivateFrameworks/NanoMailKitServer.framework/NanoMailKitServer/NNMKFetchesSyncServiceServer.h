@protocol NNMKFetchesSyncServiceServerDelegate;

@interface NNMKFetchesSyncServiceServer : NNMKSyncServiceEndpoint

@property (weak, nonatomic) id<NNMKFetchesSyncServiceServerDelegate> delegate;

- (void)readProtobufData:(id)a0 type:(unsigned long long)a1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)a0;
- (void)notifyOldMessagesAvailable:(id)a0;
- (void)notifyFetchRequestCompleted:(id)a0;
- (void).cxx_destruct;
- (void)requestPrepareForFullSync:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)reportComposedMessageSendingProgress:(id)a0;
- (void)failedSendingProtobufWithIDSIdentifier:(id)a0 errorCode:(long long)a1;
- (void)warnErrorDownloadingContentForMessage:(id)a0 notificationPriority:(BOOL)a1 userRequested:(BOOL)a2;

@end
