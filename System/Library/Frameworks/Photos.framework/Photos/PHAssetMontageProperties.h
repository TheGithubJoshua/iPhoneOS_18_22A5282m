@class NSString;

@interface PHAssetMontageProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSString *montage;

+ (id)propertySetName;
+ (id)propertiesToFetch;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
