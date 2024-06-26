@class HKSignedClinicalDataRecord, NSArray, HKSignedClinicalDataQRRepresentation;

@interface HKSignedClinicalDataGroup : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) HKSignedClinicalDataRecord *mainRecord;
@property (readonly, copy, nonatomic) NSArray *medicalRecords;
@property (readonly, copy, nonatomic) NSArray *clinicalRecords;
@property (readonly, copy, nonatomic) HKSignedClinicalDataQRRepresentation *QRRepresentation;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(unsigned long long)a0 mainRecord:(id)a1 medicalRecords:(id)a2 clinicalRecords:(id)a3 QRRepresentation:(id)a4;

@end
