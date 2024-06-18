@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TLContentProtectionStateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_blocksScheduledForProtectedContentUnlockedEvent;
    long long _contentProtectionStatus;
    long long _unlockedSinceBootStatus;
    int _firstUnlockNotifyToken;
}

@property (class, readonly) TLContentProtectionStateObserver *sharedContentProtectionStateObserver;

- (void)_registerFirstUnlockNotifyToken;
- (id)init;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)_loadContentProtectionStatusIfNeeded;
- (void)_cancelFirstUnlockNotifyToken;
- (void)_assertRunningOnAccessQueue;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void).cxx_destruct;
- (void)_updateUnlockedSinceBootStatus;
- (void)dealloc;
- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_handleFirstUnlockNotification;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void)_assertNotRunningOnAccessQueue;

@end
