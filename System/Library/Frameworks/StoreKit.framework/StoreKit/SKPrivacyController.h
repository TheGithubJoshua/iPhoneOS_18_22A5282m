@interface SKPrivacyController : NSObject

+ (void)requestAuthorization:(id /* block */)a0;
+ (long long)authorizationStatus;
+ (id)_sharedCloudServiceStatusMonitor;
+ (long long)_authorizationStatusFromUnderlyingAuthorizationStatus:(long long)a0;

@end
