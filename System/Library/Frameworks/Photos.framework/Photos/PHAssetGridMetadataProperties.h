@class NSString;

@interface PHAssetGridMetadataProperties : PHAssetPropertySet

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *originalFilename;

+ (id)propertySetName;
+ (id)propertiesToFetch;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
