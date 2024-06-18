@class UIColor, _UIParallaxDimmingView, NSString, NSUUID, UIView, _UINavigationInteractiveTransitionBase;
@protocol UIViewControllerContextTransitioning;

@interface _UINavigationParallaxTransition : NSObject <_UIBasicAnimationFactory, UIViewControllerAnimatedTransitioningEx> {
    NSUUID *_currentRunningAnimationsUUID;
    NSUUID *_currentTrackingAnimatorsAnimationsUUID;
}

@property (nonatomic) long long operation;
@property (retain, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) BOOL interactionAborted;
@property (nonatomic) _UINavigationInteractiveTransitionBase *interactionController;
@property (retain, nonatomic) _UIParallaxDimmingView *borderDimmingView;
@property (retain, nonatomic) _UIParallaxDimmingView *contentDimmingView;
@property (retain, nonatomic) UIView *containerFromView;
@property (retain, nonatomic) UIView *containerToView;
@property (retain, nonatomic) UIView *clipUnderView;
@property (nonatomic) BOOL clipUnderlapWhileTransitioning;
@property (nonatomic) long long transitionStyle;
@property (nonatomic) double transitionGap;
@property (nonatomic, setter=_setShouldReverseLayoutDirection:) BOOL _shouldReverseLayoutDirection;
@property (retain, nonatomic) UIColor *overrideDimmingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setDefaultSlidingTransitionDuration:(double)a0;
+ (double)defaultSlidingTransitionDuration;

- (void)animateTransition:(id)a0;
- (id)_timingFunctionForAnimation;
- (double)transitionDuration:(id)a0;
- (id)initWithCurrentOperation:(long long)a0;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void)completeKeyboard:(id)a0;
- (void)resizeShadow:(id)a0;
- (id)resizedFromContainerView;
- (void)_stopTransitionImmediately;
- (id)shadowContainerForKeyboardTransition:(id)a0;
- (void)prepareToAnimateKeyboard:(id)a0;
- (void).cxx_destruct;
- (id)resizedToContainerView;
- (void)animateKeyboard:(id)a0;
- (double)gapBetweenViews;
- (void)animationEnded:(BOOL)a0;
- (double)parallaxOffset;

@end
