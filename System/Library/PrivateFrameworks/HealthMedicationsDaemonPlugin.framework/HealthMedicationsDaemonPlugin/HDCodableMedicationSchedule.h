@class NSString, NSData, HDCodableDateComponents, NSMutableArray;

@interface HDCodableMedicationSchedule : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; unsigned char endDateTime : 1; unsigned char frequencyType : 1; unsigned char startDateTime : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) BOOL hasMedicationIdentifier;
@property (retain, nonatomic) NSString *medicationIdentifier;
@property (nonatomic) BOOL hasStartDateTime;
@property (nonatomic) double startDateTime;
@property (nonatomic) BOOL hasEndDateTime;
@property (nonatomic) double endDateTime;
@property (readonly, nonatomic) BOOL hasCreatedTimeZone;
@property (retain, nonatomic) NSString *createdTimeZone;
@property (nonatomic) BOOL hasFrequencyType;
@property (nonatomic) double frequencyType;
@property (readonly, nonatomic) BOOL hasCycleStartDateComponents;
@property (retain, nonatomic) HDCodableDateComponents *cycleStartDateComponents;
@property (readonly, nonatomic) BOOL hasNote;
@property (retain, nonatomic) NSString *note;
@property (readonly, nonatomic) BOOL hasMedicationUUID;
@property (retain, nonatomic) NSData *medicationUUID;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;
@property (retain, nonatomic) NSMutableArray *intervalDatas;

+ (Class)intervalDataType;

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
- (id)decodedUUID;
- (void)addIntervalData:(id)a0;
- (void)clearIntervalDatas;
- (id)decodedMedicationUUID;
- (id)intervalDataAtIndex:(unsigned long long)a0;
- (unsigned long long)intervalDatasCount;

@end
