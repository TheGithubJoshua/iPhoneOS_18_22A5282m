@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (unsigned long long)indexingPriority;
- (id)addNotesFromSubtree:(id)a0;
- (id)persistentStoreCoordinator;
- (id)newManagedObjectContext;
- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (id)indexableObjectIDsMatchingPredicate:(id)a0 sortByReversedReindexingOrder:(BOOL)a1 context:(id)a2;
- (void)contextWillSave:(id)a0;
- (id)dataSourceIdentifier;

@end
