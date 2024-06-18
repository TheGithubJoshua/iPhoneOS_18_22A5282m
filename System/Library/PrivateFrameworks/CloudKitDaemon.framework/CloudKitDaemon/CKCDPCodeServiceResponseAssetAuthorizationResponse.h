@class NSString, NSData, NSMutableArray;

@interface CKCDPCodeServiceResponseAssetAuthorizationResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasResponseUUID;
@property (retain, nonatomic) NSString *responseUUID;
@property (readonly, nonatomic) BOOL hasAuthGetResponseBody;
@property (retain, nonatomic) NSData *authGetResponseBody;
@property (retain, nonatomic) NSMutableArray *responseHeaders;

+ (Class)responseHeadersType;

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
- (void)addResponseHeaders:(id)a0;
- (void)clearResponseHeaders;
- (id)responseHeadersAtIndex:(unsigned long long)a0;
- (unsigned long long)responseHeadersCount;

@end
