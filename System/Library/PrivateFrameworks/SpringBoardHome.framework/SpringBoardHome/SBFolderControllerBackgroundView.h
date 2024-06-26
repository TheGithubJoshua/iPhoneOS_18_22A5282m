@class UIImageView, UIView, MTMaterialView;
@protocol SBFolderControllerBackgroundViewDelegate;

@interface SBFolderControllerBackgroundView : SBFFocusIsolationView {
    MTMaterialView *_blurView;
    UIImageView *_blurViewSnapshot;
    UIView *_tintView;
    UIView *_debugFreezingView;
}

@property (nonatomic, getter=isReduceTransparencyEnabled) BOOL reduceTransparencyEnabled;
@property (readonly, nonatomic) unsigned long long concreteEffect;
@property (nonatomic) unsigned long long currentEffect;
@property (weak, nonatomic) id<SBFolderControllerBackgroundViewDelegate> delegate;
@property (nonatomic, getter=isTransitionCancelled) BOOL transitionCancelled;
@property (nonatomic) unsigned long long effect;
@property (nonatomic, getter=isEffectActive) BOOL effectActive;
@property (nonatomic, getter=isExpanding) BOOL expanding;
@property (nonatomic, getter=isFrozen) BOOL frozen;

+ (id)_tintColorForEffect:(unsigned long long)a0;

- (void)_updateCurrentEffect;
- (double)minimumHomeScreenScale;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reduceTransparencyEnabledStateChanged;
- (id)currentEffectMaterialRecipeNameForHighQualityBlur:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_isCurrentlyExpanding;
- (void)layoutSubviews;

@end
