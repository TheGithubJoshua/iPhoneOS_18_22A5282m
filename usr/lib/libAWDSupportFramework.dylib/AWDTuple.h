@interface AWDTuple : PBCodable <NSCopying> {
    struct { unsigned char downDuration : 1; unsigned char upDuration : 1; } _has;
}

@property (nonatomic) BOOL hasUpDuration;
@property (nonatomic) unsigned long long upDuration;
@property (nonatomic) BOOL hasDownDuration;
@property (nonatomic) unsigned long long downDuration;

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
