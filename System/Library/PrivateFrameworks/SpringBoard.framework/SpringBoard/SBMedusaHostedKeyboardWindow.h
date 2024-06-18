@class NSString, NSMutableArray, SBMedusaHostedKeyboardWindowLevelAssertion;
@protocol UIScenePresenter;

@interface SBMedusaHostedKeyboardWindow : SBWindow <BSInvalidatable> {
    id<UIScenePresenter> _remoteHostedKeyboardScenePresenter;
    SBMedusaHostedKeyboardWindowLevelAssertion *_defaultWindowLevelAssertion;
}

@property (retain, nonatomic) NSMutableArray *windowLevelAssertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)autorotates;
+ (BOOL)_isSecure;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)medusaHostedKeyboardWindowWillShow:(id)a0;
- (void)_updateWindowLevel;
- (id)initWithWindowScene:(id)a0 keyboardScene:(id)a1;
- (void)medusaHostedKeyboardWindowWillHide:(id)a0;
- (void)removeWindowLevelAssertion:(id)a0;
- (id)succinctDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)addWindowLevelAssertion:(id)a0;
- (BOOL)_shouldControlAutorotation;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)setHidden:(BOOL)a0;
- (id)newWindowLevelAssertionWithPriority:(unsigned long long)a0 windowLevel:(double)a1;
- (BOOL)isActive;

@end
