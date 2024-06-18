@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (unsigned long long)indexingPriority;
- (id)addNotesFromSubtree:(id)a0;
- (id)persistentStoreCoordinator;
- (id)newManagedObjectContext;
- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (void)contextWillSave:(id)a0;
- (id)dataSourceIdentifier;
- (id)additionalItemsForObject:(id)a0;
- (id)additionalUniqueIdentifiersToDeleteForObject:(id)a0;
- (BOOL)isPaperKitOrSynapseAttachment:(id)a0;
- (id)searchableItemForSynapseContentItem:(id)a0 note:(id)a1 attachment:(id)a2;
- (id)searchableItemResultForObject:(id)a0;
- (id)synapseItemsForObject:(id)a0;

@end
