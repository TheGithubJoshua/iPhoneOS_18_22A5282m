@class _UICollectionLayoutSectionGeometryTranslator, NSArray, _UIRTree, _UIOrderedRangeIndexer, NSDictionary;

@interface _UICollectionLayoutSolutionState : NSObject {
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    NSArray *_bookmarks;
    _UIRTree *_geometricIndexer;
    _UIOrderedRangeIndexer *_itemRangeIndexer;
    NSDictionary *_auxillaryRangeIndexerKindDict;
}

- (void).cxx_destruct;
- (id)description;

@end
