@class MTObserverStore;

@interface MTSensitiveUIMonitor : NSObject

@property (retain, nonatomic) MTObserverStore *observers;
@property (nonatomic) int notifyToken;
@property (nonatomic) BOOL hideSensitiveUI;
@property (nonatomic) BOOL needPrefsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedMonitor;

- (id)init;
- (void)removeSensitiveUIObserver:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (BOOL)_isVendorRelease;
- (void)addSensitiveUIObserver:(id)a0;
- (void)unregisterForNotifications;
- (void).cxx_destruct;
- (BOOL)_hideSensitiveUI;
- (BOOL)shouldHideForSensitivity:(long long)a0;
- (void)_handleNotification;
- (void)registerForNotifications;
- (void)dealloc;

@end
