@class NSString, NSArray;

@interface HKMedicalCodingSystem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *OID;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *synonyms;
@property (nonatomic) BOOL hasDisplayStrings;

+ (id)argonautHL7System;
+ (id)FHIRConditionClinicalStatus;
+ (id)FHIRGoalStatus;
+ (id)FHIRCoverageClassification;
+ (id)FHIRImmunizationStatus;
+ (id)FHIRCoverageType;
+ (id)FHIRAllergyIntoleranceStatus;
+ (id)RxNormCodeSystem;
+ (id)FHIRMedicationStatementStatus;
+ (id)FHIRAllergyIntoleranceClinicalStatus;
+ (id)FHIRAllergyIntoleranceVerificationStatus;
+ (id)FHIRAllergyIntoleranceCriticality;
+ (id)LOINCCodeSystem;
+ (id)FHIRAllergyIntoleranceCategory;
+ (id)adHocConceptSystem;
+ (id)FHIRDocumentReferenceClinicalNoteCategorySystem;
+ (id)NDCSystem;
+ (id)FHIRMedicationDispenseStatus;
+ (id)textSystem;
+ (id)FHIRMedicationDispenseStatusR4;
+ (id)SNOMEDCodeSystem;
+ (id)FHIRProcedureStatus;
+ (id)ICD9System;
+ (id)FHIRDiagnosticReportStatus;
+ (id)FHIRQuantityComparatorSystem;
+ (id)FHIRDocumentReferenceClinicalNoteDocStatus;
+ (id)FHIRMedicationRequestStatus;
+ (id)FHIRDocumentReferenceClinicalNoteStatus;
+ (id)FHIRMedicationOrderStatus;
+ (id)systemWithSystemDefinition:(struct { char *x0; char *x1; char *x2; char *x3; BOOL x4; BOOL x5; })a0;
+ (id)FHIRAllergyIntoleranceSeverity;
+ (id)CVXSystem;
+ (id)FHIRConditionVerificationStatus;
+ (id)unknownSystem;
+ (id)FHIRCoverageStatus;
+ (id)ICD10System;
+ (id)externalCodeSystems;
+ (id)appleHealthDataTypeSystem;
+ (id)codeSystemWithIdentifier:(id)a0;
+ (id)FHIRDeviceStatus;
+ (id)FHIRMedicationAdminStatus;
+ (id)appleOntologySystem;
+ (id)UCUMSystem;
+ (id)FHIREventStatus;
+ (id)FHIRCarePlanStatus;
+ (id)FHIRAllergyIntoleranceType;
+ (id)FHIRObservationStatus;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 OID:(id)a2 type:(unsigned long long)a3 synonyms:(id)a4 hasDisplayStrings:(BOOL)a5;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithCustomIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)ontology_hasCodingSystemAttributeIdentifier;

@end
