@class NSString;

@interface HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *userDefaultsKey;
@property (readonly, nonatomic) BOOL defaultValueWhenKeyIsMissing;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithUserDefaultsKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (void)_notifyObserver:(id)a0 forNewValue:(id)a1;

@end
