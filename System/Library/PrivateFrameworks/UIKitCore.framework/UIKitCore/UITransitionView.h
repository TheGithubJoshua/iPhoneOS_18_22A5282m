@class UIWindow, UIResponder, NSMutableArray, UIView;

@interface UITransitionView : UIView <NSCoding> {
    UIView *_fromView;
    UIView *_toView;
    NSMutableArray *_frozenSubviews;
    UIResponder *_firstResponderToRemember;
    id _delegate;
    UIWindow *_originalWindow;
    struct { unsigned char animationInProgress : 1; unsigned char ignoresInteractionEvents : 1; unsigned char shouldNotifyDidCompleteImmediately : 1; unsigned char useViewControllerAppearanceCallbacks : 1; unsigned char shouldRestoreFromViewAlpha : 1; unsigned char shouldRestoreGroupOpacity : 1; unsigned char groupOpacityToRestoreForFromView : 1; unsigned char groupOpacityToRestoreForToView : 1; unsigned char shouldRasterize : 1; unsigned char enableRotationAfterTransition : 1; unsigned char removeFromView : 1; } _transitionViewFlags;
    double _curlUpRevealedHeight;
    int _textEffectsVisibilityLevel;
}

@property (readonly, nonatomic) double _curlUpRevealedHeight;
@property (nonatomic) BOOL shouldNotifyDidCompleteImmediately;
@property (nonatomic) long long animationTimingCurve;
@property (nonatomic) BOOL ignoreDirectTouchEvents;

+ (double)defaultDurationForTransition:(int)a0;

- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)willMoveToSuperview:(id)a0;
- (void)_didStartTransition;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (int)textEffectsVisibilityLevel;
- (BOOL)ignoresInteractionEvents;
- (BOOL)transition:(int)a0 fromView:(id)a1 toView:(id)a2 removeFromView:(BOOL)a3;
- (void)_transitionDidStopFinished:(BOOL)a0;
- (void)notifyDidCompleteTransition:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_traitCollectionForChildEnvironment:(id)a0;
- (BOOL)_shouldDisableGroupOpacityOnAlphaTransitions;
- (BOOL)transition:(int)a0 toView:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)toView;
- (BOOL)transition:(int)a0 fromView:(id)a1 toView:(id)a2;
- (void)safeAreaInsetsDidChange;
- (void)traitCollectionDidChange:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_startTransition:(int)a0 withDuration:(double)a1;
- (void)setDelegate:(id)a0;
- (double)durationForTransition:(int)a0;
- (void).cxx_destruct;
- (id)delegate;
- (BOOL)rasterizesOnTransition;
- (id)fromView;
- (void)setRasterizesOnTransition:(BOOL)a0;
- (BOOL)_isTransitioningFromFromView:(id)a0;
- (void)_didCompleteTransition:(BOOL)a0;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isTransitioning;
- (void)_viewDidMoveFromScreen:(id)a0 toScreen:(id)a1;
- (void)setIgnoresInteractionEvents:(BOOL)a0;

@end
