@class NSString, NSData;

@interface SharedOwnershipAuth : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSimpleJwt;
@property (retain, nonatomic) NSString *simpleJwt;
@property (readonly, nonatomic) BOOL hasChannelPublicKey;
@property (retain, nonatomic) NSData *channelPublicKey;
@property (readonly, nonatomic) BOOL hasNonce;
@property (retain, nonatomic) NSData *nonce;
@property (readonly, nonatomic) BOOL hasSignNonce;
@property (retain, nonatomic) NSData *signNonce;
@property (readonly, nonatomic) BOOL hasServerEncryptionKey;
@property (retain, nonatomic) NSData *serverEncryptionKey;

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
