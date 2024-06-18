@class NSString, NSData, NTPBDate;

@interface NTPBAVAssetKey : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasKeyData;
@property (retain, nonatomic) NSData *keyData;
@property (readonly, nonatomic) BOOL hasCreatedAt;
@property (retain, nonatomic) NTPBDate *createdAt;
@property (readonly, nonatomic) BOOL hasExpiresAt;
@property (retain, nonatomic) NTPBDate *expiresAt;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
