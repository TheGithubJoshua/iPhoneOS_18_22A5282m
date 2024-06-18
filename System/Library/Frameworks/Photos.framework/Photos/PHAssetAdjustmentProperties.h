@class NSString;

@interface PHAssetAdjustmentProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSString *formatIdentifier;
@property (readonly, nonatomic) NSString *formatVersion;
@property (readonly, nonatomic) unsigned long long originalResourceChoice;

+ (id)propertySetName;
+ (id)propertiesToFetch;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
