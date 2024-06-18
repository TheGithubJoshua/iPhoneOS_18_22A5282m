@class NSString, BKSProcessAssertion, FBSProcessExecutionPolicy;
@protocol FBSProcess;

@interface FBSProcessAssertion : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) BKSProcessAssertion *assertion;
@property (readonly, nonatomic) unsigned long long activationCount;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, weak, nonatomic) id<FBSProcess> process;
@property (readonly, nonatomic) FBSProcessExecutionPolicy *policy;
@property (readonly, nonatomic, getter=isActivated) BOOL activated;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithName:(id)a0 process:(id)a1 policy:(id)a2;
- (id)succinctDescription;
- (void)activate;
- (void)deactivate;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;

@end
