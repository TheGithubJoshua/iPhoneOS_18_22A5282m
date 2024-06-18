@interface PHAssetDestinationAssetCopyProperties : PHAssetPropertySet

@property (readonly, nonatomic) long long destinationAssetCopyState;

+ (id)propertySetName;
+ (id)propertiesToFetch;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
