@class UIColor, NSString, UIView;

@interface SBCoverSheetBlurView : UIView <PBUIWallpaperObserver> {
    id /* block */ _scaleAdjustment;
    id /* block */ _alphaAdjustment;
    UIView *_reduceTransparencyView;
    long long _variantToTrack;
}

@property (nonatomic) double blurRadius;
@property (nonatomic) double weighting;
@property (retain, nonatomic) UIColor *dimmingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)_configureForCurrentReduceTransparencySetting;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaleAdjustment:(id /* block */)a1 alphaAdjustment:(id /* block */)a2;
- (id)backdropLayer;
- (void)wallpaperDidChangeForVariant:(long long)a0;
- (void)_updateForBlurRadius:(double)a0 weighting:(double)a1 forPresentationValue:(BOOL)a2;
- (void)_createReduceTransparencyView;
- (id)_averageWallpaperColor;
- (void)setWeighting:(double)a0 forPresentationValue:(BOOL)a1;
- (void).cxx_destruct;
- (void)_reduceTransparencyEnabledStateDidChange:(id)a0;
- (void)_createFilters;
- (void)dealloc;
- (void)_removeFilters;
- (void)_removeReduceTransparencyView;
- (void)layoutSubviews;

@end
