@interface NTPBBucketGroupConfig : PBCodable <NSCopying>

@property (nonatomic) int version;
@property (nonatomic) long long numberOfBuckets;
@property (nonatomic) long long byteCount;
@property (nonatomic) long long validUntilDate;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
