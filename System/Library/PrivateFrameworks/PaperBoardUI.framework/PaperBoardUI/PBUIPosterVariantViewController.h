@class PBUIFixedReplicaSourceProvider, PBUICachedSnapshotEffectProvider, BSAtomicFlag, UIVisualEffectView, PBUISnapshotReplicaView, FBScene, _UILegibilitySettings, PBUIURLBackedSnapshotSource, UIView, UIColor, NSString, PBUIColorStatistics, BSUIMappedImageCache, UIImage;
@protocol UIScenePresenter, PBUIPosterComponentDelegate, UIScenePresentation;

@interface PBUIPosterVariantViewController : UIViewController <BSDescriptionProviding, FBSceneLayerManagerObserver, PBUIURLSourceDelegate, FBSceneObserver, PBUIColorStatisticsDelegate, PBUIPosterComponent> {
    UIView *_contentContainer;
    UIView<UIScenePresentation> *_sceneView;
    PBUIColorStatistics *_posterColorStatistics;
    PBUIURLBackedSnapshotSource *_snapshotSource;
    PBUIFixedReplicaSourceProvider *_portalProvider;
    unsigned long long _lastExtantUpdate;
    UIVisualEffectView *_blurView;
    BOOL _isBlurEnabled;
    PBUICachedSnapshotEffectProvider *_snapshotProvider;
    BSAtomicFlag *_snapshotNeeded;
    BSAtomicFlag *_snapshotScheduled;
    BOOL _parallaxApplied;
    PBUISnapshotReplicaView *_snapshotView;
}

@property (readonly, nonatomic) id<UIScenePresenter> presenter;
@property (readonly, nonatomic) BSUIMappedImageCache *cache;
@property (readonly, nonatomic) PBUIColorStatistics *contentColorStatistics;
@property (weak, nonatomic) PBUIPosterVariantViewController *counterpart;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) UIColor *averageColor;
@property (readonly, nonatomic) double averageContrast;
@property (readonly, nonatomic) UIImage *snapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PBUIPosterComponentDelegate> delegate;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;

+ (id)snapshotFormat;

- (void)sceneLayerManagerDidUpdateLayers:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)setSnapshotVersionForURL:(id)a0;
- (void)sceneDidActivate:(id)a0;
- (void)setBlurEnabled:(BOOL)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (void)scene:(id)a0 clientDidConnect:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)sceneWillDeactivate:(id)a0 withError:(id)a1;
- (id)initWithScene:(id)a0 cache:(id)a1;
- (void)snapshotSource:(id)a0 failedToReadSnapshotAtURL:(id)a1 error:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithScene:(id)a0 storagePath:(id)a1;
- (BOOL)postprocessNewSnapshot:(id)a0 colorStatistics:(id)a1 error:(out id *)a2;
- (BOOL)updatePresentation;
- (void)_updateParallax;
- (void)_performLegacyPosterSnapshotOnQueue:(id)a0 completion:(id /* block */)a1;
- (id)succinctDescription;
- (void)viewDidLoad;
- (void)scene:(id)a0 didCompleteUpdateWithContext:(id)a1 error:(id)a2;
- (id)_posterInstanceURL;
- (void)scene:(id)a0 didApplyUpdateWithContext:(id)a1;
- (id)portalSourceProvider;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)legibilitySettingsDidChange;
- (void)_monitorScene:(id)a0;
- (void)setNeedsNewSnapshot;
- (void)_performSnapshotOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)colorStatisticsDidChange:(id)a0;
- (BOOL)needsSnapshot;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (BOOL)_canShowWhileLocked;
- (void)_updatePresentation;
- (void)invalidateSnapshotPreconditions;
- (void)setPosterAverageColor:(id)a0;
- (unsigned char)snapshotVersionForURL:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)snapshotIfNeeded;
- (id)makePortalSourceWithLegibilitySettings:(id)a0;
- (id)snapshotContentDirectory;
- (id)_snapshotMetadataURL;
- (void)performSnapshotOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)_scheduleSnapshotIfNeeded;
- (BOOL)evaluateSnapshotPreconditions;
- (id)_snapshotURL;
- (void)_snapshot;
- (id)snapshotSourceProvider;
- (BOOL)areSettingsAppropriateForSnapshotting:(id)a0;
- (void)snapshotSource:(id)a0 failedToReadColorStatisticsAtURL:(id)a1 error:(id)a2;

@end