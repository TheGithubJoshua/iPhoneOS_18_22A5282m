@class SBSWallpaperClient, NSObject;
@protocol OS_dispatch_queue;

@interface SBSWallpaperService : NSObject {
    SBSWallpaperClient *_client;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _wasInvalidated;
}

@property (readonly, nonatomic) unsigned long long posterSignificantEventsCounter;

- (BOOL)setWallpaperGradient:(id)a0 forVariants:(unsigned long long)a1;
- (id)init;
- (BOOL)setWallpaperColorName:(id)a0 forVariants:(unsigned long long)a1;
- (void)fetchOriginalImageForVariant:(long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchLockScreenContentCutoutBoundsForOrientation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchLimitedOcclusionBoundsForOrientation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)triggerPosterSignificantEventWithCompletion:(id /* block */)a0;
- (void)fetchObscurableBoundsForOrientation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)fetchPosterSignificantEventsCounterWithCompletionHandler:(id /* block */)a0;
- (void)fetchThumbnailForVariant:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)setWallpaperColor:(id)a0 darkColor:(id)a1 forVariants:(unsigned long long)a2;
- (BOOL)setWallpaperWithVideoWithWallpaperMode:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 wallpaperMode:(long long)a2;
- (void)dealloc;
- (void)fetchContentCutoutBoundsForVariant:(long long)a0 orientation:(long long)a1 completionHandler:(id /* block */)a2;
- (void)fetchLockScreenTimeBoundsForOrientation:(long long)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)significantEventsCounterForPosterWithIdentifier:(id)a0;
- (void)restoreDefaultWallpaperWithCompletion:(id /* block */)a0;
- (void)fetchMaximalLockScreenContentCutoutBoundsForOrientation:(long long)a0 completionHandler:(id /* block */)a1;
- (void)fetchOriginalVideoURLForVariant:(long long)a0 completionHandler:(id /* block */)a1;

@end
