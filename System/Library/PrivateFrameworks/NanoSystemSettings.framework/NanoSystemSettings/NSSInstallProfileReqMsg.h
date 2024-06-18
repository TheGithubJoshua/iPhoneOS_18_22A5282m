@class NSData;

@interface NSSInstallProfileReqMsg : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProfileData;
@property (retain, nonatomic) NSData *profileData;

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
