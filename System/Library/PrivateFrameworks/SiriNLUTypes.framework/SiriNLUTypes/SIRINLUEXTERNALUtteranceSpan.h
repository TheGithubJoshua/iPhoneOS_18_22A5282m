@interface SIRINLUEXTERNALUtteranceSpan : PBCodable <NSCopying> {
    struct { unsigned char endIndex : 1; unsigned char endMilliSeconds : 1; unsigned char endUnicodeScalarIndex : 1; unsigned char startIndex : 1; unsigned char startMilliSeconds : 1; unsigned char startUnicodeScalarIndex : 1; } _has;
}

@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) BOOL hasStartUnicodeScalarIndex;
@property (nonatomic) unsigned int startUnicodeScalarIndex;
@property (nonatomic) BOOL hasEndUnicodeScalarIndex;
@property (nonatomic) unsigned int endUnicodeScalarIndex;
@property (nonatomic) BOOL hasStartMilliSeconds;
@property (nonatomic) int startMilliSeconds;
@property (nonatomic) BOOL hasEndMilliSeconds;
@property (nonatomic) int endMilliSeconds;

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
