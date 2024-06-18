@class NSString, UIImageView, UIImage, UIViewFloatAnimatableProperty, MTMaterialView;

@interface SBHomeScreenBackdropView : SBHomeScreenBackdropViewBase {
    MTMaterialView *_materialView;
    UIImage *_blurredContentSnapshotImage;
    UIImageView *_blurredContentSnapshotImageView;
    unsigned long long _materialViewAnimationCount;
    BOOL _waitingForBackdropViewToRender;
    UIViewFloatAnimatableProperty *_backdropFloatAnimatableProperty;
}

@property (copy, nonatomic) NSString *materialRecipeName;

- (void)cancelInProcessAnimations;
- (void)_updateBackdropViewIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 materialRecipe:(long long)a1 scaleAdjustment:(id /* block */)a2;
- (void)beginRequiringLiveBackdropViewForReason:(id)a0;
- (void)endRequiringBackdropViewForReason:(id)a0;
- (void)_configureBackdropAnimatableProperty;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)beginRequiringBackdropViewForReason:(id)a0;
- (void)_resetHomeScreenBlurredContentSnapshotImage;
- (void)_updateBackdropViewIfNeededInvalidatingSnapshot:(BOOL)a0;
- (void)setBlurProgress:(double)a0 behaviorMode:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_setupBackdropViewWithRecipe:(long long)a0 scaleAdjustment:(id /* block */)a1;
- (id)homeScreenBlurredContentSnapshotImage;
- (void)endRequiringLiveBackdropViewForReason:(id)a0;
- (void)_invalidateBackdropSnapshot;
- (BOOL)isOpaque;

@end
