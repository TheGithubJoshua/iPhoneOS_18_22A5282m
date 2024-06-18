@class NTPBBucketGroupConfig, NTPBBloomFilterInfo;

@interface NTPBBucketGroupConfigResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBucketGroupConfig;
@property (retain, nonatomic) NTPBBucketGroupConfig *bucketGroupConfig;
@property (readonly, nonatomic) BOOL hasDomainBloomFilterInfo;
@property (retain, nonatomic) NTPBBloomFilterInfo *domainBloomFilterInfo;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
