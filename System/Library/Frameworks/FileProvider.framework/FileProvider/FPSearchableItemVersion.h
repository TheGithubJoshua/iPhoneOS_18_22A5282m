@class NSData;

@interface FPSearchableItemVersion : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasContentVersion;
@property (retain, nonatomic) NSData *contentVersion;
@property (readonly, nonatomic) BOOL hasMetadataVersion;
@property (retain, nonatomic) NSData *metadataVersion;

+ (id)stringFromVersion:(id)a0;
+ (id)versionFromString:(id)a0;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
