@class NSData;

@interface CKDPPackageManifestSection : PBCodable <NSCopying> {
    struct { unsigned char size : 1; unsigned char lastSection : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) long long size;
@property (nonatomic) BOOL hasLastSection;
@property (nonatomic) BOOL lastSection;

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
