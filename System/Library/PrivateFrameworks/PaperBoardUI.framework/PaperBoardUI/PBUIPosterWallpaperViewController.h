@class UIColor, NSString, PRSWallpaperObserver, PBUIPosterViewController, PBUIDynamicProviderWrapper, BSCompoundAssertion, _UILegibilitySettings;
@protocol PBUIPosterComponentDelegate, BSInvalidatable;

@interface PBUIPosterWallpaperViewController : UIViewController <PBUIPosterComponentDelegate, BSDescriptionProviding, PBUIPosterComponent> {
    PRSWallpaperObserver *_posterObserver;
    PBUIPosterViewController *_posterController;
    PBUIDynamicProviderWrapper *_activeVariantReplicaProvider;
    PBUIDynamicProviderWrapper *_homePosterReplicaProvider;
    PBUIDynamicProviderWrapper *_lockPosterReplicaProvider;
    PBUIDynamicProviderWrapper *_lockFloatingLayerPosterReplicaProvider;
    BSCompoundAssertion *_wallpaperRequiredAssertion;
    id<BSInvalidatable> _keepForegroundRunning;
    id<BSInvalidatable> _transitioningLockState;
    long long _activeOrientation;
    long long _activeStyles[2][4];
}

@property (nonatomic) long long activeVariant;
@property (nonatomic) double unlockProgress;
@property (nonatomic) BOOL wakeSourceIsSwipeToUnlock;
@property (readonly, nonatomic) unsigned long long posterSignificantEventsCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PBUIPosterComponentDelegate> delegate;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) UIColor *averageColor;
@property (readonly, nonatomic) double averageContrast;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)init;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)posterComponent:(id)a0 didUpdateLegibilitySettings:(id)a1;
- (BOOL)homeScreenReflectsLockScreen;
- (void)updateLegacyPoster;
- (id)portalProviderForFloatingLayer;
- (id)portalSourceProviderForActiveVariant;
- (void)noteUserTapOccurred;
- (id)snapshotSourceProviderForVariant:(long long)a0;
- (id)succinctDescription;
- (id)portalSourceProviderForVariant:(long long)a0;
- (void)viewDidLoad;
- (id)legibilitySettingsForVariant:(long long)a0;
- (id)replicaProviderForVariant:(long long)a0;
- (id)scenesForBacklightSession;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)rotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)requireWallpaperRasterizationWithReason:(id)a0;
- (BOOL)posterHandlesWakeAnimation;
- (BOOL)_canShowWhileLocked;
- (void)_posterConfigsDidChange:(id)a0 withTransition:(id)a1;
- (id)snapshotSourceProviderForActiveVariant;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)removeWallpaperStyleForPriority:(long long)a0 forVariant:(long long)a1;
- (void)setWallpaperStyle:(long long)a0 forPriority:(long long)a1 forVariant:(long long)a2;
- (void)setWallpaperObscured:(BOOL)a0;
- (id)averageColorForVariant:(long long)a0;
- (id)requireWallpaperWithReason:(id)a0;
- (double)averageContrastForVariant:(long long)a0;
- (void)_updateStyle;
- (void)updateAssociatedPosterConfiguration:(id)a0 withAnimationSettings:(id)a1;
- (unsigned long long)significantEventsCounterForPosterWithIdentifier:(id)a0;
- (void)updateConfiguration:(id)a0 withAnimationSettings:(id)a1;
- (void)triggerSceneUpdate;
- (void)finishUnlockWithAnimationParameters:(struct CGSize { double x0; double x1; })a0;
- (void)_posterControllerDidChange;

@end
