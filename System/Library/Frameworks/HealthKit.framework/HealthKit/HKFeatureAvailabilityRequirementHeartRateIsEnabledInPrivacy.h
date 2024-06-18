@interface HKFeatureAvailabilityRequirementHeartRateIsEnabledInPrivacy : HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator

+ (id)requirementIdentifier;

- (id)init;
- (BOOL)isSatisfiedForBoolValue:(BOOL)a0;
- (id)whichUserDefaultsDataSourceInDataSource:(id)a0;
- (id)requirementDescription;
- (BOOL)defaultValueWhenKeyIsMissing;

@end
