@interface AWDBacklightLuxMicroAmpsBucket : PBCodable <NSCopying> {
    struct { unsigned char bucketDuration : 1; } _has;
}

@property (nonatomic) BOOL hasBucketDuration;
@property (nonatomic) unsigned int bucketDuration;

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
