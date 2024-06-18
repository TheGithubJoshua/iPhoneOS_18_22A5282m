@class NSMutableArray;
@protocol _UIDiffableDataSourceState;

@interface __UIDiffableDataSourceSnapshot : __UIDiffableDataSource <NSCopying> {
    id<_UIDiffableDataSourceState> _state;
    NSMutableArray *_pendingSnapshotUpdates;
}

- (long long)numberOfItems;
- (void)insertSectionsWithIdentifiers:(id)a0 afterSectionWithIdentifier:(id)a1;
- (id)sectionIdentifierForIndex:(long long)a0;
- (void)insertItemsWithIdentifiers:(id)a0 afterItemWithIdentifier:(id)a1;
- (void)moveItemWithIdentifier:(id)a0 afterItemWithIdentifier:(id)a1;
- (void)appendSectionsWithIdentifiers:(id)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (void)reconfigureItemsWithIdentifiers:(id)a0;
- (void)deleteSectionsWithIdentifiers:(id)a0;
- (void)appendItemsWithIdentifiers:(id)a0 intoSectionWithIdentifier:(id)a1;
- (void)reloadItemsWithIdentifiers:(id)a0;
- (void)insertItemsWithIdentifiers:(id)a0 beforeItemWithIdentifier:(id)a1;
- (long long)indexOfSectionIdentifier:(id)a0;
- (long long)indexForSectionIdentifier:(id)a0;
- (id)indexPathForItemIdentifier:(id)a0;
- (void)deleteItemsWithIdentifiers:(id)a0;
- (id)initWithState:(id)a0;
- (void)insertSectionsWithIdentifiers:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (id)reloadedSectionIdentifiers;
- (void)moveItemWithIdentifier:(id)a0 beforeItemWithIdentifier:(id)a1;
- (long long)indexOfItemIdentifier:(id)a0;
- (id)sectionIdentifiers;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (void)moveSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (id)init;
- (void)moveSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)reloadSectionsWithIdentifiers:(id)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (id)reconfiguredItemIdentifiers;
- (void)deleteAllItems;
- (long long)numberOfItemsInSection:(id)a0;
- (void)appendItemsWithIdentifiers:(id)a0;
- (id)itemIdentifiers;
- (id)state;
- (id)reloadedItemIdentifiers;
- (id)_identifiersForSectionsOrItems:(BOOL)a0 reconfiguredOrReloaded:(BOOL)a1;
- (void)_validateReloadUpdateThrowingIfNeeded:(id)a0;
- (id)pendingSnapshotUpdates;
- (void)appendSectionWithIdentifier:(id)a0;
- (void)_prepareForApplyToDataSource;
- (void)insertSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (long long)numberOfSections;
- (void)insertSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)_commitUpdateAtomic:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
