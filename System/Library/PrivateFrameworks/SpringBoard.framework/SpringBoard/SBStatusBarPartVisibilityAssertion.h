@class NSString, NSMutableSet, UIStatusBar;

@interface SBStatusBarPartVisibilityAssertion : BSSimpleAssertion <BSDescriptionProviding> {
    UIStatusBar *_statusBar;
    NSMutableSet *_hiddenParts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1 forReason:(id)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isHidingStatusBarPartWithIdentifier:(id)a0;
- (void)setStatusBarPartWithIdentifier:(id)a0 hidden:(BOOL)a1 animated:(BOOL)a2;
- (void)_setStatusBarPartWithIdentifier:(id)a0 hidden:(BOOL)a1 animatedWithDuration:(double)a2;
- (void)setStatusBarPartWithIdentifier:(id)a0 hidden:(BOOL)a1 animatedWithDuration:(double)a2;

@end
