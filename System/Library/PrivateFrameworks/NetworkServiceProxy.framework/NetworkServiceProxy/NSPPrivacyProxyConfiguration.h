@class NSPPrivacyProxyResolverInfo, NSString, NSPPrivacyProxyAuthenticationInfo, NSMutableArray;

@interface NSPPrivacyProxyConfiguration : PBCodable <NSCopying> {
    struct { unsigned char disableUntil : 1; unsigned char preferredPathEnabledPercentage : 1; unsigned char enabled : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasEnabled;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL hasDisableUntil;
@property (nonatomic) unsigned long long disableUntil;
@property (retain, nonatomic) NSPPrivacyProxyAuthenticationInfo *authInfo;
@property (retain, nonatomic) NSMutableArray *policyTierMaps;
@property (retain, nonatomic) NSMutableArray *proxies;
@property (retain, nonatomic) NSMutableArray *pathWeights;
@property (retain, nonatomic) NSMutableArray *resolvers;
@property (nonatomic) unsigned int maxTokenNum;
@property (retain, nonatomic) NSMutableArray *fallbackPathWeights;
@property (readonly, nonatomic) BOOL hasRegionId;
@property (retain, nonatomic) NSString *regionId;
@property (readonly, nonatomic) BOOL hasBootstrapResolver;
@property (retain, nonatomic) NSPPrivacyProxyResolverInfo *bootstrapResolver;
@property (readonly, nonatomic) BOOL hasDnsProbe;
@property (retain, nonatomic) NSString *dnsProbe;
@property (retain, nonatomic) NSMutableArray *obliviousConfigs;
@property (nonatomic) BOOL hasPreferredPathEnabledPercentage;
@property (nonatomic) unsigned int preferredPathEnabledPercentage;

+ (Class)policyTierMapType;
+ (Class)obliviousConfigsType;
+ (Class)proxiesType;
+ (Class)resolversType;
+ (Class)pathWeightsType;
+ (Class)fallbackPathWeightsType;

- (id)resolversAtIndex:(unsigned long long)a0;
- (unsigned long long)pathWeightsCount;
- (void)mergeFrom:(id)a0;
- (void)addResolvers:(id)a0;
- (void)addPolicyTierMap:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addPathWeights:(id)a0;
- (void)clearObliviousConfigs;
- (unsigned long long)hash;
- (unsigned long long)obliviousConfigsCount;
- (void)addObliviousConfigs:(id)a0;
- (void)writeTo:(id)a0;
- (id)proxiesAtIndex:(unsigned long long)a0;
- (unsigned long long)proxiesCount;
- (void).cxx_destruct;
- (void)clearFallbackPathWeights;
- (id)policyTierMapAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pathWeightsAtIndex:(unsigned long long)a0;
- (void)addProxies:(id)a0;
- (id)fallbackPathWeightsAtIndex:(unsigned long long)a0;
- (void)clearResolvers;
- (void)clearPathWeights;
- (void)clearPolicyTierMaps;
- (void)addFallbackPathWeights:(id)a0;
- (unsigned long long)resolversCount;
- (unsigned long long)fallbackPathWeightsCount;
- (unsigned long long)policyTierMapsCount;
- (void)clearProxies;
- (id)obliviousConfigsAtIndex:(unsigned long long)a0;

@end
