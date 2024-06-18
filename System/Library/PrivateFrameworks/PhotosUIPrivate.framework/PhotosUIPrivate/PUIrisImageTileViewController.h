@class NSString, PHLivePhotoView, PXLivePhotoViewModulator, NSObject;
@protocol OS_dispatch_queue, PUIrisImageTileViewControllerDelegate;

@interface PUIrisImageTileViewController : PUImageTileViewController <PHLivePhotoViewDelegate, PHLivePhotoViewDelegatePrivate, PUBrowsingViewModelChangeObserver> {
    struct { BOOL respondsToDidBeginPlaying; BOOL respondsToWillEndPlaying; BOOL respondsToDidEndPlaying; BOOL respondsToDidEndVitality; BOOL respondsToDidBeginHinting; BOOL respondsToViewHostingGestureRecognizers; BOOL respondsToDelegateForGestureRecognizer; } _delegateFlags;
    id /* block */ _ppt_didEndPlayingHandler;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *srlCompensationLoadingQueue;

@property (readonly, nonatomic) PHLivePhotoView *_livePhotoView;
@property (retain, nonatomic) PXLivePhotoViewModulator *livePhotoViewModulator;
@property (nonatomic) BOOL isVitalityDisabledBytransformInset;
@property (weak, nonatomic) id<PUIrisImageTileViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateModulator;
- (id)generateAssetTransitionInfo;
- (void)updateModulatorInputs;
- (void)setAssetViewModel:(id)a0;
- (void)assetViewModelDidChange;
- (void)applyLayoutInfo:(id)a0;
- (void)_updateLivePhotoViewVitalityEnabled;
- (void)assetDidChange;
- (void)_assetFocusValueDidChange;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)loadView;
- (void)_updateSRLCompensation;
- (void)_updatePlayerViewInteractivePlaybackAllowed;
- (void)removeAllAnimations;
- (void)_updatePlaybackGestureRecognizer;
- (void)addToTilingView:(id)a0;
- (void)_handleBrowsingIrisPlayer:(id)a0 didChange:(id)a1;
- (void)livePhotoView:(id)a0 willBeginPlaybackWithStyle:(long long)a1;
- (void).cxx_destruct;
- (void)_handleLoadedSRLCompensationAmount:(id)a0 forAsset:(id)a1;
- (void)ppt_playLivePhotoWithCompletionHandler:(id /* block */)a0;
- (void)livePhotoViewDidBeginHinting:(id)a0;
- (void)_updateVitalityTransform;
- (void)livePhotoView:(id)a0 didEndPlaybackWithStyle:(long long)a1;
- (void)livePhotoViewDidEndPlayingVitality:(id)a0;

@end
