@class NSString, UIViewController, NSCountedSet;

@interface SBMainScreenActiveInterfaceOrientationWindow : SBWindow <BSDescriptionProviding, SBUIActiveOrientationObserver> {
    NSCountedSet *_orientationUpdateDisableReasons;
}

@property (readonly, copy, nonatomic) NSString *debugName;
@property (retain, nonatomic, setter=setContentViewController:) UIViewController *contentViewController;
@property (nonatomic) BOOL passesTouchesThrough;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_traitsArbiterOrientationActuationRole;
+ (BOOL)sb_autorotates;
+ (BOOL)_traitsArbiterOrientationActuationEnabled;
+ (BOOL)layoutContentViewControllerWithConstraints;

- (void)setRootViewController:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)a0 willAnimateWithDuration:(double)a1 fromOrientation:(long long)a2;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)_canBecomeKeyWindow;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)rootViewController;
- (void)setHidden:(BOOL)a0;
- (BOOL)isActive;
- (id)initWithWindowScene:(id)a0 role:(id)a1 debugName:(id)a2;
- (void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)a0;
- (void)_updateSupportedInterfaceOrientationsForTraitArbiterActuationIfNeeded;
- (void)disableInterfaceOrientationChangesForReason:(id)a0;
- (unsigned long long)effectiveRootViewControllerSupportedInterfaceOrientations;
- (void)enableInterfaceOrientationChangesForReason:(id)a0;
- (id)initWithRole:(id)a0 debugName:(id)a1;
- (BOOL)isDisablingInterfaceOrientationChanges;

@end
