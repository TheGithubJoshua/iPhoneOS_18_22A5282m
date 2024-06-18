@class NSString, SBTraitsPipelineBlockBasedPolicySpecifier;

@interface SBAbstractTraitsSwitcherPolicySpecifier : NSObject <BSInvalidatable> {
    SBTraitsPipelineBlockBasedPolicySpecifier *_blockBasedPolicySpecifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithComponentOrder:(id)a0 arbiter:(id)a1;
- (void)_updateAcquiredParticipantsPolicies:(id)a0 context:(id)a1;
- (id)_specifierDescription;
- (void)dealloc;
- (id)_blockBasedPolicySpecifier;

@end
