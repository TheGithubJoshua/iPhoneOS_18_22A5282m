@class _UIRefreshControlModernReplicatorView, _UIRefreshControlSeedView, UILabel, UIView;

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView {
    BOOL _animationsAreValid;
    UIView *_replicatorContainer;
    _UIRefreshControlModernReplicatorView *_replicatorView;
    _UIRefreshControlSeedView *_seed;
    BOOL _hasFinishedRevealing;
}

@property (nonatomic) BOOL areAnimationsValid;
@property (nonatomic) BOOL horizontallyCenteredFramesNeedUpdate;
@property (readonly, nonatomic) UILabel *textLabel;
@property (nonatomic) double currentPopStiffness;
@property (nonatomic) double impactIntensity;

- (void)setTintColor:(id)a0;
- (double)_currentTimeOffset;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_bloomedSeedTransform;
- (void)_unbloom;
- (void)_cleanUpAfterRevealing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setUnbloomedAppearance;
- (id)_effectiveTintColorWithAlpha:(double)a0;
- (void)_setSpunAppearance;
- (void)_tickDueToProgrammaticRefresh;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_bloom;
- (void)_tick;
- (void)setAttributedTitle:(id)a0;
- (void)_removeAllAnimations;
- (id)attributedTitle;
- (void)_reveal;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)_goAway;
- (void).cxx_destruct;
- (void)_snappingMagic;
- (void)_setBloomedAppearance;
- (id)_effectiveTintColor;
- (double)_maximumSnappingHeightScalingForScrollViewHeight;
- (void)_resetToRevealingState;
- (void)willTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (double)_percentageShowing;
- (long long)style;
- (double)maximumSnappingHeight;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_unbloomedSeedTransform;
- (void)layoutSubviews;
- (void)_spin;
- (void)didTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)_updateTimeOffsetOfRelevantLayers;

@end
