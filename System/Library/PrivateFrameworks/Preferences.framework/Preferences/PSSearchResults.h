@class NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface PSSearchResults : NSObject <NSCopying> {
    NSMutableArray *_sectionEntries;
    NSMutableSet *_explicitlyAddedSectionEntries;
    NSMutableDictionary *_entriesBySection;
    BOOL _needsSorting;
}

@property (copy, nonatomic) id /* block */ sectionComparator;
@property (copy, nonatomic) id /* block */ entryComparator;
@property (nonatomic) BOOL treatSectionEntriesAsRegularEntries;

- (id)init;
- (BOOL)removeEntry:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addEntries:(id)a0;
- (void)addEntry:(id)a0;
- (id)_initForCopyWithSectionEntries:(id)a0 entriesBySection:(id)a1 explicitlyAddedSectionEntries:(id)a2;
- (id)allSectionEntries;
- (id)entriesInSectionAtIndex:(unsigned long long)a0;
- (id)entryAtIndexPath:(id)a0;
- (void)mergeWithResults:(id)a0;
- (unsigned long long)numberOfEntriesInSectionAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfSectionEntries;
- (unsigned long long)removeEntries:(id)a0;
- (id)resultsByMergingWithResults:(id)a0;
- (id)sectionEntryAtIndex:(unsigned long long)a0;
- (void)sortResults;
- (unsigned long long)totalNumberOfEntries;

@end
