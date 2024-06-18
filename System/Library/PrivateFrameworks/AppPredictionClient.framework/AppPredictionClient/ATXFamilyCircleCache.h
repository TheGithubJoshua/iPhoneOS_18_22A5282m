@interface ATXFamilyCircleCache : NSObject

+ (id)cachedDefaultsKey;
+ (id)lastFetchDateDefaultsKey;

- (id)fetchFamilyCircle;
- (id)_requestUpdatedFamilyCircle;
- (id)_fetchFamilyCircleWithUserDefaults:(id)a0;
- (BOOL)hasiCloudFamily;

@end
