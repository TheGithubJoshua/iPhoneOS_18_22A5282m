@class NSData;

@interface PCSEnvelopedKeyMaterial : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version;
@property (readonly, nonatomic) BOOL hasMasterKeyId;
@property (retain, nonatomic) NSData *masterKeyId;
@property (readonly, nonatomic) BOOL hasEncryptedSeed;
@property (retain, nonatomic) NSData *encryptedSeed;

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
- (int)StringAsVersion:(id)a0;
- (id)versionAsString:(int)a0;

@end
