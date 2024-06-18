@class NSSet, NSString, ACAccountStore, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGAccountsAdapter : NSObject {
    NSSet *_usernamesCache;
    ACAccountStore *_accountStore;
    NSString *_cachedPrimaryICloudAccount;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_source> *_updateSource;
    BOOL _updateTimerIsSet;
    NSObject<OS_dispatch_queue> *_updateTimerQueue;
    NSObject<OS_dispatch_source> *_updateTimerSource;
}

+ (id)sharedInstance;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (id)serverIdentifierForAccount:(id)a0;
- (void)removeNotificationObserver;
- (id)primaryICloudCalendarAccount;
- (void)registerNotificationObserver;
- (void)setCachedAccounts;
- (BOOL)hasCalendarAccount:(id)a0;
- (void)cancelUpdateTimer;
- (void).cxx_destruct;
- (BOOL)readCachedAccounts;
- (void)setUpdateTimerWithDelaySeconds:(unsigned long long)a0;
- (void)dealloc;
- (void)refreshCacheFromAccountsService;
- (void)accountsStoreDidChange:(id)a0;

@end
