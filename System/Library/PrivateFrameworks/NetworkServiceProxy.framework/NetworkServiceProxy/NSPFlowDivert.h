@class NEPolicySession, NEFlowDivertFileHandle, NSPConfiguration;

@interface NSPFlowDivert : NEAppProxyProviderContainer

@property (retain) NEPolicySession *policySession;
@property BOOL started;
@property BOOL shouldResetPolicies;
@property (retain, nonatomic) NSPConfiguration *configuration;
@property (retain, nonatomic) NEFlowDivertFileHandle *flowDivertControlHandle;

- (id)getAgentResultsForSelf;
- (id)getExecutableConditions:(id)a0;
- (id)createPolicySession;
- (void)stop;
- (void)addPolicy:(id)a0;
- (id)initWithDelegate:(id)a0 providerClass:(Class)a1 configuration:(id)a2;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)didStartWithError:(id)a0;
- (id)getEffectiveAppRules:(id)a0;
- (void)destroyPolicySession;
- (void)didFailWithError:(id)a0;
- (void)addPoliciesForAgent:(id)a0 conditions:(id)a1;
- (void)addPoliciesForDivertDNSOnly:(id)a0 domainConditions:(id)a1 divertResult:(id)a2;
- (void)teardown;
- (void).cxx_destruct;
- (BOOL)resetPolicies:(BOOL)a0;
- (id)createFlowDivertSocketHandle;
- (id)getAgentResults:(id)a0;
- (void)destroyFlowDivertSocketHandles;

@end
