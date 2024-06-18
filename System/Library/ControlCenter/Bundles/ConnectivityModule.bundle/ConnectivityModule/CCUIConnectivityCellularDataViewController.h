@class NSString;

@interface CCUIConnectivityCellularDataViewController : CCUIConnectivityButtonViewController <MCProfileConnectionObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (id)init;
- (id)_debugDescriptionForState:(BOOL)a0;
- (BOOL)_toggleState;
- (void)buttonTapped:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)startObservingStateChanges;
- (void)stopObservingStateChanges;
- (id)displayName;
- (void)_updateState;
- (BOOL)_canShowWhileLocked;
- (BOOL)_isCellularDataButtonDemoMode;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_isCellularDataRestricted;

@end
