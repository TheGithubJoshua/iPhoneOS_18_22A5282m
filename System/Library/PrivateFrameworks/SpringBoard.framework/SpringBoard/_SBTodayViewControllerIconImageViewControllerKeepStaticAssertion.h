@class NSString, SBTodayViewController;

@interface _SBTodayViewControllerIconImageViewControllerKeepStaticAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>

@property (readonly, weak, nonatomic) SBTodayViewController *todayViewController;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSString *reason;
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
- (id)initWithTodayViewController:(id)a0 reason:(id)a1;

@end
