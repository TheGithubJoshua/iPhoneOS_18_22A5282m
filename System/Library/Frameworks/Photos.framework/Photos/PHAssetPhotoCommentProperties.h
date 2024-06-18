@interface PHAssetPhotoCommentProperties : PHAssetPropertySet

@property (readonly, nonatomic) unsigned long long commentCount;
@property (readonly, nonatomic) unsigned long long likeCount;
@property (readonly, nonatomic) BOOL hasUserLiked;

+ (id)propertySetName;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)keyPathFromPrimaryObject;
+ (BOOL)isToMany;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;

@end
