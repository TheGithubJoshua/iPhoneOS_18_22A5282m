@class NSArray, HKMedicalRecord, HKClinicalRecord;

@interface HDExtractionResultItemUnit : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKMedicalRecord *medicalRecord;
@property (readonly, copy, nonatomic) HKClinicalRecord *clinicalRecord;
@property (readonly, copy, nonatomic) NSArray *downloadableAttachments;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMedicalRecord:(id)a0 clinicalRecord:(id)a1 downloadableAttachments:(id)a2;

@end
