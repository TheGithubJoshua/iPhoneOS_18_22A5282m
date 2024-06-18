@class NSString;

@interface ADTransparencyDetails : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTransparencyDetailsUnavailableMessage;
@property (retain, nonatomic) NSString *transparencyDetailsUnavailableMessage;
@property (readonly, nonatomic) BOOL hasTransparencyRendererPayload;
@property (retain, nonatomic) NSString *transparencyRendererPayload;
@property (readonly, nonatomic) BOOL hasTransparencyRendererURL;
@property (retain, nonatomic) NSString *transparencyRendererURL;

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
