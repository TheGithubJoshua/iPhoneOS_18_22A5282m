@class SBRestartManager, NSString, NSXPCConnection, SBRootSettings, SBSStatusBarStyleOverridesAssertion, SBWindowScene, SBPrototypeDumpingGround;

@interface SBPrototypeController : NSObject <PTUIClient> {
    NSXPCConnection *_prototypingUIServerConnection;
    BOOL _hasActiveKeyHIDEventRouters;
    SBPrototypeDumpingGround *_dumpingGround;
    SBRootSettings *_rootSettings;
    SBSStatusBarStyleOverridesAssertion *_remotePrototypingAssertion;
}

@property (weak, nonatomic) SBRestartManager *restartManager;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (BOOL)_handleKeyHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_invalidateRemotePrototypingAssertion;
- (void)_createConnection;
- (void)killSpringBoard;
- (BOOL)handleVolumeIncreaseEvent;
- (void).cxx_destruct;
- (void)_updateKeyHIDEventRouters;
- (id)rootSettings;
- (void)_updateRemoteEditingState;
- (BOOL)_shouldSendEvent:(long long)a0;
- (BOOL)handleKeyHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_acquireRemotePrototypingAssertion;
- (void)_sendEvent:(long long)a0;
- (BOOL)handleRingerSwitchEvent;
- (BOOL)_handlePrototypingEvent:(long long)a0;
- (void)restartSpringBoard;
- (BOOL)handleVolumeDecreaseEvent;

@end
