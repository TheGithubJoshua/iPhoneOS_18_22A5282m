@interface AWDMETRICSMBin : PBCodable <NSCopying> {
    struct { unsigned char binId : 1; unsigned char duration : 1; } _has;
}

@property (nonatomic) BOOL hasBinId;
@property (nonatomic) unsigned int binId;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned int duration;

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
