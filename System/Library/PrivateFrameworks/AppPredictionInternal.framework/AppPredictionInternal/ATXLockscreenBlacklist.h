@class _PASLock;

@interface ATXLockscreenBlacklist : NSObject {
    _PASLock *_lock;
    id _notificationCenterToken;
    int _libnotifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)isPredictionGloballyDisabled;
- (id)blacklist;
- (void).cxx_destruct;
- (void)dealloc;

@end
