@class NSXPCConnection;
@protocol WBSAuthenticationServicesAgentDelegate;

@interface WBSAuthenticationServicesAgentProxy : NSObject <WBSAuthenticationServicesAgentDelegate, WBSAuthenticationServicesAgentInterface> {
    NSXPCConnection *_connection;
}

@property (weak, nonatomic) id<WBSAuthenticationServicesAgentDelegate> delegate;

- (id)init;
- (void)getPasskeysForRunningAssertionWithWebFrameIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)connection;
- (void)test_createPasskeyWithUserName:(id)a0 displayName:(id)a1 relyingPartyIdentifier:(id)a2 userHandle:(id)a3 completionHandler:(id /* block */)a4;
- (void)_setUpConnection:(id)a0;
- (void).cxx_destruct;
- (void)getPasskeysForRunningAssertionWithApplicationIdentifier:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)userSelectedAutoFillNearbyDevice:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)newPasskeysAvailableForApplicationIdentifier:(id)a0;
- (void)userSelectedAutoFillPasskey:(id)a0 authenticatedLAContext:(id)a1 completionHandler:(id /* block */)a2;

@end
