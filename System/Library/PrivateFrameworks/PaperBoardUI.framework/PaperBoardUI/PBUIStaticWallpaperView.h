@class NSString, UIImage, NSURL, NSData, PBUIColorBoxes;

@interface PBUIStaticWallpaperView : PBUIWallpaperView {
    double _overallContrast;
    PBUIColorBoxes *_colorBoxes;
}

@property (retain, nonatomic, getter=_displayedImage, setter=_setDisplayedImage:) UIImage *displayedImage;
@property (retain, nonatomic, getter=_displayedImageURL, setter=_setDisplayedImageURL:) NSURL *displayedImageURL;
@property (retain, nonatomic, getter=_sampleImage, setter=_setSampleImage:) UIImage *sampleImage;
@property (copy, nonatomic) NSData *displayedImageHashData;
@property (copy, nonatomic) NSString *displayedImageHashString;
@property (nonatomic) BOOL needsInactiveAppearanceTreatment;
@property (retain, nonatomic) PBUIColorBoxes *colorBoxes;

+ (BOOL)_allowsRasterization;
+ (BOOL)_canDownscaleSampleImage;
+ (BOOL)isRunningInPreferencesApp;
+ (BOOL)allowsParallax;
+ (BOOL)_canCacheImages;

- (double)contrast;
- (struct CGSize { double x0; double x1; })_imageSize;
- (void)_setupWallpaperImageFromConfiguration:(id)a0 options:(unsigned long long)a1;
- (BOOL)handlesInactiveAppearanceTreatment;
- (id)_computeAverageColor;
- (void)_displayImage:(id)a0;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1;
- (BOOL)hasContentOutsideVisibleBounds;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)cacheUniqueIdentifier;
- (BOOL)imageRequiresLuminanceTreatment;
- (void)_setUpStaticImageContentView:(id)a0;
- (id)_wallpaperImageForAnalysis;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)a0 forVariant:(long long)a1;
- (BOOL)workaround_alwaysForceNoTreatment;
- (id)_createColorBoxes;
- (double)contrastInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contrastWithinBoxes:(double *)a1 contrastBetweenBoxes:(double *)a2;
- (void).cxx_destruct;
- (id)snapshotImage;
- (double)cropZoomScale;
- (id)wallpaperImage;
- (void)preheatImageData;
- (float)_zoomScale;
- (void)_generateImageForImage:(id)a0 cacheKey:(id)a1 options:(unsigned long long)a2 downsampleFactor:(double)a3 needsDimmingTreatment:(BOOL)a4 needsInactiveAppearanceTreatment:(BOOL)a5 averageColorProvider:(id /* block */)a6 generationHandler:(id /* block */)a7;
- (void)_updateColorBoxesWithKey:(id)a0 image:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (long long)wallpaperType;
- (id)snapshotImageURL;
- (void)_setupContentViewWithOptions:(unsigned long long)a0;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 smudgeRadius:(double)a1;
- (double)_contrastInContentViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contrastWithinBoxes:(double *)a1 contrastBetweenBoxes:(double *)a2;

@end
