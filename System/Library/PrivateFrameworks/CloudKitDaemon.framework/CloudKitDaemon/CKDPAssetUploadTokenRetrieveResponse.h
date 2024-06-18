@class NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *uploadTokens;
@property (readonly, nonatomic) BOOL hasAuthPutResponse;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSMutableArray *contentResponseHeaders;

+ (Class)contentResponseHeadersType;
+ (Class)uploadTokensType;

- (void)addContentResponseHeaders:(id)a0;
- (void)clearUploadTokens;
- (void)mergeFrom:(id)a0;
- (id)contentResponseHeadersAtIndex:(unsigned long long)a0;
- (void)addUploadTokens:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)clearContentResponseHeaders;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)uploadTokensCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)contentResponseHeadersCount;
- (id)uploadTokensAtIndex:(unsigned long long)a0;

@end
