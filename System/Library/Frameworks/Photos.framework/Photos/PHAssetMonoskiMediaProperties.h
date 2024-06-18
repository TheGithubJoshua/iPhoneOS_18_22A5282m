@interface PHAssetMonoskiMediaProperties : PHAssetPropertySet

@property (readonly, nonatomic) short monoskiMediaType;

+ (id)propertySetName;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)keyPathFromPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
