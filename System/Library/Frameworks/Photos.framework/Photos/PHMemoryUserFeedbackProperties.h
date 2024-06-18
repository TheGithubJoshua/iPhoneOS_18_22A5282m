@class PHUserFeedback;

@interface PHMemoryUserFeedbackProperties : PHMemoryPropertySet

@property (readonly, nonatomic) PHUserFeedback *userFeedback;

+ (id)propertySetName;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToSortBy;
+ (id)propertiesToFetch;
+ (id)keyPathFromPrimaryObject;
+ (BOOL)isToMany;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 memory:(id)a1 prefetched:(BOOL)a2;

@end
