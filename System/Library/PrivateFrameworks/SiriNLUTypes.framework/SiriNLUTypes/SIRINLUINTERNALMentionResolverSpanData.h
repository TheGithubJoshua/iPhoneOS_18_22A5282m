@interface SIRINLUINTERNALMentionResolverSpanData : PBCodable <NSCopying> {
    struct { unsigned char jointScore : 1; unsigned char modelScore : 1; } _has;
}

@property (nonatomic) BOOL hasJointScore;
@property (nonatomic) double jointScore;
@property (nonatomic) BOOL hasModelScore;
@property (nonatomic) double modelScore;

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
