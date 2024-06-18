@interface PHAssetCoarseLocationProperties : PHAssetPropertySet

@property (readonly, nonatomic) double gpsHorizontalAccuracy;

+ (id)propertySetName;
+ (id)propertiesToFetch;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
