@class _MPLazySectionedCollectionStorage;
@protocol MPLazySectionedCollectionDataSource;

@interface MPLazySectionedCollection : MPSectionedCollection {
    _MPLazySectionedCollectionStorage *_storage;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property (retain, nonatomic) id<MPLazySectionedCollectionDataSource> dataSource;

+ (BOOL)supportsSecureCoding;

- (id)lastItem;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)itemsInSectionAtIndex:(long long)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)allItems;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)identifiersForItemAtIndexPath:(id)a0;
- (id)initWithDataSource:(id)a0;
- (BOOL)hasSameContentAsSectionedCollection:(id)a0;
- (id)firstItem;
- (id)_safeStateDumpObject;
- (id)sectionAtIndex:(long long)a0;
- (id)firstSection;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (id)allSections;
- (void)dealloc;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (void)enumerateItemsInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (id)lastSection;
- (id)itemAtIndexPath:(id)a0;

@end
