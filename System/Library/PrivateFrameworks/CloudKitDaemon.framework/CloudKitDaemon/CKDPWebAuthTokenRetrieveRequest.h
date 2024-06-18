@class NSString;

@interface CKDPWebAuthTokenRetrieveRequest : PBRequest <NSCopying> {
    struct { unsigned char forceFetchToken : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasApiToken;
@property (retain, nonatomic) NSString *apiToken;
@property (nonatomic) BOOL hasForceFetchToken;
@property (nonatomic) BOOL forceFetchToken;

+ (id)options;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
