@class CKDPRecordType, CKDPRecordFieldIdentifier, NSMutableArray, NSData;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char authPutType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) CKDPRecordType *type;
@property (readonly, nonatomic) BOOL hasField;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *field;
@property (retain, nonatomic) NSMutableArray *assets;
@property (retain, nonatomic) NSMutableArray *uploads;
@property (retain, nonatomic) NSMutableArray *contentRequestHeaders;
@property (readonly, nonatomic) BOOL hasAuthPutRequest;
@property (retain, nonatomic) NSData *authPutRequest;
@property (nonatomic) BOOL hasAuthPutType;
@property (nonatomic) int authPutType;

+ (id)options;
+ (Class)assetsType;
+ (Class)contentRequestHeadersType;
+ (Class)uploadsType;

- (void)clearContentRequestHeaders;
- (id)assetsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (unsigned long long)assetsCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addUploads:(id)a0;
- (void)addAssets:(id)a0;
- (int)StringAsAuthPutType:(id)a0;
- (void)clearUploads;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addContentRequestHeaders:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)authPutTypeAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)contentRequestHeadersCount;
- (id)contentRequestHeadersAtIndex:(unsigned long long)a0;
- (void)clearAssets;
- (id)uploadsAtIndex:(unsigned long long)a0;
- (unsigned long long)uploadsCount;

@end
