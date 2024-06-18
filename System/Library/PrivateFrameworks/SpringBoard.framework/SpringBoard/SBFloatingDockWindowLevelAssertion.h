@class NSString, SBFloatingDockController;

@interface SBFloatingDockWindowLevelAssertion : NSObject <BSDescriptionProviding, BSInvalidatable>

@property (readonly, weak, nonatomic) SBFloatingDockController *floatingDockController;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) double level;
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
- (id)initWithFloatingDockController:(id)a0 priority:(unsigned long long)a1 level:(double)a2 reason:(id)a3;

@end
