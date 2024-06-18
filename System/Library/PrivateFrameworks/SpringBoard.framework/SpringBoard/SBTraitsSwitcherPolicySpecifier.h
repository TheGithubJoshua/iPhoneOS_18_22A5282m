@class NSString;

@interface SBTraitsSwitcherPolicySpecifier : SBAbstractTraitsSwitcherPolicySpecifier

@property (nonatomic) long long resolutionPolicy;
@property (copy, nonatomic) NSString *primaryElementParticipantIdentifier;

- (void).cxx_destruct;
- (id)initWithComponentOrder:(id)a0 arbiter:(id)a1;
- (void)_updateAcquiredParticipantsPolicies:(id)a0 context:(id)a1;
- (id)_specifierDescription;

@end
