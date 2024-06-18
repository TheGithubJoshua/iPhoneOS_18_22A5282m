@class NSString, NSMutableSet, NSXPCConnection;

@interface DAManager : NSObject {
    NSMutableSet *_activeSessions;
    NSXPCConnection *_clientConnection;
    NSString *_serviceName;
}

+ (id)getHydraEncryptionCert:(id)a0 session:(id)a1 seid:(id)a2 outError:(id *)a3;
+ (void)listKeysWithSession:(id)a0 seid:(id)a1 callback:(id /* block */)a2;
+ (BOOL)updateHydraKey:(id)a0 session:(id)a1 seid:(id)a2 encryptedSEData:(id)a3 outError:(id *)a4;
+ (BOOL)isSupported;
+ (id)sharedManager;
+ (void)handleSharingMessage:(id)a0 forInvitationIdentifier:(id)a1 fromMailboxIdentifier:(id)a2 completionHandler:(id /* block */)a3;
+ (id)createHydraKey:(id)a0 seid:(id)a1 serverParameters:(id)a2 outError:(id *)a3;
+ (id)createHomeKey:(id)a0 seid:(id)a1 readerIdentifier:(id)a2 readerPublicKey:(id)a3 outError:(id *)a4;
+ (void)rejectSharingInvitation:(id)a0 completionHandler:(id /* block */)a1;

- (void)sendCrossPlatformTestData:(id)a0 toIdsIdentifier:(id)a1;
- (id)init;
- (void)registerCrossPlatformTestMessageSendHandler:(id /* block */)a0;
- (id)createSharingSessionWithDelegate:(id)a0;
- (id)connection;
- (void)unregisterSession:(id)a0;
- (void)unregisterSharingTestHandlers;
- (void)registerFriendSideSharingTestInvitationUUIDHandler:(id /* block */)a0;
- (id)createManagementSessionWithDelegate:(id)a0;
- (void)registerSession:(id)a0;
- (void)registerOwnerSideSharingTestInvitations:(id)a0 callback:(id /* block */)a1;
- (void)registerFriendSideSharingTestCompletion:(id /* block */)a0;
- (void)registerFriendSideInvitationUnusableHandler:(id /* block */)a0;
- (void)registerCrossPlatformTestMessageOverIDSHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)createPairingSessionWithDelegate:(id)a0;
- (void)registerOwnerSideInvitationRequestHandler:(id /* block */)a0;
- (void)registerFriendSidePasscodeRetryRequestTestHandler:(id /* block */)a0;

@end
