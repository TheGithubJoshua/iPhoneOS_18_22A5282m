@class NSData, NSString;

@interface PKProtobufPaymentInstrumentThumbnailResponse : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasThumbnailImage;
@property (retain, nonatomic) NSData *thumbnailImage;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasManifestHash;
@property (retain, nonatomic) NSString *manifestHash;

- (int)StringAsStatus:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)statusAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
