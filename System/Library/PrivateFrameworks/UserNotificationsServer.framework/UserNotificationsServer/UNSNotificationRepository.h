@class UNSKeyedDataStoreRepository, UNSBundleLibrarian, NSMutableSet, NSObject, UNSKeyedObservable;
@protocol UNSNotificationRepositorySettingsProvider, UNSNotificationRepositoryDelegate, OS_dispatch_queue;

@interface UNSNotificationRepository : NSObject {
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSMutableSet *_unlimitedBodyBundleIdentifiers;
    NSObject<OS_dispatch_queue> *_queue;
    UNSBundleLibrarian *_librarian;
}

@property (weak, nonatomic) id<UNSNotificationRepositorySettingsProvider> settingsProvider;
@property (nonatomic) id<UNSNotificationRepositoryDelegate> delegate;

- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)allBundleIdentifiers;
- (long long)_maxObjectsPerKey;
- (void)notificationSourcesDidUninstall:(id)a0;
- (id)initWithDirectory:(id)a0 librarian:(id)a1 repositoryProtectionStrategy:(id)a2;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)notificationSourcesDidInstall:(id)a0;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (id)initWithDataStoreRepository:(id)a0 observable:(id)a1 librarian:(id)a2;
- (void)_queue_performMigrationForPushStoreAtPath:(id)a0;
- (id)notificationRecordsForBundleIdentifier:(id)a0;
- (void)removeAllNotificationRecordsForBundleIdentifier:(id)a0;
- (id)_queue_badgeNumberForBundleIdentifier:(id)a0;
- (void)_queue_setBadgeValue:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_queue_performMigration;
- (id)badgeNumberForBundleIdentifier:(id)a0;
- (BOOL)_shouldPersistNotificationRecord:(id)a0 forBundleSettings:(id)a1 perTopicSettings:(id)a2;
- (void)_queue_removeInvalidNotificationRecordsForBundleIdentifier:(id)a0;
- (void)removeNotificationRepository;
- (void)_queue_notifyObserversNotificationsDidAddNotifications:(id)a0 replaceNotifications:(id)a1 replacementNotifications:(id)a2 removedNotifications:(id)a3 shouldRepost:(BOOL)a4 forBundleIdentifier:(id)a5;
- (void)_queue_saveNotificationRecord:(id)a0 shouldRepost:(BOOL)a1 withOptions:(unsigned long long)a2 forBundleIdentifier:(id)a3;
- (void)_queue_performMigrationForPushStore;
- (void)_queue_removeNotificationRecordsPassingTest:(id /* block */)a0 forBundleIdentifier:(id)a1;
- (void)setBadgeNumber:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_queue_setBadgeNumber:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_notificationsForObjects:(id)a0;
- (void)_logNotification:(id)a0 forBundleIdentifier:(id)a1;
- (void)removeStoreForBundleIdentifier:(id)a0;
- (void)setBadgeString:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)setBadgeCount:(long long)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)_queue_triggerInvalidationForFirstUnlock;
- (id)notificationRecordForForIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void)_queue_performMigrationForUserNotificationsStore;
- (void)removeInvalidNotificationRecordsForBundleIdentifier:(id)a0;
- (void)performValidation;
- (void)_queue_setBadgeCount:(long long)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_queue_notificationRecordForForIdentifier:(id)a0 forBundleIdentifier:(id)a1;
- (id)_queue_notificationRecordsForBundleIdentifier:(id)a0;
- (void)performMigration;
- (void)_queue_performValidation;
- (void)_queue_removeAllNotificationRecordsForBundleIdentifier:(id)a0;
- (void)saveNotificationRecord:(id)a0 shouldRepost:(BOOL)a1 forBundleIdentifier:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)_queue_setBadgeString:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)removeNotificationRecordsPassingTest:(id /* block */)a0 forBundleIdentifier:(id)a1;
- (void)_queue_performMigrationForBundleIdentifier:(id)a0;

@end
