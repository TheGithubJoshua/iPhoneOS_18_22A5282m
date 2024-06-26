@class NSString, WKGeolocationProviderIOS, NSURL, _WKProcessPoolConfiguration;
@protocol _WKDownloadDelegate, _WKAutomationDelegate, _WKGeolocationCoreLocationProvider;

@interface WKProcessPool : NSObject <WKObject, NSSecureCoding> {
    struct ObjectStorage<WebKit::WebProcessPool> { struct type { unsigned char __lx[896]; } data; } _processPool;
    struct WeakObjCPtr<id<_WKAutomationDelegate>> { id m_weakReference; } _automationDelegate;
    struct WeakObjCPtr<id<_WKDownloadDelegate>> { id m_weakReference; } _downloadDelegate;
    struct RetainPtr<_WKAutomationSession> { void *m_ptr; } _automationSession;
    struct RetainPtr<WKGeolocationProviderIOS> { void *m_ptr; } _geolocationProvider;
    struct RetainPtr<id<_WKGeolocationCoreLocationProvider>> { void *m_ptr; } _coreLocationProvider;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _WKProcessPoolConfiguration *_configuration;
@property (weak, nonatomic, setter=_setDownloadDelegate:) id<_WKDownloadDelegate> _downloadDelegate;
@property (weak, nonatomic, setter=_setAutomationDelegate:) id<_WKAutomationDelegate> _automationDelegate;
@property (nonatomic, setter=_setCoreLocationProvider:) id<_WKGeolocationCoreLocationProvider> _coreLocationProvider;
@property (copy, nonatomic, setter=_setJavaScriptConfigurationDirectory:) NSURL *_javaScriptConfigurationDirectory;
@property (nonatomic, getter=_isCookieStoragePartitioningEnabled, setter=_setCookieStoragePartitioningEnabled:) BOOL _cookieStoragePartitioningEnabled;
@property (readonly) WKGeolocationProviderIOS *_geolocationProvider;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_allProcessPoolsForTesting;
+ (void)_clearCaptivePortalModeEnabledGloballyForTesting;
+ (void)_forceGameControllerFramework;
+ (BOOL)_lockdownModeEnabledGloballyForTesting;
+ (void)_setCaptivePortalModeEnabledGloballyForTesting:(BOOL)a0;
+ (void)_setLinkedOnOrAfterEverything;
+ (void)_setLinkedOnOrAfterEverythingForTesting;
+ (void)_setLinkedOnOrBeforeEverythingForTesting;
+ (void)_setWebProcessCountLimit:(unsigned int)a0;
+ (id)_sharedProcessPool;
+ (id)_websiteDataURLForContainerWithURL:(id)a0;
+ (id)_websiteDataURLForContainerWithURL:(id)a0 bundleIdentifierIfNotInContainer:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)_setCanHandleHTTPSServerTrustEvaluation:(BOOL)a0;
- (BOOL)_hasAudibleMediaActivity;
- (unsigned long long)_webProcessCount;
- (id)init;
- (void)_terminateAllWebContentProcesses;
- (void)_clearWebProcessCache;
- (void)_registerURLSchemeAsCanDisplayOnlyIfCanRequest:(id)a0;
- (void)_getActivePagesOriginsInWebProcessForTesting:(int)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)_processCacheSize;
- (struct OpaqueWKNotificationManager { } *)_notificationManagerForTesting;
- (void)_makeNextWebProcessLaunchFailForTesting;
- (void)_syncNetworkProcessCookies;
- (void)_clearPermanentCredentialsForProtectionSpace:(id)a0;
- (id)_initWithConfiguration:(id)a0;
- (void)_terminateServiceWorkers;
- (unsigned long long)_pluginProcessCount;
- (void)_setUseSeparateServiceWorkerProcess:(BOOL)a0;
- (unsigned long long)_serviceWorkerProcessCount;
- (id)_downloadURLRequest:(id)a0 websiteDataStore:(id)a1 originatingWebView:(id)a2;
- (void)_preconnectToServer:(id)a0;
- (unsigned long long)_webPageContentProcessCount;
- (unsigned long long)_webProcessCountIgnoringPrewarmedAndCached;
- (unsigned long long)_numberOfConnectedGameControllerFrameworkGamepadsForTesting;
- (void)encodeWithCoder:(id)a0;
- (void)_setCookieAcceptPolicy:(unsigned long long)a0;
- (unsigned long long)_processCacheCapacity;
- (void)_addSupportedPlugin:(id)a0 named:(id)a1 withMimeTypes:(id)a2 withExtensions:(id)a3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setAllowsSpecificHTTPSCertificate:(id)a0 forHost:(id)a1;
- (void)_seedResourceLoadStatisticsForTestingWithFirstParty:(id)a0 thirdParty:(id)a1 shouldScheduleNotification:(BOOL)a2 completionHandler:(id /* block */)a3;
- (int)_prewarmedProcessIdentifier;
- (id)_objectForBundleParameter:(id)a0;
- (void)_setObject:(id)a0 forBundleParameter:(id)a1;
- (void)_registerURLSchemeAsBypassingContentSecurityPolicy:(id)a0;
- (BOOL)_hasPrewarmedWebProcess;
- (void)_garbageCollectJavaScriptObjectsForTesting;
- (unsigned long long)_numberOfConnectedGamepadsForTesting;
- (int)_gpuProcessIdentifier;
- (void)dealloc;
- (unsigned long long)_webProcessCountIgnoringPrewarmed;
- (unsigned long long)_numberOfConnectedHIDGamepadsForTesting;
- (BOOL)_requestWebProcessTermination:(int)a0;
- (void)_warmInitialProcess;
- (void)_registerURLSchemeAsSecure:(id)a0;
- (id)_resumeDownloadFromData:(id)a0 websiteDataStore:(id)a1 path:(id)a2 originatingWebView:(id)a3;
- (void)_setAutomationSession:(id)a0;
- (void)_setDomainRelaxationForbiddenForURLScheme:(id)a0;
- (unsigned long long)_maximumSuspendedPageCount;
- (void)_clearSupportedPlugins;
- (void)_setUsesOnlyHIDGamepadProviderForTesting:(BOOL)a0;
- (void)_automationCapabilitiesDidChange;
- (void)_setObjectsForBundleParametersWithDictionary:(id)a0;

@end
