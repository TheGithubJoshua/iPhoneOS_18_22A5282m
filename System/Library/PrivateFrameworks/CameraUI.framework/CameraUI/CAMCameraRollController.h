@class NSString, CAMTransientDataSource, NSMutableDictionary, PXPhotosDataSource, PUOneUpPresentationHelper, CAMTransientImageManager, NSMutableSet, NSObject, PUPhotoKitDataSourceManager, UIGestureRecognizer;
@protocol CAMCameraRollControllerSessionDelegate, CAMCameraRollControllerPresentationDelegate, CAMCameraRollControllerImageWellDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface CAMCameraRollController : NSObject <PXPhotosDataSourceChangeObserver, PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PLCameraPreviewWellImageChangeObserver, PUBrowsingViewModelChangeObserver, PHPhotoLibraryChangeObserver, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIInteractionProgressObserver> {
    struct { BOOL respondsToSourceAssetRect; BOOL respondsToShouldHideSourceAsset; BOOL respondsToPreviewGestureDidBecomeAvailable; BOOL respondsToPreviewSourceRect; BOOL respondsToImageForReveal; BOOL respondsToRevealWillBegin; BOOL respondsToRevealDidEnd; BOOL respondsToWillPresentCameraRoll; BOOL respondsToPrefersPresentingStatusbarHiddenDidChange; BOOL respondsToPreferredPresentationOrientation; } _presentationDelegateFlags;
}

@property (nonatomic, setter=_setSessionIdentifier:) unsigned short sessionIdentifier;
@property (readonly, nonatomic) PUOneUpPresentationHelper *_oneUpPresentationHelper;
@property (readonly, nonatomic) CAMTransientDataSource *_transientDataSource;
@property (readonly, nonatomic) CAMTransientImageManager *_transientImageManager;
@property (readonly, nonatomic) PUPhotoKitDataSourceManager *_photoKitDataSourceManager;
@property (readonly, nonatomic) NSMutableSet *_sessionAssetUUIDs;
@property (readonly, nonatomic) NSMutableSet *_ignoredEV0UUIDs;
@property (readonly, nonatomic) NSMutableDictionary *_HDRUUIDToIgnoredEV0UUIDs;
@property (retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource;
@property (retain, nonatomic, setter=_setStagedDataSource:) PXPhotosDataSource *_stagedDataSource;
@property (retain, nonatomic, setter=_setPreviewGestureRecognizer:) UIGestureRecognizer *previewGestureRecognizer;
@property (nonatomic, setter=_setAllowUpdating:) BOOL _allowUpdating;
@property (nonatomic, setter=_setUpdateIsScheduled:) BOOL _updateIsScheduled;
@property (nonatomic, setter=_setTransientAssetsAreValid:) BOOL _transientAssetsAreValid;
@property (nonatomic, getter=_isOneUpVisible, setter=_setOneUpVisible:) BOOL _oneUpVisible;
@property (nonatomic, getter=_isOneUpFullyPresented, setter=_setOneUpFullyPresented:) BOOL _oneUpFullyPresented;
@property (nonatomic, setter=_setDidSetupMechanismsForStoppingCaptureSession:) BOOL _didSetupMechanismsForStoppingCaptureSession;
@property (nonatomic, setter=_setDidStopCaptureSession:) BOOL _didStopCaptureSession;
@property (nonatomic, setter=_setPrefersPresentingStatusbarHidden:) BOOL prefersPresentingStatusbarHidden;
@property (nonatomic, getter=_isDeferringStagedMediaLoading, setter=_setDeferringStagedMediaLoading:) BOOL _deferringStagedMediaLoading;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *_memoryWarningSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_photosFrameworksPreheatQueue;
@property (nonatomic, setter=_setPreheatQueue_shouldSkipPhotosFrameworkPreheat:) BOOL _preheatQueue_shouldSkipPhotosFrameworkPreheat;
@property (weak, nonatomic) id<CAMCameraRollControllerSessionDelegate> sessionDelegate;
@property (weak, nonatomic) id<CAMCameraRollControllerImageWellDelegate> imageWellDelegate;
@property (weak, nonatomic) id<CAMCameraRollControllerPresentationDelegate> presentationDelegate;
@property (readonly, nonatomic) BOOL canPresentCameraRollViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationResumed:(id)a0;
- (void)didDismissPreviewViewController:(id)a0 committing:(BOOL)a1;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)init;
- (void)_cancelDelayedStopCaptureSession;
- (void)_stopCaptureSessionIfNecessaryForViewModel:(id)a0 didChange:(id)a1;
- (void)processTransientPairedVideoUpdate:(id)a0 filterType:(long long)a1;
- (void)_stopCaptureSessionIfNecessaryFromTimeout;
- (BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)a0;
- (void)interactionProgress:(id)a0 didEnd:(BOOL)a1;
- (void)cameraPreviewWellImageDidChange:(id)a0;
- (id)previewingContext:(id)a0 viewControllerForLocation:(struct CGPoint { double x0; double x1; })a1;
- (long long)oneUpPresentationHelperPreferredPresentationOrientation:(id)a0;
- (void)oneUpPresentationHelper:(id)a0 shouldHideAssetReferences:(id)a1;
- (void)presentingViewControllerViewDidDisappear:(BOOL)a0;
- (void)didPersistAssetWithUUID:(id)a0 captureSession:(unsigned short)a1;
- (void)_stopCaptureSessionIfNecessary;
- (BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)a0;
- (void)_stopCaptureSessionIfNecessaryForViewModelCurrentState;
- (void)oneUpPresentationHelper:(id)a0 previewScrubberDidBecomeAvailable:(id)a1;
- (void)preload;
- (void)oneUpPresentationHelper:(id)a0 didDismissOneUpViewController:(id)a1;
- (BOOL)isCaptureSessionCurrent:(unsigned short)a0;
- (void)_setupMemoryWarningNotificationsIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })oneUpPresentationHelper:(id)a0 rectForAssetReference:(id)a1 cropInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a2 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (void)oneUpPresentationHelper:(id)a0 willPresentOneUpViewController:(id)a1;
- (void)willPersistAssetWithUUID:(id)a0 captureSession:(unsigned short)a1;
- (void)_scheduleStopCaptureSessionAfterDelay:(double)a0;
- (void)photosDataSource:(id)a0 didChange:(id)a1;
- (void)ignoreImageWellChangeNotificationForEV0UUID:(id)a0 withHDRUUID:(id)a1;
- (void).cxx_destruct;
- (void)presentCameraRollViewControllerAnimated:(BOOL)a0 interactive:(BOOL)a1 deferringStagedMediaLoading:(BOOL)a2;
- (BOOL)_shouldStopCaptureSessionForVideoPlayerOfAssetViewModel:(id)a0;
- (void)presentingViewControllerViewWillDisappear:(BOOL)a0;
- (BOOL)dismissCameraRollViewControllerForced:(BOOL)a0 animated:(BOOL)a1;
- (void)_tearDownMemoryWarningNotifications;
- (void)clearIgnoredImageWellUUIDs;
- (void)handlePresentingPanGestureRecognizer:(id)a0;
- (void)_invalidateTransientAssets;
- (id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint { double x0; double x1; })a0 inSourceView:(id)a1;
- (void)animateRevealWithInteractionProgress:(id)a0 forPreviewingAtLocation:(struct CGPoint { double x0; double x1; })a1 inSourceView:(id)a2 containerView:(id)a3;
- (void)_scheduleUpdateIfOneUpIsActive;
- (void)_ensureCameraRollViewController;
- (void)applicationWillEnterForeground:(id)a0;
- (id)_cameraRollCollectionListFetchResult;
- (void)processPendingBursts;
- (void)_teardownMechanismsForStoppingCaptureSession;
- (void)applicationDidEnterBackground:(id)a0;
- (void)ppt_awaitPreload:(id /* block */)a0;
- (void)_setupMechanismsForStoppingCaptureSessionIfNecessary;
- (void)beginAllowingStagedMediaLoading;
- (void)willPresentPreviewViewController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inSourceView:(id)a2;
- (BOOL)_isPasscodeLocked;
- (void)dealloc;
- (void)_startNewSession;
- (void)photoLibraryDidChange:(id)a0;
- (void)_unregisterBrowsingViewModelChangeObserver;
- (BOOL)oneUpPresentationHelperEnableFreezeLayoutOnOrientationChange:(id)a0;
- (BOOL)isCameraRollViewControllerPresented;
- (void)_updateTransientDataSourceIfNeeded;
- (void)processTransientAssetUpdate:(id)a0 preventingInsertion:(BOOL)a1;
- (void)previewingContext:(id)a0 commitViewController:(id)a1;
- (long long)oneUpPresentationOrigin:(id)a0;
- (long long)oneUpPresentationHelperPreferredBarStyle:(id)a0;
- (void)_registerBrowsingViewModelChangeObserver;
- (void)presentingViewControllerViewDidAppear:(BOOL)a0;
- (id)oneUpPresentationHelperViewController:(id)a0;
- (void)presentingViewControllerViewWillAppear:(BOOL)a0;
- (BOOL)_shouldStopCaptureSessionForIrisPlayerOfAssetViewModel:(id)a0;
- (void)resetNavigation;
- (id)persistedThumbnailImage;
- (void)_update;

@end
