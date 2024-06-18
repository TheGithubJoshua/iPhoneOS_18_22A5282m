@class NSString, NSMutableArray, NSData;

@interface NSPPrivacyProxyProxyInfo : PBCodable <NSCopying> {
    struct { unsigned char supportsFallback : 1; } _has;
}

@property (nonatomic) int proxyHop;
@property (retain, nonatomic) NSString *proxyURL;
@property (retain, nonatomic) NSMutableArray *proxyKeyInfos;
@property (retain, nonatomic) NSData *tokenKeyInfo;
@property (nonatomic) BOOL hasSupportsFallback;
@property (nonatomic) BOOL supportsFallback;
@property (readonly, nonatomic) BOOL hasVendor;
@property (retain, nonatomic) NSString *vendor;
@property (readonly, nonatomic) BOOL hasTcpProxyFqdn;
@property (retain, nonatomic) NSString *tcpProxyFqdn;
@property (readonly, nonatomic) BOOL hasPreferredPathConfigUri;
@property (retain, nonatomic) NSString *preferredPathConfigUri;
@property (readonly, nonatomic) BOOL hasProxyVersion;
@property (retain, nonatomic) NSString *proxyVersion;

+ (Class)proxyKeyInfoType;

- (void)mergeFrom:(id)a0;
- (void)addProxyKeyInfo:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsProxyHop:(id)a0;
- (void).cxx_destruct;
- (id)proxyHopAsString:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)proxyKeyInfoAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)proxyKeyInfosCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearProxyKeyInfos;

@end
