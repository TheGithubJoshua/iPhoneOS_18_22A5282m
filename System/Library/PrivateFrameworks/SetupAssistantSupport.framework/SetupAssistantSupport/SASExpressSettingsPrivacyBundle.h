@class NSString;

@interface SASExpressSettingsPrivacyBundle : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long contentVersion;

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