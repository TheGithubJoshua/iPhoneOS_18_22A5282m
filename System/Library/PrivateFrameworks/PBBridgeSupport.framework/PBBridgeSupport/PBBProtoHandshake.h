@interface PBBProtoHandshake : PBCodable <NSCopying>

@property (nonatomic) unsigned int position;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int state;

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