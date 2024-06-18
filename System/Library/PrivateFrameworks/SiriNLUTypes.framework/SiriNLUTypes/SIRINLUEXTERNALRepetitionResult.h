@interface SIRINLUEXTERNALRepetitionResult : PBCodable <NSCopying> {
    struct { unsigned char asrHypothesisIndex : 1; unsigned char repetitionType : 1; } _has;
}

@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) BOOL hasRepetitionType;
@property (nonatomic) int repetitionType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsRepetitionType:(id)a0;
- (id)repetitionTypeAsString:(int)a0;

@end
