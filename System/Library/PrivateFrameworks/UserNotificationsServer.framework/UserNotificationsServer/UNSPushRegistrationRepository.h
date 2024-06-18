@class NSObject, UNSKeyedDictionaryRepository;
@protocol OS_dispatch_queue;

@interface UNSPushRegistrationRepository : NSObject {
    UNSKeyedDictionaryRepository *_repository;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)allBundleIdentifiers;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void)_queue_setRegistration:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_performMigration;
- (void)setRegistration:(id)a0 forBundleIdentifier:(id)a1;
- (id)registrationForBundleIdentifier:(id)a0;
- (id)_queue_registrationForBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)removeRegistrationForBundleIdentifier:(id)a0;
- (void)performMigration;
- (void)_queue_removeRegistrationForBundleIdentifier:(id)a0;
- (id)initWithDirectory:(id)a0 librarian:(id)a1;
- (void)_queue_performMigrationForBundleIdentifier:(id)a0;

@end
