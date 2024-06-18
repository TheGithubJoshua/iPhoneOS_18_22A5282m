@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSMutableDictionary *fetchDictionariesByWorkerType;

+ (id)propertySetName;
+ (id)entityName;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)keyPathFromPrimaryObject;
+ (BOOL)isToMany;
+ (BOOL)createsPropertySetObjectWithCustomImplementation;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;
- (int)analysisStateForWorkerType:(short)a0 outLastIgnoreDate:(id *)a1 outIgnoreUntilDate:(id *)a2;

@end
