@class NSData;

@interface PHAssetPhotosInfoPanelLocationProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *placeAnnotationData;

+ (id)propertySetName;
+ (id)propertiesToFetch;
+ (id)keyPathFromPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
