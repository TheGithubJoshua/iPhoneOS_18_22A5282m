@class NSString, NSObject;
@protocol OS_os_log;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *subsystem;
@property (retain, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property (readonly, nonatomic) BOOL debugLogsEnabled;

+ (id)sharedAccountsLogoutConfig;
+ (id)sharedMessagingUIConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedServerDataCacheConfig;
+ (id)sharedBagConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedRatingsProviderConfig;
+ (id)sharedBiometricsConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedEngagementConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedTreatmentsConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedAccountsConfig;
+ (id)sharedPromiseConfig;
+ (id)sharedConfigOversize;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedMediaConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedWebUIConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedAccountsMultiUserConfig;
+ (id)sharedDataMigrationConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedMarketingItemConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedMetricsConfig;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithCategory:(id)a0 backingLog:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
