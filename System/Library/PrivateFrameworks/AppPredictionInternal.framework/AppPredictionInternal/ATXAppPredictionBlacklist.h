@class NSUserDefaults, _ATXGlobals, NSObject, _PASLock;
@protocol OS_dispatch_queue;

@interface ATXAppPredictionBlacklist : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id _blacklistNotificationToken;
    NSUserDefaults *_userDefaults;
    _ATXGlobals *_globals;
}

+ (id)sharedInstance;

- (id)init;
- (void)_resetBlacklistWithSet:(id)a0;
- (void)_performMigrationsIfNeeded;
- (void)_createBlacklistFromPreferencesDisabledApps;
- (int)registerPrefsChangeHandler:(id /* block */)a0;
- (void)_listenForUpdates;
- (void).cxx_destruct;
- (void)_updateBlacklist;
- (void)deregisterPrefsChangeHandlerWithToken:(int)a0;
- (id)initWithUserDefaults:(id)a0 globals:(id)a1;
- (void)dealloc;
- (void)_updateBlacklistFromGlobalsBlacklistedApps;
- (id)disabledBundleIds;

@end
