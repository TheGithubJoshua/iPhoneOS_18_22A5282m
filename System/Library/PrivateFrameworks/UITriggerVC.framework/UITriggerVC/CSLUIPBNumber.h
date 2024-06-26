@interface CSLUIPBNumber : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char int64Value : 1; unsigned char floatValue : 1; unsigned char int32Value : 1; unsigned char boolValue : 1; } _has;
}

@property (nonatomic) BOOL hasInt32Value;
@property (nonatomic) int int32Value;
@property (nonatomic) BOOL hasFloatValue;
@property (nonatomic) float floatValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (nonatomic) BOOL hasInt64Value;
@property (nonatomic) long long int64Value;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
