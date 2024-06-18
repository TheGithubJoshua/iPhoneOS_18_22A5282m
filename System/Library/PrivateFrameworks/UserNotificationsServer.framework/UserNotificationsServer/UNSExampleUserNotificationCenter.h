@class UNUserNotificationCenter, PTTestRecipe;

@interface UNSExampleUserNotificationCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
    PTTestRecipe *_basicTestRecipe;
}

- (void)removeAllNotifications;
- (void)publish;
- (id)init;
- (void)_postNotificationWithID:(id)a0 threadIdentifier:(id)a1;
- (id)sectionIdentifier;
- (id)_existingNotificationRequestForIdentifier:(id)a0;
- (void)publishWithNumberOfUniqueThreads:(unsigned long long)a0;
- (id)_userNotificationCenter;
- (void)publish:(unsigned long long)a0 numberOfUniqueThreads:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)publish:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)latestNotificationRequestIdentifier;
- (void).cxx_destruct;
- (void)update;
- (id)_newNotificationRequest:(id)a0 threadIdentifier:(id)a1;
- (id)_basicPostUpdateRecipe;

@end
