@class PHAnimatedImage, NSMutableSet, PUMediaProvider;
@protocol PUDisplayAsset;

@interface PUBrowsingAnimatedImagePlayer : PUViewModel {
    struct { BOOL animatedImage; } _isValid;
}

@property (retain, nonatomic, setter=_setAnimatedImage:) PHAnimatedImage *animatedImage;
@property (nonatomic, setter=_setAnimatedImageLoadingAllowed:) BOOL isAnimatedImageLoadingAllowed;
@property (retain, nonatomic) NSMutableSet *_animatedImageLoadingDisablingReasons;
@property (nonatomic, setter=_setAnimatedImageRequestID:) int _animatedImageRequestID;
@property (retain, nonatomic) id<PUDisplayAsset> asset;
@property (readonly, nonatomic) PUMediaProvider *mediaProvider;

- (void)_updateIfNeeded;
- (id)init;
- (BOOL)_needsUpdate;
- (void)didPerformChanges;
- (void)_invalidateAnimatedImage;
- (void).cxx_destruct;
- (id)debugDetailedDescription;
- (void)dealloc;
- (id)newViewModelChange;
- (void)_cancelLoading;
- (void)_handleAnimatedImageRequestComplete:(id)a0;
- (void)_updateAnimatedImage;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1;
- (void)setAnimatedImageLoadingDisabled:(BOOL)a0 forReason:(id)a1;
- (void)unloadAnimatedImage;

@end
