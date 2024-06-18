@class NSString, NSArray, LSInstallProgressList, NSMutableDictionary, NSMutableSet, NSObject, NSMutableOrderedSet, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _LSInstallProgressService : NSObject <NSXPCListenerDelegate> {
    NSMutableSet *_observers;
    LSInstallProgressList *_progresses;
    NSMutableSet *_publishingStrings;
    NSMutableDictionary *_installIndexes;
    NSMutableOrderedSet *_orderedInstalls;
    NSMutableSet *_inactiveInstalls;
    NSMutableDictionary *_installTypes;
    NSObject<OS_dispatch_queue> *_installControlsQueue;
    NSObject<OS_dispatch_queue> *_observersQueue;
    NSArray *_journalledNotificationsToReplay;
    NSMutableArray *_startupJournalledNotifications;
    BOOL _replayingJournalToNewClients;
    NSObject<OS_dispatch_source> *_progressProportionsSaveTimerSource;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _progressProportionsLock;
    NSMutableDictionary *_progressProportions;
    BOOL _usingNetwork;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)notificationTypeForOperation:(unsigned long long)a0;
+ (id)sharedInstance;
+ (void)beginListening;

- (void)discardProportionsForBundleID:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)getMaxProgressPhaseUnitsForLoading:(int *)a0 restoring:(int *)a1 installing:(int *)a2 essentialAssets:(int *)a3 forAppProxy:(id)a4;
- (void)sendNotification:(int)a0 forAppProxies:(id)a1 Plugins:(BOOL)a2 completion:(id /* block */)a3;
- (id)_LSFindPlaceholderApplications;
- (void)installationEndedForApplication:(id)a0 withState:(unsigned long long)a1;
- (void)addSendNotificationFenceWithTimeout:(double)a0 fenceBlock:(id /* block */)a1;
- (SEL)observerSelectorForNotification:(int)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)performJournalRecovery;
- (id)parentProgressForApplication:(id)a0 andPhase:(unsigned long long)a1 isActive:(BOOL)a2;
- (void)loadProportions;
- (void)restoreInactiveInstalls;
- (void)sendNotification:(int)a0 forApps:(id)a1 withPlugins:(BOOL)a2 completion:(id /* block */)a3;
- (void)setProgressProportionsByPhase:(id)a0 forInstallOfApplicationWithIdentifier:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)finalInstallPhaseForAppProxy:(id)a0;
- (void)sendDatabaseRebuiltNotificationToObserver:(id)a0;
- (void).cxx_destruct;
- (id)progressProportionsForBundleID:(id)a0;
- (void)dispatchJournalledNotificationsToObserver:(id)a0;
- (void)directlySendNotification:(int)a0 withProxies:(id)a1 toObserverProxy:(id)a2;
- (void)installationFailedForApplication:(id)a0;
- (void)_placeholderIconUpdatedForApp:(id)a0;
- (void)sendNotification:(id)a0 ForPlugins:(id)a1;
- (void)coalesceProportionsSave;
- (id)loadJournalledNotificationsFromDisk;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)_prepareApplicationProxiesForNotification:(int)a0 identifiers:(id)a1 withPlugins:(BOOL)a2;
- (void)saveProportions;
- (void)rebuildInstallIndexes;
- (void)sendNotification:(id)a0 forApplicationExtensionRecords:(id)a1;
- (void)directlySendNotification:(int)a0 withProxies:(id)a1 toObserver:(id)a2;
- (void)sendNetworkUsageChangedNotification;
- (void)addObserver:(id)a0;
- (void)_placeholdersUninstalled:(id)a0;
- (void)createInstallProgressForApplication:(id)a0 withPhase:(unsigned long long)a1 andPublishingString:(id)a2 reply:(id /* block */)a3;
- (void)sendDatabaseRebuiltNotification;
- (void)dispatchJournalledNotificationsToConnectedClients;

@end
