@class HDCodableMedicalCodingList, HDCodableInspectableValue, NSMutableArray;

@interface HDCodableCodedValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCodings;
@property (retain, nonatomic) HDCodableMedicalCodingList *codings;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) HDCodableInspectableValue *value;
@property (retain, nonatomic) NSMutableArray *referenceRanges;

+ (Class)referenceRangesType;

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
- (void)addReferenceRanges:(id)a0;
- (void)clearReferenceRanges;
- (id)referenceRangesAtIndex:(unsigned long long)a0;
- (unsigned long long)referenceRangesCount;

@end
