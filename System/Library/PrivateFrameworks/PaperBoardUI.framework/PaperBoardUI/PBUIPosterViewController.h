@class PRSPosterConfiguration, NSString, _UILegibilitySettings, FBScene, BSCompoundAssertion, BSUIMappedImageCache, PBUIDynamicProviderWrapper, PBUIPosterHomeViewController, PBUIPosterLockViewController, UIColor;
@protocol PBUIPosterComponentDelegate, BSPathProviding, BSInvalidatable, PBUISessionReconnectPolicy;

@interface PBUIPosterViewController : UIViewController <FBSceneDelegate, BSDescriptionProviding, PBUIPosterUpdating, PBUIPosterComponentDelegate, PBUIPosterComponent> {
    id<PBUISessionReconnectPolicy> _reconnectPolicy;
    _UILegibilitySettings *_legibilitySettings;
    FBScene *_scene;
    FBScene *_homeScene;
    PBUIPosterLockViewController *_lockViewController;
    BSUIMappedImageCache *_lockVCCache;
    PBUIDynamicProviderWrapper *_activeVariantReplicaProvider;
    PBUIDynamicProviderWrapper *_lockReplicaProvider;
    PBUIDynamicProviderWrapper *_lockFloatingLayerReplicaProvider;
    PBUIPosterHomeViewController *_homeViewController;
    PBUIDynamicProviderWrapper *_homeReplicaProvider;
    BSUIMappedImageCache *_homeVCCache;
    BSCompoundAssertion *_shouldRasterizeWallpaperAssertion;
    id<BSInvalidatable> _storageTemporaryDirectory;
}

@property (nonatomic) long long activeVariant;
@property (nonatomic) long long activeOrientation;
@property (nonatomic) BOOL activelyRequired;
@property (nonatomic) long long activeStyle;
@property (nonatomic) double unlockProgress;
@property (nonatomic) BOOL landscapeBlurEnabled;
@property (readonly, nonatomic) PRSPosterConfiguration *activeConfiguration;
@property (readonly, nonatomic) PRSPosterConfiguration *associatedConfiguration;
@property (readonly, nonatomic) id<BSPathProviding> storagePath;
@property (readonly, nonatomic) unsigned long long posterSignificantEventsCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL wakeSourceIsSwipeToUnlock;
@property (weak, nonatomic) id<PBUIPosterComponentDelegate> delegate;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) UIColor *averageColor;
@property (readonly, nonatomic) double averageContrast;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;

- (BOOL)updateConfiguration:(id)a0;
- (BOOL)handlesWakeAnimation;
- (void)_updateForActiveVariant;
- (id)init;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)posterComponent:(id)a0 didUpdateLegibilitySettings:(id)a1;
- (void)_updateRasterization;
- (BOOL)homeScreenReflectsLockScreen;
- (void)updateLegacyPoster;
- (id)portalProviderForFloatingLayer;
- (void)viewWillLayoutSubviews;
- (void)scene:(id)a0 willUpdateSettings:(id)a1 withTransitionContext:(id)a2;
- (BOOL)updateAssociatedPosterConfiguration:(id)a0;
- (id)portalSourceProviderForActiveVariant;
- (void)noteUserTapOccurred;
- (id)snapshotSourceProviderForVariant:(long long)a0;
- (id)_replicaProviderForVariant:(long long)a0;
- (id)succinctDescription;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)portalSourceProviderForVariant:(long long)a0;
- (void)viewDidLoad;
- (id)legibilitySettingsForVariant:(long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)sceneDidDeactivate:(id)a0 withError:(id)a1;
- (BOOL)updateHomeScene;
- (id)scenesForBacklightSession;
- (id)_activeViewController;
- (void)_updatePosterScenesWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)_updateLegibilitySettings:(id)a0;
- (id)requireWallpaperRasterizationWithReason:(id)a0;
- (void)_updateLandscapeBlur;
- (id)defaultStoragePath;
- (void)updatePoster:(id /* block */)a0;
- (BOOL)_canShowWhileLocked;
- (id)snapshotSourceProviderForActiveVariant;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)setWallpaperObscured:(BOOL)a0;
- (id)averageColorForVariant:(long long)a0;
- (double)averageContrastForVariant:(long long)a0;
- (id)_viewControllerForVariant:(long long)a0;
- (unsigned long long)significantEventsCounterForPosterWithIdentifier:(id)a0;
- (void)finishUnlockWithAnimationParameters:(struct CGSize { double x0; double x1; })a0;
- (void)_createHomeViewControllerIfNeeded;
- (id)makeImageCacheForVariant:(long long)a0;

@end
