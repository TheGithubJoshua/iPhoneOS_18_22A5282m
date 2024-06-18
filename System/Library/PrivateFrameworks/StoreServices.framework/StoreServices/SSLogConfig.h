@class SSLogFileOptions, NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface SSLogConfig : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) SSLogFileOptions *backingLogFileOptions;
@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) unsigned long long environment;
@property (copy, nonatomic) NSString *outputDirectory;
@property (copy, nonatomic) NSString *outputFilename;
@property (copy, nonatomic) NSString *subsystem;
@property (nonatomic) BOOL writeToDisk;
@property (readonly, nonatomic) BOOL debugLogsEnabled;
@property (readonly, nonatomic) SSLogFileOptions *logFileOptions;
@property (readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
@property (readonly, nonatomic) BOOL shouldLog;
@property (readonly, nonatomic) BOOL shouldLogToDisk;

+ (id)sharedAccountsLogoutConfig;
+ (id)sharedWriteToDiskConfig;
+ (id)sharedBagConfig;
+ (id)sharedConfig;
+ (id)_logFilenameForSubsystem:(id)a0 category:(id)a1;
+ (id)sharedAccountsAuthenticationConfig;
+ (BOOL)_deviceIsRunningInternalOrSeedBuild;
+ (id)sharedDaemonConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharediTunesStoreConfigOversize;
+ (id)sharedAskPermissionExtensionConfig;
+ (id)_createLogConfigWithBaseConfig:(id)a0 subystem:(id)a1 category:(id)a2;
+ (BOOL)_deviceIsRunningSeedBuild;
+ (id)sharedBagCacheConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedAccountsConfig;
+ (id)sharedStoreServicesConfig;
+ (id)sharedDaemonConfigOversize;
+ (BOOL)_debugLogsEnabled:(id)a0;
+ (id)sharedFairPlayAnisetteConfig;
+ (id)sharedFeatureEnablerMigrationConfig;
+ (id)sharediTunesStoreConfig;
+ (id)sharedPushNotificationConfig;
+ (id)_logFileDirectoryPathForSubsystem:(id)a0 category:(id)a1;
+ (BOOL)_deviceIsRunningInternalBuild;
+ (id)sharedStoreServicesConfigOversize;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedFollowUpConfig;
+ (id)_createLogConfigWithSubsystem:(id)a0 category:(id)a1;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
