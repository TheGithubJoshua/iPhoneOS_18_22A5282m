@interface SignpostSupportSubsystemCategoryBlacklist : SignpostSupportSubsystemCategoryFilter

- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (unsigned long long)_compoundPredicateType;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (BOOL)_wantsNotSubsystem;
- (id)initWithEntries:(id)a0;
- (id)liveStreamingPredicate;

@end
