@class HKVaccinationRecordType, NSUUID, NSString, NSArray, HKMedicalDate, NSLocale, HKConcept, HKMedicalCoding;

@interface HKVaccinationRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {
    NSArray *_vaccinationCodings;
    HKMedicalDate *_expirationDate;
    NSString *_doseNumber;
    NSString *_doseQuantity;
    NSString *_lotNumber;
    NSString *_performer;
    NSArray *_bodySiteCodings;
    NSString *_reaction;
    BOOL _notGiven;
    HKMedicalDate *_administrationDate;
    HKMedicalCoding *_statusCoding;
    BOOL _patientReported;
    NSArray *_routeCodings;
    NSArray *_reasonsCodings;
    NSArray *_reasonsNotGivenCodings;
    HKConcept *_vaccination;
    HKConcept *_bodySite;
    HKConcept *_status;
    HKConcept *_route;
    NSArray *_reasons;
    NSArray *_reasonsNotGiven;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, nonatomic) long long recordCategoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) HKVaccinationRecordType *vaccinationRecordType;
@property (readonly, copy) HKMedicalDate *administrationDate;
@property (readonly, copy) HKConcept *bodySite;
@property (readonly, copy) NSArray *bodySiteCodings;
@property (readonly, copy) NSString *doseNumber;
@property (readonly, copy) NSString *doseQuantity;
@property (readonly, copy) HKMedicalDate *expirationDate;
@property (readonly, copy) NSString *lotNumber;
@property (readonly) BOOL notGiven;
@property (readonly) BOOL patientReported;
@property (readonly, copy) NSString *performer;
@property (readonly, copy) NSString *reaction;
@property (readonly, copy) NSArray *reasons;
@property (readonly, copy) NSArray *reasonsCodings;
@property (readonly, copy) NSArray *reasonsNotGiven;
@property (readonly, copy) NSArray *reasonsNotGivenCodings;
@property (readonly, copy) HKConcept *route;
@property (readonly, copy) NSArray *routeCodings;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly, copy) HKConcept *vaccination;
@property (readonly, copy) NSArray *vaccinationCodings;

+ (BOOL)_isConcreteObjectClass;
+ (BOOL)supportsEquivalence;
+ (id)_newVaccinationRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 vaccinationCodings:(id)a12 expirationDate:(id)a13 doseNumber:(id)a14 doseQuantity:(id)a15 lotNumber:(id)a16 performer:(id)a17 bodySiteCodings:(id)a18 reaction:(id)a19 notGiven:(BOOL)a20 administrationDate:(id)a21 statusCoding:(id)a22 patientReported:(BOOL)a23 routeCodings:(id)a24 reasonsCodings:(id)a25 reasonsNotGivenCodings:(id)a26 config:(id /* block */)a27;
+ (id)cachedConceptRelationshipKeyPaths;
+ (id)defaultDisplayString;
+ (BOOL)groupsByUserDomainConcept;
+ (id)indexableConceptKeyPaths;
+ (id)vaccinationRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 country:(id)a9 state:(unsigned long long)a10 vaccinationCodings:(id)a11 expirationDate:(id)a12 doseNumber:(id)a13 doseQuantity:(id)a14 lotNumber:(id)a15 performer:(id)a16 bodySiteCodings:(id)a17 reaction:(id)a18 notGiven:(BOOL)a19 administrationDate:(id)a20 statusCoding:(id)a21 patientReported:(BOOL)a22 routeCodings:(id)a23 reasonsCodings:(id)a24 reasonsNotGivenCodings:(id)a25;
+ (id)vaccinationRecordWithType:(id)a0 note:(id)a1 enteredInError:(BOOL)a2 modifiedDate:(id)a3 originIdentifier:(id)a4 locale:(id)a5 extractionVersion:(long long)a6 device:(id)a7 metadata:(id)a8 sortDate:(id)a9 country:(id)a10 state:(unsigned long long)a11 vaccinationCodings:(id)a12 expirationDate:(id)a13 doseNumber:(id)a14 doseQuantity:(id)a15 lotNumber:(id)a16 performer:(id)a17 bodySiteCodings:(id)a18 reaction:(id)a19 notGiven:(BOOL)a20 administrationDate:(id)a21 statusCoding:(id)a22 patientReported:(BOOL)a23 routeCodings:(id)a24 reasonsCodings:(id)a25 reasonsNotGivenCodings:(id)a26;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)isEquivalent:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x0; unsigned int x1; })a0;
- (void).cxx_destruct;
- (void)_setExpirationDate:(id)a0;
- (void)_setStatus:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setDoseNumber:(id)a0;
- (BOOL)applyConcepts:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (void)_setAdministrationDate:(id)a0;
- (void)_setBodySite:(id)a0;
- (void)_setBodySiteCodings:(id)a0;
- (void)_setDoseQuantity:(id)a0;
- (void)_setLotNumber:(id)a0;
- (void)_setNotGiven:(BOOL)a0;
- (void)_setPatientReported:(BOOL)a0;
- (void)_setPerformer:(id)a0;
- (void)_setReaction:(id)a0;
- (void)_setReasons:(id)a0;
- (void)_setReasonsCodings:(id)a0;
- (void)_setReasonsNotGiven:(id)a0;
- (void)_setReasonsNotGivenCodings:(id)a0;
- (void)_setRoute:(id)a0;
- (void)_setRouteCodings:(id)a0;
- (void)_setStatusCoding:(id)a0;
- (void)_setVaccination:(id)a0;
- (void)_setVaccinationCodings:(id)a0;
- (id)bodySiteCodingsCollection;
- (id)codingsForKeyPath:(id)a0 error:(id *)a1;
- (id)medicalRecordCodings;
- (id)reasonsCodingsCollections;
- (id)reasonsNotGivenCodingsCollections;
- (id)routeCodingsCollection;
- (id)statusCodingCollection;
- (id)vaccinationCodingsCollection;

@end