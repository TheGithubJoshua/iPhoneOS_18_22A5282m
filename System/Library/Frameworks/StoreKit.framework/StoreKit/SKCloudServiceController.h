@class ICCloudServiceStatusMonitor;

@interface SKCloudServiceController : NSObject {
    BOOL _allowsPromptingForPrivacyAcknowledgement;
    ICCloudServiceStatusMonitor *_cloudServiceStatusMonitor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic, setter=_setAllowsPromptingForPrivacyAcknowledgement:) BOOL _allowsPromptingForPrivacyAcknowledgement;

+ (void)requestAuthorization:(id /* block */)a0;
+ (long long)authorizationStatus;
+ (id)_publicErrorForPrivateError:(id)a0;

- (id)init;
- (void)requestStorefrontCountryCodeWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)requestCapabilitiesWithCompletionHandler:(id /* block */)a0;
- (void)requestUserTokenForDeveloperToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)requestStorefrontIdentifierWithCompletionHandler:(id /* block */)a0;
- (id)_cloudServiceStatusMonitorWithError:(id *)a0;
- (void)_handleCapabilitiesDidChangeNotification:(id)a0;
- (void)_handleStorefrontCountryCodeDidChangeNotification:(id)a0;
- (void)_handleStorefrontIdentifierDidChangeNotification:(id)a0;
- (void)requestPersonalizationTokenForClientToken:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
