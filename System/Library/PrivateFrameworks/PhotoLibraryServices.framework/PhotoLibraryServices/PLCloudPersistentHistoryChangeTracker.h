@class NSString, NSPersistentStoreCoordinator, NSPersistentHistoryToken, PLChangeHandlingNotificationObserver;
@protocol PLCloudPersistentHistoryChangeTrackerDelegate;

@interface PLCloudPersistentHistoryChangeTracker : NSObject {
    NSPersistentHistoryToken *_lastKnownToken;
    NSPersistentStoreCoordinator *_coordinator;
    PLChangeHandlingNotificationObserver *_notificationObserver;
}

@property (readonly, copy) NSString *name;
@property (weak, nonatomic) id<PLCloudPersistentHistoryChangeTrackerDelegate> delegate;
@property (readonly, copy) NSString *lastKnownTokenDescription;
@property (readonly) BOOL hasChangeTrackerToken;

- (void)saveLastKnownChangeTrackerTokenToDisk;
- (void)updateLastKnownTokenToResult:(id)a0;
- (id)fetchAllEventsInContext:(id)a0;
- (void)disconnect;
- (BOOL)isConnected;
- (id)lastKnownTokenFromDisk;
- (void)clearToken;
- (BOOL)connect;
- (void)changeTrackerDidReceiveChangesWithTransaction:(id)a0;
- (void)_unregisterForChangeHandlingNotifications;
- (void).cxx_destruct;
- (id)_eventsResultFromPersistentHistoryToken:(id)a0 inContext:(id)a1;
- (void)_updateLastKnownTokensToToken:(id)a0;
- (id)currentToken;
- (id)initWithPersistentStoreCoordinator:(id)a0 libraryBundle:(id)a1;
- (void)_registerForChangeHandlingNotifications;
- (void)forceTokenToCurrent;

@end
