@class ATXLockscreenTracker, ATXNotificationsDedupeTracker, NSDate, NSObject, ATXNotificationRecorder;
@protocol OS_dispatch_source;

@interface ATXNotificationsRecorderPermanentStore : ATXAbstractVersionedDatabase {
    NSObject<OS_dispatch_source> *_timer;
    ATXNotificationRecorder *_internalRecorder;
    ATXLockscreenTracker *_lockscreenTracker;
    ATXNotificationsDedupeTracker *_dedupeTracker;
}

@property (retain) NSDate *lastUpdate;

- (BOOL)migrate;
- (id)init;
- (void)insertTapCoalesceEvent:(id)a0 bundleId:(id)a1 timestamp:(id)a2;
- (void)addNotificationsRecordWithSerializedMetadata:(id)a0 timestamp:(id)a1 notificationID:(id)a2;
- (long long)latestVersion;
- (void)addNotificationRecordInRecentStore:(id)a0 timestamp:(id)a1;
- (void)insertEvent:(long long)a0 timestamp:(id)a1 notificationID:(id)a2;
- (void)replay;
- (void)resetNotificationsHistory;
- (void).cxx_destruct;
- (void)addNotificationsRecordWithMetadata:(id)a0 timestamp:(id)a1 notificationID:(id)a2;
- (void)insertAppLaunchEvent:(id)a0 timestamp:(id)a1;
- (id)createCustomSchema;
- (void)replayWithCallback:(id /* block */)a0;
- (id)getLockscreenBundleIds;

@end
