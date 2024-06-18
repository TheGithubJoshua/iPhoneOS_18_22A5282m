@class NSCountedSet, NSMutableDictionary, NSSet, NSMutableSet, NSObject, RBSProcessMonitor;
@protocol OS_dispatch_queue, FPDProcessMonitorDelegate;

@interface FPDProcessMonitor : NSObject {
    RBSProcessMonitor *_monitor;
    NSMutableDictionary *_bundleIDForPID;
    NSCountedSet *_bundleIDs;
    NSCountedSet *_pids;
    NSMutableSet *_foregroundBundleIDs;
    NSSet *_excludedBundleIDs;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (weak) id<FPDProcessMonitorDelegate> delegate;

- (id)_bundleIDForPID:(int)a0;
- (void)_addPIDToObserve:(int)a0;
- (void)_updateMonitoredBundleIDs;
- (BOOL)isForeground;
- (id)prettyDescription;
- (void)process:(int)a0 didBecomeForeground:(BOOL)a1;
- (void)_configureAppMonitor:(id)a0;
- (void)_removePIDToObserve:(int)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (void)_createMonitor;
- (void)_stopMonitoringPID:(int)a0;
- (void)_handleProcessStateUpdate:(id)a0;
- (void)_startMonitoringAndSendInitialNotificationForPID:(int)a0;
- (id)initWithExcludedBundleIDs:(id)a0;
- (void)addPIDToObserve:(int)a0;
- (BOOL)_isProcessForeground:(id)a0;
- (void)_invalidate;
- (void)removePIDToObserve:(int)a0;

@end
