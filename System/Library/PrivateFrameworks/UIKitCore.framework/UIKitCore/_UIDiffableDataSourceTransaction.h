@class NSOrderedCollectionDifference, NSDiffableDataSourceSnapshot, NSArray;

@interface _UIDiffableDataSourceTransaction : NSObject {
    NSArray *_reorderedItemIdentifiers;
    long long _source;
}

@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *initialSnapshot;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *finalSnapshot;
@property (readonly, nonatomic) NSOrderedCollectionDifference *difference;
@property (readonly, nonatomic) NSArray *sectionTransactions;

+ (id)reorderingTransactionWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 difference:(id)a2 sectionTransactions:(id)a3;
+ (id)applyTransactionWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 difference:(id)a2 sectionTransactions:(id)a3;

- (id)finalDataSourceSnapshotter;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)a0;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)a0 forFinalIndexPath:(id)a1;
- (id)reorderedItemIdentifiers;
- (long long)source;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)a0;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })finalSectionGlobalItemRangeForSection:(long long)a0;
- (id)finalIndexPathForInitialIndexPath:(id)a0;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)a0;
- (void).cxx_destruct;
- (long long)initialSectionCount;
- (BOOL)isEqual:(id)a0;
- (id)initialIndexPathForFinalIndexPath:(id)a0;
- (id)description;
- (long long)finalSectionCount;
- (id)initWithInitialSnapshot:(id)a0 finalSnapshot:(id)a1 source:(long long)a2 reorderedItemIdentifiers:(id)a3 difference:(id)a4 sectionTransactions:(id)a5;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })initalSectionGlobalItemRangeForSection:(long long)a0;
- (BOOL)isApplyTransaction;
- (id)initialDataSourceSnapshotter;
- (id)performDiffGeneratingUpdates;
- (BOOL)isReorderingTransaction;
- (id)finalIndexPathForSupplementaryElementOfKind:(id)a0 forInitialIndexPath:(id)a1;

@end
