@class NSString, UIViewController, PSSpecifier;

@interface STEnableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider <MCProfileConnectionObserver>

@property (retain) PSSpecifier *setupScreenTimeSpecifier;
@property (weak) UIViewController *rootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithCoordinator:(id)a0 rootViewController:(id)a1;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (void)dealloc;
- (id)enableScreenTimeFooterText;
- (void)saveValuesForModel:(id)a0;
- (void)setupScreenTime:(id)a0;

@end
