@interface PHAssetCameraCaptureDeviceProperties : PHAssetPropertySet

@property (readonly, nonatomic) BOOL isSelfie;

+ (id)propertySetName;
+ (id)propertiesToFetch;
+ (id)keyPathFromPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
