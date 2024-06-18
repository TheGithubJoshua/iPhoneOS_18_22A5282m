@class NSUUID, NSOrderedSet, NSString;
@protocol _UIDataSourceSnapshotTranslating;

@interface _UIDiffableDataSourceState : NSObject <_UIDiffableDataSourceState, NSCopying> {
    NSUUID *_generationID;
    id<_UIDataSourceSnapshotTranslating> _dataSourceSnapshot;
    NSOrderedSet *_identifiers;
    NSOrderedSet *_sections;
    NSOrderedSet *_guaranteedPerformanceIdentifiers;
    NSOrderedSet *_guaranteedPerformanceSections;
    unsigned long long _identifierLookupCount;
    unsigned long long _sectionLookupCount;
}

@property (readonly, nonatomic) NSUUID *generationID;
@property (readonly, nonatomic) NSOrderedSet *identifiers;
@property (readonly, nonatomic) NSOrderedSet *sections;
@property (readonly, nonatomic) id<_UIDataSourceSnapshotTranslating> dataSourceSnapshot;
@property (readonly, nonatomic) NSOrderedSet *guaranteedPerformanceIdentifiers;
@property (readonly, nonatomic) NSOrderedSet *guaranteedPerformanceSections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfItems;
- (id)sectionIdentifierForIndex:(long long)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (long long)indexOfSectionIdentifier:(id)a0;
- (long long)indexForSectionIdentifier:(id)a0;
- (id)indexPathForItemIdentifier:(id)a0;
- (id)initWithState:(id)a0;
- (long long)indexOfItemIdentifier:(id)a0;
- (id)sectionIdentifiers;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (id)init;
- (void)validateIdentifiers;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (long long)numberOfItemsInSection:(id)a0;
- (id)itemIdentifiers;
- (id)initWithGenerationID:(id)a0 identifiers:(id)a1 sections:(id)a2 dataSourceSnapshot:(id)a3 identifiersHaveGuaranteedPerformance:(BOOL)a4 sectionsHaveGuaranteedPerformance:(BOOL)a5;
- (id)initWithGenerationID:(id)a0 identifiers:(id)a1 sections:(id)a2 dataSourceSnapshot:(id)a3;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsSectionIdentifier:(id)a0;
- (id)initWithStateAdvancingGenerationID:(id)a0;
- (void)willBecomeWiredToDataSource;
- (id)sectionIndexesForItemIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)ensureOrderedSetsHaveGuaranteedPerformance;
- (BOOL)containsItemIdentifier:(id)a0;

@end
