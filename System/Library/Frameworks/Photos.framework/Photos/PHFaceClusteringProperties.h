@class NSString, PHFaceprint;

@interface PHFaceClusteringProperties : PHFacePropertySet

@property (readonly, nonatomic) PHFaceprint *faceprint;
@property (readonly, nonatomic) NSString *groupingIdentifier;

+ (id)propertySetName;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)keyPathFromPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 face:(id)a1 prefetched:(BOOL)a2;

@end
