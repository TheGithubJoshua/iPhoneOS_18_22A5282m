@class NSString;

@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *value;

+ (id)fetchMutableFeatures;
+ (id)fetchCustomFeatures;
+ (id)_flagGroupITFEs;
+ (id)_concreteITFEs;
+ (id)_remoteGroupITFEs;
+ (id)fetchProfileFeatures;
+ (id)_profileITFEs;
+ (BOOL)_isITFEValueCustom:(id)a0;
+ (void)verifyOrphans;
+ (void)setMutableFeatureName:(id)a0 toValue:(id)a1;
+ (id)_customITFEs;
+ (void)verifyOrphansForGroups:(id)a0;
+ (void)removeOrphanITFEValues:(id)a0;
+ (id)_mutableITFEs;
+ (void)resetFeatures;

- (id)initWithValue:(id)a0 isEnabled:(BOOL)a1 isMutable:(BOOL)a2;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)toggle:(BOOL)a0;

@end
