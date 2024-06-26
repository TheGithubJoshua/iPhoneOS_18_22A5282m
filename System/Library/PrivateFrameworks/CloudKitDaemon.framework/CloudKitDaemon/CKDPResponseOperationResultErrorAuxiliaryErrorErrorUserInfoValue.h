@class NSString, NSData;

@interface CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue : PBCodable <NSCopying> {
    struct { unsigned char doubleValue : 1; unsigned char int64Value : 1; unsigned char value : 1; unsigned char boolValue : 1; } _has;
}

@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasInt64Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) int value;

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
- (id)valueAsString:(int)a0;
- (int)StringAsValue:(id)a0;
- (void)clearOneofValuesForValue;

@end
