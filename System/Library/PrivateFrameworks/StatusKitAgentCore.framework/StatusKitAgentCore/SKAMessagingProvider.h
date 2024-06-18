@class IDSService, NSString;
@protocol SKAMessagingProvidingDelegate, SKAPushManaging;

@interface SKAMessagingProvider : NSObject <IDSServiceDelegate, SKAMessagingProviding>

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKAMessagingProvidingDelegate> delegate;

+ (id)logger;
+ (id)_noValidIDSDetintationError;

- (id)deviceTokenForTokenURI:(id)a0;
- (void)service:(id)a0 didHintCheckingTransportLogWithReason:(long long)a1;
- (BOOL)_keysharingIsDisabledByServer;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (id)handleForTokenURI:(id)a0;
- (id)resolveSenderHandleWithPreferredSenderHandle:(id)a0;
- (id)initWithDelegate:(id)a0 serviceIdentifier:(id)a1 pushManager:(id)a2 queue:(id)a3;
- (void).cxx_destruct;
- (BOOL)_selfSharingIsDisabledByServer;
- (BOOL)sendMessageToSelfDevices:(id)a0 limitToPresenceCapable:(BOOL)a1 identifier:(id *)a2 error:(id *)a3;
- (id)deviceToken;
- (void)isHandleMessageableForPresence:(id)a0 completion:(id /* block */)a1;
- (BOOL)sendMessage:(id)a0 toHandle:(id)a1 fromHandle:(id)a2 limitToPresenceCapable:(BOOL)a3 identifier:(id *)a4 error:(id *)a5;
- (BOOL)isFromIDFromSelfAccount:(id)a0;
- (void)signPayload:(id)a0 completion:(id /* block */)a1;
- (id)tokenURI;
- (BOOL)sendMessage:(id)a0 toHandles:(id)a1 fromHandle:(id)a2 limitToPresenceCapable:(BOOL)a3 identifier:(id *)a4 error:(id *)a5;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)verifySignedPayload:(id)a0 matchesPayload:(id)a1 fromTokenURI:(id)a2 completion:(id /* block */)a3;
- (void)isHandleMessageable:(id)a0 completion:(id /* block */)a1;
- (BOOL)isHandleAvailableToMessageFrom:(id)a0;

@end
