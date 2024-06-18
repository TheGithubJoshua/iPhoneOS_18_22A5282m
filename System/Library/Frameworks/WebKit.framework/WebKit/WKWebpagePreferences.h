@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject> {
    struct ObjectStorage<API::WebsitePolicies> { struct type { unsigned char __lx[152]; } data; } _websitePolicies;
    struct unique_ptr<WebKit::WebPagePreferencesLockdownModeObserver, std::default_delete<WebKit::WebPagePreferencesLockdownModeObserver>> { struct __compressed_pair<WebKit::WebPagePreferencesLockdownModeObserver *, std::default_delete<WebKit::WebPagePreferencesLockdownModeObserver>> { struct WebPagePreferencesLockdownModeObserver *__value_; } __ptr_; } _lockdownModeObserver;
}

@property (class, readonly, nonatomic) WKWebpagePreferences *defaultPreferences;

@property (nonatomic) long long preferredContentMode;
@property (nonatomic) BOOL allowsContentJavaScript;
@property (nonatomic, getter=isLockdownModeEnabled) BOOL lockdownModeEnabled;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setNetworkConnectionIntegrityEnabled:(BOOL)a0;
- (id)init;
- (void)_setCustomNavigatorPlatform:(id)a0;
- (void)_setUserContentController:(id)a0;
- (void)_setMouseEventPolicy:(unsigned long long)a0;
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)a0;
- (unsigned long long)_allowedAutoplayQuirks;
- (BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
- (id)_userContentController;
- (id)_customNavigatorPlatform;
- (id)_customUserAgentAsSiteSpecificQuirks;
- (void)_setCustomUserAgentAsSiteSpecificQuirks:(id)a0;
- (void)_setPopUpPolicy:(unsigned long long)a0;
- (unsigned long long)_networkConnectionIntegrityPolicy;
- (void)_setModalContainerObservationPolicy:(unsigned long long)a0;
- (void)_setNetworkConnectionIntegrityPolicy:(unsigned long long)a0;
- (BOOL)_allowPrivacyProxy;
- (void)_setCustomHeaderFields:(id)a0;
- (BOOL)_networkConnectionIntegrityEnabled;
- (void)_setColorSchemePreference:(unsigned long long)a0;
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)a0;
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_modalContainerObservationPolicy;
- (void)_setAllowPrivacyProxy:(BOOL)a0;
- (void)_setActiveContentRuleListActionPatterns:(id)a0;
- (void)_setContentBlockersEnabled:(BOOL)a0;
- (unsigned long long)_popUpPolicy;
- (void)_setWebsiteDataStore:(id)a0;
- (BOOL)_captivePortalModeEnabled;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)a0;
- (BOOL)_contentBlockersEnabled;
- (unsigned long long)_colorSchemePreference;
- (void)dealloc;
- (id)_activeContentRuleListActionPatterns;
- (void)_setAllowedAutoplayQuirks:(unsigned long long)a0;
- (id)_applicationNameForUserAgentWithModernCompatibility;
- (id)_customUserAgent;
- (void)_setCaptivePortalModeEnabled:(BOOL)a0;
- (void)_setCustomUserAgent:(id)a0;
- (void)_setAutoplayPolicy:(long long)a0;
- (id)_websiteDataStore;
- (unsigned long long)_mouseEventPolicy;
- (long long)_autoplayPolicy;
- (id)_customHeaderFields;

@end
