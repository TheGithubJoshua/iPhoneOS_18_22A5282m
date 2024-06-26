@class NSMutableDictionary, NSPProber, NWPath, NSDate, NSObject, NSPCandidateQuicProxyPath, NSDictionary, NSPOutageReasonStats, NSMutableArray, NSPToggleStats, NSPQuicProxyPath, NSString, NSPCandidateFallbackProxyPath, NSArray, NSData, NWInterface, NSNumber, NSPFallbackProxyPath;
@protocol OS_dispatch_source, NSPPrivacyProxyAgentManagerDelegate;

@interface NSPPrivacyProxyAgentManager : NSObject <NSPProxyTokenDelegate, NSPProxyPathDelegate, NSPProberDelegate, NSPQUICProxyPathDelegate, NSSecureCoding, NSCopying> {
    BOOL _forceFallback;
    BOOL _useDefaultInterface;
    BOOL _subscriber;
    BOOL _geohashSharingEnabled;
    BOOL _proxyConnectivityCheckActive;
    BOOL _reportedTokenOutage;
    int _linkQuality;
    NSDate *_tokenIssuanceRestrictedUntilDate;
    NSString *_overridePreferredProxy;
    NSString *_overrideIngressProxy;
    NSString *_overrideFallbackIngressProxy;
    NSData *_overrideIngressProxyKey;
    id<NSPPrivacyProxyAgentManagerDelegate> _delegate;
    NSArray *_proxyArray;
    NSArray *_proxyPathList;
    NSMutableArray *_proxyPathCustomEnumerator;
    NSArray *_fallbackProxyPathList;
    NSMutableArray *_fallbackProxyPathCustomEnumerator;
    NSArray *_obliviousConfigs;
    NSMutableDictionary *_savedConfiguredProxies;
    NSMutableArray *_savedConfiguredPreferredPaths;
    NSObject<OS_dispatch_source> *_proxyPathEnumeratorRestoreTimer;
    unsigned long long _proxyPathRestoreIntervalSec;
    NSPQuicProxyPath *_quicProxyPath;
    NSPFallbackProxyPath *_fallbackProxyPath;
    NSPCandidateQuicProxyPath *_candidateQuicProxyPath;
    NSPCandidateFallbackProxyPath *_candidateFallbackProxyPath;
    NSPProber *_proxyPathProber;
    NSPProber *_directPathProber;
    NWInterface *_proberInterface;
    NSDate *_probeStartTime;
    NSDate *_probeEndTime;
    NSDate *_lastQuicProxySwitchedDate;
    NSDate *_lastFallbackProxySwitchedDate;
    NSMutableDictionary *_preferredQUICProxyPaths;
    NSMutableDictionary *_candidatePreferredQUICProxyPaths;
    NSMutableArray *_proxyTokenInfoArray;
    NSObject<OS_dispatch_source> *_tokenIssuanceRestrictedUntilTimer;
    NWPath *_path;
    NSDate *_lastPathUnsatisfiedDate;
    NSDate *_lastPrimaryInterfaceChangedDate;
    NSDictionary *_networkCharacteristics;
    NSNumber *_configEpoch;
    NSNumber *_reportedEpoch;
    unsigned long long _tokenFetchSuccessCount;
    unsigned long long _tokenFetchFailedCount;
    unsigned long long _tokenConsumedCount;
    unsigned long long _tokenExpiredCount;
    unsigned long long _agentLowWaterMarkHitCount;
    unsigned long long _cacheLowWaterMarkHitCount;
    unsigned long long _badTokenCount;
    unsigned long long _missingTokenCount;
    unsigned long long _networkProxiesRotated;
    unsigned long long _networkFallbackProxiesRotated;
    unsigned long long _proxiesRotated;
    NSPOutageReasonStats *_lastProxyOutageReasonStats;
    NSPOutageReasonStats *_lastTokenOutageReasonStats;
    long long _probingReason;
    NSPToggleStats *_toggleStats;
    NSString *_tokenServerMaskedAddress;
    unsigned long long _generation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *tokenIssuanceRestrictedUntilDate;
@property (readonly) NSString *overridePreferredProxy;
@property (readonly) NSString *overrideIngressProxy;
@property (readonly) NSString *overrideFallbackIngressProxy;
@property (readonly) NSData *overrideIngressProxyKey;
@property (readonly) BOOL forceFallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL dnsFilteringHintEnabled;
@property (retain, nonatomic) NSString *geohashOverride;

+ (BOOL)proxiesMatch:(id)a0 proxyPathList:(id)a1 ingressProxy:(id)a2 egressProxy:(id)a3 pathWeight:(unsigned long long)a4 supportsFallback:(BOOL)a5;
+ (id)multiHopFallbackProxyAgentUUID;
+ (id)multiHopProxyAgentUUID;
+ (id)ingressTokenAgentUUID;
+ (id)singleHopFallbackProxyAgentUUID;
+ (void)removeProxyInfoFromKeychain;
+ (id)singleHopProxyAgentUUID;

- (id)initWithCoder:(id)a0;
- (void)updateConfigEpoch:(id)a0;
- (void)handleLinkQualityChange:(int)a0;
- (BOOL)isMultiHopProxyAgentRegistered;
- (id)multiHopFallbackProxyConfigHash:(id)a0;
- (BOOL)proxyInfo:(id)a0 matchesProxyIndex:(unsigned long long)a1;
- (id)singleHopQUICProxyConfigHash:(id)a0;
- (void)requestAccessTokenWithCompletionHandler:(id /* block */)a0;
- (id)multiHopQUICProxyConfigHash:(id)a0;
- (void)tokenAdded;
- (void)tokenRateLimited:(id)a0 untilDate:(double)a1;
- (void)switchProxy:(id)a0;
- (void)tokenInfoInvalid:(id)a0;
- (void)setUserEventAgentTokenFetchParameters;
- (void)reportProxySuccessOnInterface:(id)a0 proxyPath:(id)a1;
- (void)probeSuccess:(id)a0;
- (id)lastProxyOutageReason;
- (void)handlePathChange:(id)a0;
- (id)initWithDelegate:(id)a0 toggleStats:(id)a1;
- (void)handleConfigChange;
- (void)forceFallback:(BOOL)a0;
- (BOOL)isSingleHopProxyAgentRegistered;
- (void)updateGeohashSharingPreference:(BOOL)a0 geohashOverride:(id)a1;
- (void)updateDNSFilteringHint:(BOOL)a0;
- (BOOL)isSingleHopFallbackProxyAgentRegistered;
- (void)overridePreferredProxy:(id)a0;
- (void)useDefaultNetworkInterface:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)reportProxyError:(int)a0 interface:(id)a1 proxyPath:(id)a2;
- (void)singleHopAgentRegistered:(id)a0;
- (id)lastTokenOutageReason;
- (id)ingressFallbackProxyURL;
- (void).cxx_destruct;
- (id)ingressProxyURL;
- (void)updateUserEventAgentData;
- (void)sendRTCReportForPrivacyProxyToggleState:(BOOL)a0;
- (void)overrideIngressProxy:(id)a0 fallbackProxy:(id)a1 key:(id)a2;
- (void)copyProxyInfo:(id)a0;
- (void)setupWithPath:(id)a0 subscriber:(BOOL)a1 geohashSharingEnabled:(BOOL)a2 geohashOverride:(id)a3 configEpoch:(id)a4 linkQuality:(int)a5;
- (void)setUserEventAgentProberParameters;
- (BOOL)checkTokenFetchOutage;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)probeRedirected:(id)a0;
- (id)obliviousHopFallbackProxyConfigHashForHostname:(id)a0;
- (void)reportEpoch:(unsigned short)a0;
- (id)obliviousHopFallbackProxyAgentUUIDForHostname:(id)a0;
- (void)handleTierChange:(BOOL)a0;
- (id)singleHopFallbackProxyConfigHash:(id)a0;
- (void)sendRTCReportForServiceOutage:(id)a0;
- (void)reportTokenFetchFailure:(id)a0 statusCode:(long long)a1;
- (void)resetProxyErrors;
- (void)tokenFetchOutage:(id)a0;
- (void)obliviousHopAgentUnregistered:(id)a0 hostname:(id)a1;
- (void)dealloc;
- (void)tokenFetched;
- (void)probeServerError:(id)a0 httpStatusCode:(long long)a1;
- (id)copyDomainFiltersDictionary;
- (void)removeExpiredTokens;
- (void)tokenLowWaterMarkReached:(id)a0;
- (void)obliviousHopAgentRegistered:(id)a0 hostname:(id)a1 agentUUID:(id)a2;
- (void)probeFailed:(id)a0;
- (void)updateProxyInfo:(id)a0 proxyPathList:(id)a1 fallbackProxyPathList:(id)a2 obliviousConfigs:(id)a3;
- (void)singleHopAgentUnregistered:(id)a0;
- (BOOL)isMultiHopFallbackProxyAgentRegistered;
- (void)sendRTCReportWithFailureType:(long long)a0 errorCode:(int)a1 url:(id)a2;
- (void)multiHopAgentRegistered:(id)a0;
- (void)mergeTokenStats:(id)a0;
- (void)multiHopAgentUnregistered:(id)a0;

@end
