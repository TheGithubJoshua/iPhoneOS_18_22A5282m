@class _ATXAppIconState, NSSet, ATXHistogramBundleIdTable, NSDictionary, NSObject, ATXWebClipDataStore, _ATXAppInfoManager;
@protocol OS_dispatch_queue;

@interface _ATXAppInstallMonitor : NSObject {
    _ATXAppInfoManager *_appInfoManager;
    ATXWebClipDataStore *_webClipDataStore;
    ATXHistogramBundleIdTable *_histogramBundleIdTable;
    _ATXAppIconState *_appIconState;
    NSDictionary *_assetData;
    NSObject<OS_dispatch_queue> *_installQueue;
    id /* block */ _updateCompletionBlock;
}

@property (retain, nonatomic) NSSet *azulNewAppSet;

+ (id)azulNewAppSet;
+ (id)appDirectoryAppCategoryMappings;
+ (id)appInfoDictWithBackDate:(BOOL)a0 assetData:(id)a1 azulNewAppSet:(id)a2 isFromNotification:(BOOL)a3 newApps:(id)a4;
+ (id)removeIntersectionBetweenSet:(id)a0 set:(id)a1;

- (void)train;
- (id)init;
- (id)_fetchAllApps;
- (id)webClipsForRemovedApps:(id)a0;
- (void)handleInstallationOfApps:(id)a0 isFromNotification:(BOOL)a1 andBackdate:(BOOL)a2;
- (void)stop;
- (void)receivedStateChangeNotification:(id)a0;
- (void)setUpdateCompletionBlock:(id /* block */)a0;
- (void)synchronousUpdateAndBackdate:(BOOL)a0;
- (void)_receivedUninstallNotificationWithApps:(id)a0 placeholderUninstallNotification:(BOOL)a1;
- (BOOL)restoreInProgress;
- (void)start;
- (void)_receivedInstallNotificationWithApps:(id)a0 placeholderInstallNotification:(BOOL)a1;
- (void)noSyncUpdateWithWaitTime:(unsigned long long)a0 andBackdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)_fetchAllAppsFromDatastore;
- (void)handleUninstallationOfApps:(id)a0;
- (void)receivedUninstallNotification:(id)a0;
- (void)notifyInstallationOfAppsWithInstallDictionary:(id)a0;
- (id)initWithAppInfoManager:(id)a0 histogramBundleIdTable:(id)a1 appIconState:(id)a2 webClipDataStore:(id)a3 shouldSynchronousUpdate:(BOOL)a4;
- (void)notifyUninstallationOfAppsWithBundleIdsToRemoveSet:(id)a0;
- (id)initWithAppInfoManager:(id)a0;
- (void)synchronousUpdateWithUninstallWaitTime:(unsigned long long)a0 andBackdate:(BOOL)a1;
- (id)_fetchAllAppsWithInstallDateFromDatastore;
- (void)dealloc;
- (id)initWithAppInfoManager:(id)a0 shouldSynchronousUpdate:(BOOL)a1;
- (void)receivedInstallNotification:(id)a0;
- (id)_appInfoDictWithBackDate:(BOOL)a0 isFromNotification:(BOOL)a1 newApps:(id)a2;

@end
