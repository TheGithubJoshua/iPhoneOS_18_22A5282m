@class NSSet, NSPredicate, PHFetchResult;

@interface PXPhotosMutableResultRecord : PXPhotosResultRecord {
    PHFetchResult *_filteredFetchResult;
    NSPredicate *_inclusionPredicate;
    BOOL _filteredFetchResultIsValid;
    BOOL _inclusionPredicateIsValid;
}

@property (readonly, nonatomic) NSSet *excludedOids;
@property (readonly, nonatomic) NSSet *includedOids;
@property (readonly, nonatomic) NSSet *curatedOids;
@property (readonly, nonatomic) NSPredicate *inclusionPredicate;
@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) BOOL reverseSortOrder;
@property (retain, nonatomic) PHFetchResult *curatedFetchResult;
@property (retain, nonatomic) PHFetchResult *keyAssetsFetchResult;
@property (nonatomic) long long keyAssetIndex;
@property (nonatomic) BOOL wantsCuration;
@property (readonly, nonatomic) BOOL isCurated;
@property (readonly, nonatomic) PHFetchResult *filteredFetchResult;
@property (readonly, nonatomic) PHFetchResult *exposedFetchResult;
@property (nonatomic) BOOL preloadAssetTypeCounts;
@property (nonatomic) BOOL ensureKeyAssetAtBeginning;
@property (copy, nonatomic) id /* block */ curatedRefetchCondition;

- (void)_invalidateKeyAssetIndex;
- (void)setReverseSortOrder:(BOOL)a0;
- (id)init;
- (void)_invalidateFilteredFetchResult;
- (void)_updateFilteredFetchResultIfNeeded;
- (void)_invalidateInclusionPredicate;
- (void)setFetchResult:(id)a0 reverseSortOrder:(BOOL)a1;
- (void)invalidateFetchResultAssetCache;
- (id)exposedFetchResultBeforeFiltering;
- (void).cxx_destruct;
- (void)stopIncludingAllOids;
- (void)stopExcludingOids:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)excludeOids:(id)a0;
- (void)includeOids:(id)a0;
- (void)adoptPreparedFilteredFetchResultFromRecord:(id)a0;
- (void)setFetchResult:(id)a0;
- (void)_setIncludeOids:(id)a0;

@end
