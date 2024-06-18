@class NSMutableArray;

@interface NTPBWrappingKeyRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *wrappingKeyIds;

+ (Class)wrappingKeyIdsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addWrappingKeyIds:(id)a0;
- (void)clearWrappingKeyIds;
- (id)wrappingKeyIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)wrappingKeyIdsCount;

@end
