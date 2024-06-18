@protocol ATXCloudStorageSettingsDelegate;

@interface ATXCloudStorageSettingsListener : NSObject

@property (retain, nonatomic) id<ATXCloudStorageSettingsDelegate> delegate;

+ (id)sharedInstance;
+ (BOOL)isBackupForContactsEnabled;
+ (BOOL)isBackupForSiriEnabled;

- (id)init;
- (void)handleBackupPreferencesDidChange;
- (void)registerForCloudSyncPreferenceDidChangeNotification;
- (void).cxx_destruct;
- (void)registerForCloudStorageDeletedByUserNotification;
- (void)handleDeleteDataRequest;
- (void)registerForCloudStorageSettingsNotifications;

@end
