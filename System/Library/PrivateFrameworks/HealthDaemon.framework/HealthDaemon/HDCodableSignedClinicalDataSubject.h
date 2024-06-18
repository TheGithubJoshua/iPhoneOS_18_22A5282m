@class NSString, HDCodableMedicalDate, NSMutableArray;

@interface HDCodableSignedClinicalDataSubject : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFullName;
@property (retain, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL hasBirthDate;
@property (retain, nonatomic) HDCodableMedicalDate *birthDate;
@property (readonly, nonatomic) BOOL hasGender;
@property (retain, nonatomic) NSString *gender;
@property (retain, nonatomic) NSMutableArray *emailAddresses;
@property (retain, nonatomic) NSMutableArray *phoneNumbers;

+ (Class)emailAddressesType;
+ (Class)phoneNumbersType;

- (void)addPhoneNumbers:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)phoneNumbersAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)clearEmailAddresses;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)emailAddressesAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)phoneNumbersCount;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)emailAddressesCount;
- (void)clearPhoneNumbers;
- (void)addEmailAddresses:(id)a0;

@end
