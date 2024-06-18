@interface PHAssetImportProperties : PHAssetPropertySet

@property (readonly, nonatomic) long long importedBy;

+ (id)propertySetName;
+ (id)propertiesToFetch;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
