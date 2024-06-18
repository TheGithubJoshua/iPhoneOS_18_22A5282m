@class FCCKPDate, NSString, NSData, FCCKPRecordReference, NSMutableArray;

@interface FCCKPRecordFieldValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char signedValue : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) BOOL hasSignedValue;
@property (nonatomic) long long signedValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (retain, nonatomic) FCCKPDate *dateValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasReferenceValue;
@property (retain, nonatomic) FCCKPRecordReference *referenceValue;
@property (retain, nonatomic) NSMutableArray *listValues;

+ (Class)listValueType;

- (void)addListValue:(id)a0;
- (void)clearListValues;
- (unsigned long long)listValuesCount;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (id)listValueAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end