@interface HKFeatureAvailabilityRequirementNotAgeGatedForUserDefaultsKey : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (id)requirementDescription;
- (id)initWithUserDefaultsKey:(id)a0;
- (BOOL)defaultValueWhenKeyIsMissing;

@end
