@class CAGradientLayer, CADisplayLink, NSDictionary, UIImage, NSMutableArray;

@interface PBUIBokehWallpaperView : PBUIWallpaperView {
    CADisplayLink *_displayLink;
    NSMutableArray *_circleArray;
    NSDictionary *_options;
    long long _circleFillColor;
    UIImage *_cachedSnapshotImage;
    struct __IOSurface { } *_snapshotBuffer;
    BOOL _isOnLockScreen;
    BOOL _contentIsVisible;
    BOOL _hasSingleVariant;
    BOOL _blursNeedInvalidation;
}

@property (readonly, nonatomic) CAGradientLayer *layer;

+ (Class)layerClass;
+ (BOOL)allowsParallax;

- (void)_wallpaperDidChange:(id)a0;
- (id)_computeAverageColor;
- (void)_updateOrientationIfNeeded;
- (void)_updateVariantStatus;
- (void)_screenDimmed:(id)a0;
- (void)_toggleCircleAnimations:(BOOL)a0;
- (BOOL)isContentStatic;
- (long long)userInterfaceStyle;
- (void)_screenUndimmed:(id)a0;
- (void)_initDisplayLink;
- (BOOL)isDisplayingWallpaperWithConfiguration:(id)a0 forVariant:(long long)a1;
- (void)_addBokehCircles:(long long)a0 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_destroyDisplayLink;
- (BOOL)_layerIsOutOfBounds:(id)a0;
- (void)_screenDidUpdate:(id)a0;
- (void)_styleModeChanged:(id)a0;
- (void)_updateGradientAndFillColor;
- (void)invalidate;
- (void).cxx_destruct;
- (id)snapshotImage;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 variant:(long long)a2 cacheGroup:(id)a3 delegate:(id)a4 options:(unsigned long long)a5;
- (long long)wallpaperType;
- (void)setWallpaperAnimationEnabled:(BOOL)a0;
- (void)dealloc;
- (id)_generateImageFromImage:(id)a0 forBackdropParameters:(struct { long long x0; long long x1; long long x2; double x3; double x4; double x5; double x6; long long x7; })a1 includeTint:(BOOL)a2 traitCollection:(id)a3;
- (id)cacheGroup;
- (void)_handleVariantChange;
- (BOOL)_needsFallbackImageForBackdropGeneratedImage:(id)a0;
- (void)_correctGyroValues:(inout double *)a0 y:(inout double *)a1;
- (struct __IOSurface { } *)_createSnapshotBuffer;
- (BOOL)_lowPowerModeIsEnabled;
- (void)_thermalStateDidChange:(id)a0;
- (BOOL)_thermalStateIsCritical;

@end
