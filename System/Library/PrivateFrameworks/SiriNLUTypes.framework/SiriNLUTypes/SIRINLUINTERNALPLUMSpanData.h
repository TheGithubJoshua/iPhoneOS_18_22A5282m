@interface SIRINLUINTERNALPLUMSpanData : PBCodable <NSCopying> {
    struct { unsigned char score : 1; } _has;
}

@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;

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
