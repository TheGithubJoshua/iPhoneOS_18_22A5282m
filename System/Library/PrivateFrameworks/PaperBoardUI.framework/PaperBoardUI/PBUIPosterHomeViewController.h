@class PBUIColorStatistics, NSString, PBUIGradientView, MTMaterialView, PRPosterHomeScreenConfiguration, PBUIEffectTrackingReplicaView;

@interface PBUIPosterHomeViewController : PBUIPosterVariantViewController <PBUIEffectTrackingReplicaViewDelegate> {
    long long _currentMode;
    PRPosterHomeScreenConfiguration *_homeConfiguration;
    PBUIEffectTrackingReplicaView *_effectView;
    PBUIGradientView *_gradientView;
    PBUIColorStatistics *_fixedColorStatistics;
    MTMaterialView *_wallpaperCaptureView;
}

@property (readonly, nonatomic) BOOL isBlurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)presentationModeForHomeConfiguration:(id)a0;

- (BOOL)showsSnapshotWhenIdleForMode:(long long)a0;
- (void)viewDidLayoutSubviews;
- (id)homeScreenConfiguration;
- (id)averageColor;
- (BOOL)updateGradientViewWithGradient:(id)a0;
- (double)weightingForEffectView;
- (void)setFixedAverageColor:(id)a0;
- (BOOL)updatePresentation;
- (void)viewDidLoad;
- (void)configureEffectViewForMode;
- (long long)variant;
- (void)setCounterpart:(id)a0;
- (id)contentColorStatistics;
- (void).cxx_destruct;
- (BOOL)reflectsLock;
- (void)effectTrackingReplicaViewHasValidSnapshot:(id)a0;
- (double)averageContrast;
- (BOOL)canShowSnapshot;
- (void)performSnapshotOnQueue:(id)a0 completion:(id /* block */)a1;
- (BOOL)evaluateSnapshotPreconditions;
- (BOOL)isSettledPosition;
- (double)unlockProgress;
- (BOOL)areSettingsAppropriateForSnapshotting:(id)a0;

@end
