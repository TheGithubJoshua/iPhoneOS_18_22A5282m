@class BSAtomicFlag, NSString, UIImageView, UIScrollView, NSObject, PBUIWallpaperParallaxSettings;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PBUIScrollableStaticWallpaperView : PBUIStaticWallpaperView <UIScrollViewDelegate> {
    UIImageView *_imageView;
    UIScrollView *_scrollView;
    PBUIWallpaperParallaxSettings *_parallaxSettings;
    double _minimumZoomScaleForParallax;
    double _minimumZoomScale;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_throttleTimer;
    BSAtomicFlag *_throttleCanUpdateFlag;
}

@property (nonatomic) BOOL automaticallyEnablesParallax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_canDownscaleSampleImage;
+ (BOOL)_canCacheImages;
+ (BOOL)_shouldScaleForParallax;

- (struct CGSize { double x0; double x1; })_imageSize;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)_resetColorBoxes;
- (void)_setupScrollView;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cropRect;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (void)setParallaxEnabled:(BOOL)a0;
- (void)_updateScrollViewZoomScales;
- (void)_cancelThrottle;
- (id)_wallpaperImageForAnalysis;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (struct CGPoint { double x0; double x1; })_minimumContentOffsetForOverhang;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })_boundedContentOffsetForOverhang;
- (id)_newImageView;
- (double)cropZoomScale;
- (void)didMoveToWindow;
- (id)_scrollView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (void)_scrollViewDidUpdate;
- (void)dealloc;
- (double)_parallaxFactorWithZoomScale:(double)a0 contentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (BOOL)supportsCropping;
- (void)layoutSubviews;
- (double)_throttleDuration;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)setContentView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cropRect;
- (double)_scrollViewParallaxFactor;
- (double)parallaxFactor;
- (struct CGPoint { double x0; double x1; })_maximumContentOffsetForOverhang;
- (void)_updateParallaxForScroll;

@end
