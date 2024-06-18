@class NSURLSession, NSUUID, NSMutableURLRequest, NSURLSessionConfiguration, NSURLRequest, __CFN_TaskMetrics;

@interface CONNECTION_SessionTask : NSObject {
    struct _CFURLRequest { } *_originalRequest;
    struct _CFURLRequest { } *_currentRequest;
    double _startTime;
    struct __CFDictionary { } *_connectionProperties;
    struct __CFDictionary { } *_socketProperties;
    NSMutableURLRequest *_nsCurrentRequest;
    NSURLRequest *_nsOriginalRequest;
    NSURLSession *_session_ivar;
    NSURLSessionConfiguration *_effectiveConfiguration;
    NSUUID *_uniqueIdentifier;
    BOOL _is_cellular;
    Class _my_protocolForTask;
    BOOL __shouldSkipPreferredClientCertificateLookup;
    struct __CFDictionary { } *_atsStateCache;
    BOOL _preventsAppSSO;
    BOOL _appSSOFallback;
    BOOL _appleIDContextRedirect;
}

@property (retain, nonatomic) __CFN_TaskMetrics *_metrics;
@property (readonly, nonatomic) BOOL _isAVAssetTask;

- (void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)a0;
- (id)originalRequest;
- (void)_setConnectionIsCellular:(BOOL)a0;
- (id)_attribution;
- (BOOL)_preventsAppSSO;
- (void)_setConnectionCacheKey:(void *)a0;
- (void)_setAppleIDContext:(id)a0;
- (void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)a0;
- (void)didReceiveInformationalResponse:(id)a0;
- (void)set_discretionaryOverride:(long long)a0;
- (id)currentRequest;
- (id)_allowsCellularOverride;
- (void)set_connectionIsCompanionLink:(BOOL)a0;
- (id)_uniqueIdentifier;
- (id)_hostOverride;
- (struct __CFDictionary { } *)_dependencyInfo;
- (void)_releasePreventIdleSleepAssertionIfAppropriate;
- (id)_description;
- (unsigned char)_preventsIdleSystemSleep;
- (id)state;
- (const struct __CFDictionary **)_DuetActivityProperties;
- (unsigned short)_TLSMaximumSupportedProtocolVersion;
- (struct __CFSet { } *)_getAuthenticatorStatusCodes;
- (id)_httpConnectionInfoCompletionBlock;
- (unsigned short)_TLSMinimumSupportedProtocolVersion;
- (unsigned long long)_cachePolicy;
- (id)_trailers;
- (id)_countOfPendingBytesReceivedEncoded;
- (struct __CFDictionary { } *)_copySocketStreamProperties;
- (id)_privacyProxyFailClosed;
- (unsigned char)_strictContentLength;
- (id)workQueue;
- (void)_appendCountOfPendingBytesReceivedEncoded:(long long)a0;
- (id)taskIdentifier;
- (void)_processConnectionProperties;
- (BOOL)_appSSOFallback;
- (BOOL)_connectionIsCompanionLink;
- (id)_trackerContext;
- (void)set_proxyHandshakePending:(BOOL)a0;
- (void)set_expectedProgressTarget:(unsigned long long)a0;
- (struct __CFURL { } *)currentRequest_URL;
- (BOOL)_allowsQUIC;
- (void)set_allowsQUIC:(BOOL)a0;
- (id)countOfBytesSent;
- (id)_allowsExpensiveOverride;
- (id)_countOfBytesReceivedEncoded;
- (id)_timeWindowDelay;
- (void)set_appSSOFallback:(BOOL)a0;
- (double)startTime;
- (BOOL)shouldHandleCookiesAndSchemeIsAppropriate;
- (id)_allowsCellular;
- (void)set_TCPConnectionMetadata:(id)a0;
- (id)_networkServiceType;
- (id)_cfCache;
- (void)set_preconnect:(BOOL)a0;
- (id)_prohibitPrivacyProxy;
- (void)set_preventsAppSSO:(BOOL)a0;
- (id)_loggableDescription;
- (id)_effectiveConfiguration;
- (id)_backgroundTransactionMetrics;
- (void)_withXURLCache:(id /* block */)a0;
- (BOOL)_isTopLevelNavigation;
- (id)_isKnownTracker;
- (long long)_requestPriority;
- (id)_private_nw_activity;
- (BOOL)_requiresSecureHTTPSProxyConnection;
- (id)_resolvedCNAMEChain;
- (id)_assumesHTTP3Capable;
- (id)_privacyProxyFailClosedForUnreachableNonMainHosts;
- (void)_setSocketProperties:(struct __CFDictionary { } *)a0 connectionProperties:(struct __CFDictionary { } *)a1;
- (const struct __CFData **)_TCPConnectionMetadata;
- (unsigned short)_TLSNegotiatedCipherSuite;
- (id)_cookieTransformCallback;
- (long long)_bytesPerSecondLimit;
- (id)_APSRelayTopic;
- (BOOL)_cacheOnly;
- (id)_incompleteTaskMetrics;
- (BOOL)_appleIDContextRedirect;
- (void)set_resolvedCNAMEChain:(id)a0;
- (void)set_TLSNegotiatedCipherSuite:(unsigned short)a0;
- (void)_getAuthenticationHeadersForResponse:(struct _CFURLResponse { } *)a0 completionHandler:(id /* block */)a1;
- (void)_takePreventIdleSleepAssertionIfAppropriate;
- (id)_disallowCellular;
- (struct __CFURL { } *)currentRequest_mainDocumentURL;
- (id)_backtrace;
- (BOOL)_preconnect;
- (void)set_trailers:(id)a0;
- (double)_timeoutInterval;
- (unsigned char)_shouldPipelineHTTP;
- (BOOL)_shouldSkipPreferredClientCertificateLookup;
- (id)_connectionPropertyDuet;
- (unsigned long long)_allowedProtocolTypes;
- (BOOL)prefersIncrementalDelivery;
- (struct __CFDictionary { } *)_proxySettings;
- (long long)_discretionaryOverrride;
- (id)countOfBytesExpectedToSend;
- (long long)_suspensionThreshhold;
- (id)error;
- (void)set_protocolForTask:(id)a0;
- (void)dealloc;
- (id)_timeWindowDuration;
- (int)_cookieAcceptPolicy;
- (const struct XCookieStorage { void /* function */ **x0; struct __CFAllocator *x1; int x2; } *)_createXCookieStorage;
- (id)countOfBytesExpectedToReceive;
- (void)updateCurrentRequest:(id)a0;
- (BOOL)_preventsSystemHTTPProxyAuthentication;
- (void)_adoptEffectiveConfiguration:(id)a0;
- (id)session;
- (BOOL)hasExtractor;
- (id)_incompleteCurrentTaskTransactionMetrics;
- (id)_siteForCookies;
- (id)_cfCreds;
- (id)_cfHSTS;
- (unsigned char)_shouldUsePipelineHeuristics;
- (struct _CFHSTSPolicy { } *)_copyHSTSPolicy;
- (struct __CFDictionary { } *)_copyATSState;
- (id)_prohibitAuthUI;
- (unsigned char)_proxyHandshakePending;
- (id)_shouldHandleCookies;
- (id)_storagePartitionIdentifier;
- (id)countOfBytesReceived;
- (id)_allowsConstrainedOverride;
- (unsigned long long)_expectedProgressTarget;
- (id)_boundInterfaceIdentifier;
- (id)initWithRequest:(struct _CFURLRequest { } *)a0 mutableCurrent:(struct _CFURLRequest { } *)a1 connProps:(struct __CFDictionary { } *)a2 sockProps:(struct __CFDictionary { } *)a3 session:(id)a4;
- (int)_requiresDNSSECValidation;
- (void)_consumePendingBytesReceivedEncoded;
- (float)priority;
- (id)_cfCookies;
- (const struct XCredentialStorage { void /* function */ **x0; struct __CFAllocator *x1; int x2; } *)_createXCredentialStorage;
- (struct __CFDictionary { } *)_sslSettings;
- (unsigned char)_shouldSkipPipelineProbe;
- (id)_priorityValue;
- (id)_protocolForTask;

@end