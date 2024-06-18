@interface SIRINLUEXTERNALParser : PBCodable <NSCopying> {
    struct { unsigned char algorithm : 1; unsigned char parserId : 1; } _has;
}

@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) int algorithm;
@property (nonatomic) BOOL hasParserId;
@property (nonatomic) int parserId;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsAlgorithm:(id)a0;
- (id)algorithmAsString:(int)a0;
- (int)StringAsParserId:(id)a0;
- (id)parserIdAsString:(int)a0;

@end
