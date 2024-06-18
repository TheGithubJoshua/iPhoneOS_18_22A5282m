@class HDCodableMedicalCodingList, NSData;

@interface HDCodableSignedClinicalDataItem : PBCodable <NSCopying> {
    struct { unsigned char relevantDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPrimaryConceptCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *primaryConceptCodings;
@property (readonly, nonatomic) BOOL hasMedicalRecordSampleID;
@property (retain, nonatomic) NSData *medicalRecordSampleID;
@property (nonatomic) BOOL hasRelevantDate;
@property (nonatomic) double relevantDate;

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
