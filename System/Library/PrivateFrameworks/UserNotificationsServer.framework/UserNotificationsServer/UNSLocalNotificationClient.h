@class UNSLocationMonitor, NSString, PCPersistentTimer, UNSNotificationScheduleRepository, UNSNotificationRepository, UNSPendingNotificationRepository, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface UNSLocalNotificationClient : NSObject <UNSLocationMonitorObserver> {
    NSString *_bundleIdentifier;
    UNSNotificationRepository *_notificationRepository;
    UNSNotificationScheduleRepository *_notificationScheduleRepository;
    UNSPendingNotificationRepository *_pendingNotificationRepository;
    NSMutableArray *_lazy_pendingNotificationsAwaitingDelivery;
    UNSLocationMonitor *_locationMonitor;
    PCPersistentTimer *_localNotificationTimer;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _monitoringLocaleAndTimeChanges;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidatePendingNotificationRecordTimers;
- (void)_updateTimersForPendingNotificationRecords:(id)a0;
- (void)_setRequestDateForPendingNotificationRecords:(id)a0;
- (void)_queue_triggerDidFireForTimer:(id)a0;
- (void)handleLocaleChange;
- (void)_updateRegionMonitorsForPendingNotificationRecords:(id)a0;
- (void)_setMonitoredRegions:(id)a0;
- (id)_sanitizeNotificationRecords:(id)a0;
- (void)addPendingNotificationRecords:(id)a0;
- (id)undeliveredNotificationRecords;
- (id)_lastLocalNotificationFireDate;
- (void)locationMonitor:(id)a0 triggerDidFireForRegion:(id)a1 forBundleIdentifier:(id)a2;
- (void)removeAllPendingNotificationRecords;
- (void)handleSignificantTimeChange;
- (void)setPendingNotificationRecords:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_queue_triggerDidFireForRegion:(id)a0;
- (void)_setPendingNotificationRecords:(id)a0;
- (void)removePendingNotificationRecords:(id)a0;
- (void)_fireNotification:(id)a0;
- (id)initWithNotificationRepository:(id)a0 pendingNotificationRepository:(id)a1 notificationScheduleRepository:(id)a2 locationMonitor:(id)a3 bundleIdentifier:(id)a4 queue:(id)a5;
- (void)dealloc;
- (void)_invalidateNotificationRecordTimersAndRegionMonitors;
- (id)pendingNotificationRecords;
- (void)_invalidatePendingNotificationRecordRegionMonitors;
- (void)_queue_triggerDidFireForDate:(id)a0;
- (void)handleApplicationStateRestore;
- (id)_pendingNotificationRecords;
- (void)_setLastLocalNotificationFireDate:(id)a0;
- (void)removePendingNotificationRecordsWithIdentifiers:(id)a0;
- (void)_updateTimersAndRegionMonitorsForPendingNotificationRecords:(id)a0;
- (id)_dateFormatter;

@end
