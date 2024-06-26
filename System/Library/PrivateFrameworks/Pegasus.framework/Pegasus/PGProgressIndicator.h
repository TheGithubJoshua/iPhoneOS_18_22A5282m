@class UIColor, PGVibrantFillView, UIViewPropertyAnimator;

@interface PGProgressIndicator : PGMaterialView {
    PGVibrantFillView *_elapsedTrack;
    PGVibrantFillView *_completeTrack;
    UIViewPropertyAnimator *_pulseAnimator;
    long long _pulseState;
}

@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *customElapsedTrackTintColor;
@property (nonatomic) BOOL includesWaitingToPlayIndicator;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_setCornerRadius:(double)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_applyPulseState;
- (void)_performLayout;
- (void)_transitionToPulseStateIfNeeded:(long long)a0;
- (void)_updateElapsedTrackTintColor;
- (void)_updatePulseAnimatorIfNeeded;

@end
