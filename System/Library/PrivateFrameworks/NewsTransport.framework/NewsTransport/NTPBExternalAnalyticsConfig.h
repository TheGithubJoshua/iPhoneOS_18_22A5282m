@class NSString, NSMutableArray;

@interface NTPBExternalAnalyticsConfig : PBCodable <NSCopying> {
    struct { unsigned char usesProxyProfile : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAnalyticsBaseUrl;
@property (retain, nonatomic) NSString *analyticsBaseUrl;
@property (readonly, nonatomic) BOOL hasAnalyticsId;
@property (retain, nonatomic) NSString *analyticsId;
@property (readonly, nonatomic) BOOL hasEventQueryParameterName;
@property (retain, nonatomic) NSString *eventQueryParameterName;
@property (retain, nonatomic) NSMutableArray *queryParameterConfigs;
@property (nonatomic) BOOL hasUsesProxyProfile;
@property (nonatomic) BOOL usesProxyProfile;
@property (retain, nonatomic) NSMutableArray *proxyHostNames;
@property (retain, nonatomic) NSMutableArray *vpnProfileNames;

+ (Class)proxyHostNamesType;
+ (Class)queryParameterConfigType;
+ (Class)vpnProfileNamesType;

- (void)addProxyHostNames:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)queryParameterConfigAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)vpnProfileNamesCount;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)proxyHostNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)proxyHostNamesCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)vpnProfileNamesAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addVpnProfileNames:(id)a0;
- (void)addQueryParameterConfig:(id)a0;
- (void)clearProxyHostNames;
- (unsigned long long)queryParameterConfigsCount;
- (void)clearVpnProfileNames;
- (void)clearQueryParameterConfigs;

@end
