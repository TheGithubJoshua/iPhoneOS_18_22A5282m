@class NSString;

@interface NPKProtoStandalonePaymentSetupProductImageAssetURLs : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasDigitalCardImageUrl;
@property (retain, nonatomic) NSString *digitalCardImageUrl;
@property (readonly, nonatomic) BOOL hasThumbnailImageUrl;
@property (retain, nonatomic) NSString *thumbnailImageUrl;
@property (readonly, nonatomic) BOOL hasLogoImageUrl;
@property (retain, nonatomic) NSString *logoImageUrl;

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
