@interface _DKEligibleForPredictionTombstoneRequirement : _DKTombstoneRequirement

- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;
- (id)eligibleForPredictionKey;
- (id)eventPredicate;
- (id)predicate;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;
- (id)identifier;
- (id)propertiesToFetch;

@end
