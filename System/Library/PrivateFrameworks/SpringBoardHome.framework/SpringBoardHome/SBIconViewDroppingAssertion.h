@class SBIconView, NSString;

@interface SBIconViewDroppingAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) SBIconView *iconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)initWithIconView:(id)a0;

@end
