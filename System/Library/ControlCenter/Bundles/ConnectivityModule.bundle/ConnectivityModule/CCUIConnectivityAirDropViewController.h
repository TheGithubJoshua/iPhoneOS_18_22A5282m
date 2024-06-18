@class NSString, SFAirDropDiscoveryController, CCUIContentModuleDetailTransitioningDelegate, CCUIContentModuleDetailClickPresentationInteractionManager;

@interface CCUIConnectivityAirDropViewController : CCUIConnectivityButtonViewController <SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryAlertControllerDelegate, MCProfileConnectionObserver, CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> {
    SFAirDropDiscoveryController *_airDropDiscoveryController;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
    CCUIContentModuleDetailClickPresentationInteractionManager *_clickPresentationInteractionManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupported;

- (id)init;
- (void)containerWillTransitionToExpandedContentMode:(BOOL)a0;
- (void)buttonTapped:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_isAirDropRestricted;
- (void)startObservingStateChanges;
- (void)stopObservingStateChanges;
- (id)displayName;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)a0 userInfo:(id)a1;
- (void)discoveryControllerVisibilityDidChange:(id)a0;
- (id)presentedViewControllerForContentModuleDetailClickPresentationInteractionController:(id)a0;
- (void)viewDidLoad;
- (void)_updateState;
- (id)_newAirDropMenuViewController;
- (void)_updateAirDropControlAsEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)_everyoneMenuItemTextKey;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_isEduModeEnabled;
- (void)discoveryControllerSettingsDidChange:(id)a0;

@end
