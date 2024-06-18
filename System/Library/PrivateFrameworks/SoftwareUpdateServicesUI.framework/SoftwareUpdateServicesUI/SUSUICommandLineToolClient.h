@class NSString, NSXPCConnection;
@protocol SUSUICommandLineToolClientDelegate;

@interface SUSUICommandLineToolClient : NSObject <SUSUICommandLineToolClientInterface> {
    NSXPCConnection *_serverConnection;
    BOOL _connected;
    BOOL _serverIsExiting;
}

@property (weak, nonatomic) id<SUSUICommandLineToolClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_invalidateConnection;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)setPasscodePolicy:(unsigned long long)a0;
- (void)_noteConnectionDropped;
- (void)_connectToServerIfNecessary;
- (id)_remoteInterface;
- (void)reboot:(BOOL)a0;
- (void)_noteServerExiting;
- (void)downloadDidFinish;
- (void)showAuthenticationUIWithOptions:(unsigned long long)a0 result:(id /* block */)a1;
- (void)showEmergencyCallUIWithOptions:(unsigned long long)a0 result:(id /* block */)a1;
- (void)showFollowUp:(unsigned long long)a0;
- (void)showMiniAlert:(unsigned long long)a0 usingFakeData:(BOOL)a1 errorCode:(id)a2;
- (void)simulateComingFromOTAUpdate;
- (void)toggleSettingsBadge:(BOOL)a0;

@end
