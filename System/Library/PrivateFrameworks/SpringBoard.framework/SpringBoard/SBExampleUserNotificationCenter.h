@class NSString, UNUserNotificationCenter;

@interface SBExampleUserNotificationCenter : NSObject {
    UNUserNotificationCenter *_userNotificationCenter;
}

@property (readonly, nonatomic) NSString *latestNotificationRequestIdentifier;
@property (readonly, nonatomic) NSString *sectionIdentifier;

+ (id)sharedInstance;

- (void)removeAllNotifications;
- (void)publish;
- (void)_postNotificationWithID:(id)a0 threadIdentifier:(id)a1;
- (id)_existingNotificationRequestForIdentifier:(id)a0;
- (void)publishWithNumberOfUniqueThreads:(unsigned long long)a0;
- (id)_userNotificationCenter;
- (void)publish:(unsigned long long)a0 numberOfUniqueThreads:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)publish:(unsigned long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)update;
- (id)_newNotificationRequest:(id)a0 threadIdentifier:(id)a1;

@end
