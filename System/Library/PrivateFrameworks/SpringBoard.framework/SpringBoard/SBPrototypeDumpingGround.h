@class NSString, SBWindowScene, SBBiometricMonitorUI;

@interface SBPrototypeDumpingGround : NSObject <PTSettingsKeyObserver> {
    SBBiometricMonitorUI *_pearlMonitorUI;
    id _appLaunchedNotificationToken;
}

@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)dealloc;
- (void)_updatePearlDebugUI;

@end
