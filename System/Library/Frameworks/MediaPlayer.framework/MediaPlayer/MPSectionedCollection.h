@class NSString, NSArray;

@interface MPSectionedCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSObject> {
    NSArray *_sectionedItems;
    NSArray *_sections;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id firstSection;
@property (readonly, nonatomic) id lastSection;
@property (readonly, nonatomic) id firstItem;
@property (readonly, nonatomic) id lastItem;
@property (readonly, nonatomic) long long totalItemCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)indexPathForGlobalIndex:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (id)itemsInSectionAtIndex:(long long)a0;
- (id)init;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)allItems;
- (id)identifiersForSectionAtIndex:(long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)identifiersForItemAtIndexPath:(id)a0;
- (BOOL)hasSameContentAsSectionedCollection:(id)a0;
- (id)sectionAtIndex:(long long)a0;
- (id)_stateDumpObject;
- (long long)globalIndexForIndexPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)numberOfSections;
- (void)_initializeAsEmptySectionedCollection;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)a0;
- (id)allSections;
- (void)enumerateSectionsUsingBlock:(id /* block */)a0;
- (void)enumerateItemsInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (id)itemAtIndexPath:(id)a0;
- (id)changeDetailsToSectionedCollection:(id)a0 isEqualBlock:(id /* block */)a1 isUpdatedBlock:(id /* block */)a2;
- (id)changeDetailsToSectionedCollection:(id)a0 applyingUIKitWorkarounds:(BOOL)a1 isEqualBlock:(id /* block */)a2 isUpdatedBlock:(id /* block */)a3;
- (void)enumerateItemIdentifiersInSectionAtIndex:(long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateItemIdentifiersUsingBlock:(id /* block */)a0;
- (void)enumerateSectionIdentifiersUsingBlock:(id /* block */)a0;
- (id)lazyMapWithSections:(id /* block */)a0 items:(id /* block */)a1;

@end
