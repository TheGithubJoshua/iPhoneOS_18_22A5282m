@class PHFetchResult;

@interface PXPhotosResultRecord : NSObject <NSCopying>

@property (readonly) PHFetchResult *exposedFetchResultBeforeFiltering;

- (BOOL)ensureKeyAssetAtBeginning;
- (id)exposedFetchResult;
- (id)keyAssetsFetchResult;
- (id)curatedFetchResult;
- (id /* block */)curatedRefetchCondition;
- (id)includedOids;
- (id)description;
- (id)inclusionPredicate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)reverseSortOrder;
- (id)fetchResult;
- (id)excludedOids;
- (BOOL)wantsCuration;
- (id)filteredFetchResult;
- (BOOL)isCurated;
- (long long)keyAssetIndex;
- (id)curatedOids;

@end
