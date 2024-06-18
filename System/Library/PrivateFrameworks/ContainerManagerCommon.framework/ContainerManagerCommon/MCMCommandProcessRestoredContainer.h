@class MCMConcreteContainerIdentity;

@interface MCMCommandProcessRestoredContainer : MCMCommand <MCMParametersWithConcreteContainer>

@property (readonly, nonatomic) MCMConcreteContainerIdentity *concreteContainerIdentity;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;
- (id)initWithConcreteContainerIdentity:(id)a0 context:(id)a1 resultPromise:(id)a2;

@end
