@class NSString, HDCodableDateComponents;

@interface HDCodableVerifiableClinicalRecordSubject : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFullName;
@property (retain, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL hasDateOfBirthComponents;
@property (retain, nonatomic) HDCodableDateComponents *dateOfBirthComponents;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
