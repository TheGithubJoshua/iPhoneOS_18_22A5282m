@class NSMutableArray, NSString, IDSAccount, IDSService;

@interface SMSRelayPushHandler : NSObject <IDSServiceDelegatePrivate> {
    IDSService *_relayService;
    IDSService *_smsWatchService;
    IDSAccount *_account;
    NSMutableArray *_handlers;
    BOOL _registeredForPush;
    BOOL _isListening;
}

@property (nonatomic) BOOL registered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandToHandlerBlock;
+ (id)localCommandToHandlerBlock;

- (void)addListener:(id)a0;
- (id)init;
- (void)removeListener:(id)a0;
- (id)_messageReplayObjectWithService:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3;
- (id)_messageReplayObjectWithService:(id)a0 account:(id)a1 incomingTopLevelMessage:(id)a2 fromID:(id)a3;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)replayMessage:(id)a0;
- (void)_service:(id)a0 account:(id)a1 incomingTopLevelMessage:(id)a2 fromID:(id)a3 messageContext:(id)a4 isBeingReplayed:(BOOL)a5;
- (void)_acceptIncomingPushes;
- (void)service:(id)a0 account:(id)a1 incomingTopLevelMessage:(id)a2 fromID:(id)a3 messageContext:(id)a4;
- (void)_ignoreIncomingPushes;
- (void)_service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4 isBeingReplayed:(BOOL)a5;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (id)copyHandlersForEnumerating;
- (void)dealloc;
- (id)initWithIDSAccount:(id)a0;
- (void)_updateListenerIfNeeded;

@end
