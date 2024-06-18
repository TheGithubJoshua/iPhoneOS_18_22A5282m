@class NSObject, UNSKeyedDictionaryRepository;
@protocol OS_dispatch_queue;

@interface UNSNotificationScheduleRepository : NSObject {
    UNSKeyedDictionaryRepository *_repository;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)allBundleIdentifiers;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void)removeScheduleForBundleIdentifier:(id)a0;
- (id)scheduleForBundleIdentifier:(id)a0;
- (void)_queue_setSchedule:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_performMigration;
- (void).cxx_destruct;
- (void)setSchedule:(id)a0 forBundleIdentifier:(id)a1;
- (id)_queue_scheduleForBundleIdentifier:(id)a0;
- (void)performMigration;
- (void)_queue_removeScheduleForBundleIdentifier:(id)a0;
- (id)_dateFormatter;
- (id)initWithDirectory:(id)a0 librarian:(id)a1;
- (void)_queue_performMigrationForBundleIdentifier:(id)a0;

@end
