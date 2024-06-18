@interface _DKSyncStreamsTombstoneRequirement : _DKTombstoneRequirement

- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;
- (id)eventPredicate;
- (id)predicate;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;
- (id)propertiesToFetch;

@end
