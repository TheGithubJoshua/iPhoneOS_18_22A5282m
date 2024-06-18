@class NSNumber;

@interface PHAssetLocalDateProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSNumber *inferredTimeZoneOffset;
@property (readonly, nonatomic) long long creationDateSource;

+ (id)propertySetName;
+ (id)propertiesToFetch;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
