@interface TPPBAncientEpoch : PBCodable <NSCopying> {
    struct { unsigned char candidateEpoch : 1; unsigned char myEpoch : 1; } _has;
}

@property (nonatomic) BOOL hasMyEpoch;
@property (nonatomic) unsigned long long myEpoch;
@property (nonatomic) BOOL hasCandidateEpoch;
@property (nonatomic) unsigned long long candidateEpoch;

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
