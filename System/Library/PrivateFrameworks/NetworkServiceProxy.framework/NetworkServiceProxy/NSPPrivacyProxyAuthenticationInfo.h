@class NSString, NSMutableArray;

@interface NSPPrivacyProxyAuthenticationInfo : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _accessTokenTypes;
    struct { unsigned char authType : 1; } _has;
}

@property (nonatomic) BOOL hasAuthType;
@property (nonatomic) int authType;
@property (retain, nonatomic) NSString *authURL;
@property (readonly, nonatomic) BOOL hasAccessTokenURL;
@property (retain, nonatomic) NSString *accessTokenURL;
@property (readonly, nonatomic) unsigned long long accessTokenTypesCount;
@property (readonly, nonatomic) unsigned int *accessTokenTypes;
@property (retain, nonatomic) NSMutableArray *accessTokenKnownOrigins;

+ (Class)accessTokenKnownOriginsType;

- (void)clearAccessTokenKnownOrigins;
- (void)setAccessTokenTypes:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned int)accessTokenTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)accessTokenKnownOriginsCount;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)accessTokenKnownOriginsAtIndex:(unsigned long long)a0;
- (void)clearAccessTokenTypes;
- (void)addAccessTokenKnownOrigins:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsAuthType:(id)a0;
- (void)dealloc;
- (id)authTypeAsString:(int)a0;
- (void)addAccessTokenTypes:(unsigned int)a0;

@end
