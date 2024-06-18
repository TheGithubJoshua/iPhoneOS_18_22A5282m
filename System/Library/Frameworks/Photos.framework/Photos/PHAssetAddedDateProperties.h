@class NSDate;

@interface PHAssetAddedDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *addedDate;

+ (long long)batchSize;
+ (long long)cacheSize;
+ (BOOL)useObjectFetchingContext;
+ (BOOL)useNoIndexSelf;
+ (id)propertiesToSortBy;
+ (id)propertiesToFetch;

@end
