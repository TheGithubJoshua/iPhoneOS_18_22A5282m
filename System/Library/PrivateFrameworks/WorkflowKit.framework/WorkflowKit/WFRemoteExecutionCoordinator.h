@class NSObject, NSMapTable, NSString, NSMutableArray, IDSService;
@protocol OS_dispatch_queue;

@interface WFRemoteExecutionCoordinator : NSObject <WFRemoteExecutionSessionDelegate, IDSServiceDelegate>

@property (retain, nonatomic) NSMutableArray *activeSessions;
@property (retain, nonatomic) NSMapTable *completionsForSessions;
@property (retain, nonatomic) IDSService *service;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) BOOL allowRunRequests;
@property (readonly, nonatomic) NSString *pairedDeviceModelIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCoordinator;

- (id)pairedDevice;
- (id)defaultIDSOptions;
- (void)handleAskWhenRunRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)sessionsOfClass:(Class)a0;
- (void)sendRunRequest:(id)a0 userInterface:(id)a1 parameterInputProvider:(id)a2 completionHandler:(id /* block */)a3;
- (id)sessionFromRequestIdentifier:(id)a0;
- (void)handleRunRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)handleDialogRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)handleRunRequestResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)cancelPendingFileTransfers;
- (id)unknownRequestMessageWithIdentifier:(id)a0;
- (void)sendRunRequestResponse:(id)a0 completion:(id /* block */)a1;
- (void)sendAlertRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)sendStopRequest:(id)a0 error:(id *)a1;
- (void)cancelSessions:(id)a0;
- (id)unknownRequestError;
- (void)handleDialogRequestResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)cancelAllSessions;
- (BOOL)hasPairedDevice;
- (BOOL)shouldDropMessageDueToStaleness:(id)a0;
- (void)handleStopRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)sendDialogRequest:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)sendAskWhenRunRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleAlertRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)initAndAllowRunRequests:(BOOL)a0;
- (void)sendAceCommandDictionary:(id)a0 completion:(id /* block */)a1;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)finishSessionWithRequest:(id)a0;
- (void)handleAlertRequestResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)sendFileAtURL:(id)a0 transferIdentifier:(id)a1 requestIdentifier:(id)a2 error:(id *)a3;
- (void)handleAskWhenRunRequestResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (BOOL)messageCameFromPairedDevice:(id)a0;
- (void)sessionDidFinish:(id)a0;
- (void)handleUnknownRequestMessage:(id)a0;
- (void)cancelRequest:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)handleAceCommandResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)handleIncomingAceCommand:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)mapSelectorsForIncomingProtobuf;

@end
