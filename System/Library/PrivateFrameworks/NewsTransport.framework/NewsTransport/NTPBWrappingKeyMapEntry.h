@class NSData;

@interface NTPBWrappingKeyMapEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasWrappingKeyId;
@property (retain, nonatomic) NSData *wrappingKeyId;
@property (readonly, nonatomic) BOOL hasWrappingKey;
@property (retain, nonatomic) NSData *wrappingKey;

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
