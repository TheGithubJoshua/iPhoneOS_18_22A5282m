@class ISLivePhotoUIView, AVPlayerItem;

@interface PXDisplayAssetLivePhotoContentView : PXDisplayAssetContentView {
    ISLivePhotoUIView *_livePhotoView;
}

@property (retain, nonatomic) AVPlayerItem *videoPlayerItem;
@property (nonatomic) double playerItemLoadingProgress;

- (void)updateContent;
- (void)_updateLivePhotoPlayerItem;
- (void).cxx_destruct;
- (id)contentView;
- (double)loadingProgress;
- (long long)playbackStyle;
- (void)_handlePlayerItemResult:(id)a0 info:(id)a1 requestID:(long long)a2;
- (void)_updateLivePhotoContentMode;
- (void)contentModeDidChange;
- (void)contentsRectDidChange;
- (void)imageDidChange;
- (void)imageProgressDidChange;
- (void)imageRequesterDidChange:(unsigned long long)a0;
- (BOOL)isDisplayingFullQualityContent;
- (void)placeholderImageFiltersDidChange;
- (void)viewModelDidChange:(unsigned long long)a0;

@end
