@interface HKClinicalType : HKSampleType

+ (id)allTypes;
+ (id)allergyRecordType;
+ (id)procedureRecordType;
+ (id)medicationRecordType;
+ (id)coverageRecordType;
+ (id)conditionRecordType;
+ (id)clinicalNoteRecordType;
+ (id)immunizationRecordType;
+ (id)labResultRecordType;
+ (id)sampleTypesForResourceType:(id)a0 error:(id *)a1;
+ (id)vitalSignRecordType;

- (id)initWithIdentifier:(id)a0;
- (BOOL)_requiresAuthorization;
- (BOOL)isClinicalType;
- (BOOL)requiresPerObjectAuthorization;

@end
