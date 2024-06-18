@class NSDate;

@interface PHAssetCreationDateProperties : PHBatchFetchedAssetPropertySet

@property (readonly, nonatomic) NSDate *creationDate;

+ (long long)batchSize;
+ (long long)cacheSize;
+ (BOOL)useObjectFetchingContext;
+ (BOOL)useNoIndexSelf;
+ (id)propertiesToSortBy;
+ (id)propertiesToFetch;

@end
