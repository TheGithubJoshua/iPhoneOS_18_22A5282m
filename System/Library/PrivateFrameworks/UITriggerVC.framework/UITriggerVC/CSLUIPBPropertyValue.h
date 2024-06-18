@class NSString, CSLUIPBNumber, NSData, CSLUIPBSize, NSMutableArray;

@interface CSLUIPBPropertyValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasNumberValue;
@property (retain, nonatomic) CSLUIPBNumber *numberValue;
@property (readonly, nonatomic) BOOL hasUUIDValue;
@property (retain, nonatomic) NSData *uUIDValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (retain, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL hasSizeValue;
@property (retain, nonatomic) CSLUIPBSize *sizeValue;
@property (readonly, nonatomic) BOOL hasDictionaryKey;
@property (retain, nonatomic) CSLUIPBPropertyValue *dictionaryKey;
@property (retain, nonatomic) NSMutableArray *arrayValues;

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
- (void)addArrayValues:(id)a0;
- (id)arrayValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)arrayValuesCount;
- (void)clearArrayValues;

@end
