@class NSData, NSString;

@interface PHAssetSceneprintProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *sceneprint;
@property (readonly, nonatomic) NSString *duplicateMatchingValue;
@property (readonly, nonatomic) NSString *duplicateMatchingAlternateValue;
@property (readonly, nonatomic) NSData *duplicateMatchingData;
@property (readonly, nonatomic) NSData *duplicateMatchingAlternateData;

+ (id)propertySetName;
+ (id)propertiesToFetch;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
