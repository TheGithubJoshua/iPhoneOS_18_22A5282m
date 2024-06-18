@class NSString;

@interface SBTraitsSwitcherLiveOverlayPolicySpecifier : SBAbstractTraitsSwitcherPolicySpecifier

@property (nonatomic) long long primaryElementResolutionPolicy;
@property (copy, nonatomic) NSString *primaryElementParticipantIdentifier;
@property (nonatomic) long long nonPrimaryResolutionPolicy;

- (void).cxx_destruct;
- (id)initWithComponentOrder:(id)a0 arbiter:(id)a1;
- (void)_updateAcquiredParticipantsPolicies:(id)a0 context:(id)a1;
- (id)_specifierDescription;
- (void)_updateParticipant:(id)a0 withPolicy:(long long)a1 context:(id)a2;

@end
