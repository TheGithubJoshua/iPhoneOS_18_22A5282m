@interface _HKElectrocardiogramComparisonFilter : _HKComparisonFilter

+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (BOOL)isSupportedKeyPath:(id)a0;
+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;

- (BOOL)_acceptsECGWithAverageHeartRate:(id)a0;
- (BOOL)_acceptsECGWithPrivateClassification:(unsigned long long)a0;
- (BOOL)_acceptsECGWithPublicClassification:(long long)a0;
- (BOOL)_acceptsECGWithSymptomsStatus:(long long)a0;
- (BOOL)acceptsDataObject:(id)a0;

@end