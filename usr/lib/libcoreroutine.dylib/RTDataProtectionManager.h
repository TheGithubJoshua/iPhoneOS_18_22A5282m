@class RTDarwinNotificationHelper, RTKeybagMonitor;

@interface RTDataProtectionManager : RTService

@property (retain, nonatomic) RTDarwinNotificationHelper *notificationHelper;
@property (retain, nonatomic) RTKeybagMonitor *keybagMonitor;
@property (nonatomic) long long encryptedDataAvailability;
@property (nonatomic) BOOL unlockedSinceBoot;

+ (id)dataProtectionLockStateToString:(long long)a0;
+ (id)encryptedDataAvailabilityToString:(long long)a0;

- (id)init;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)handleUnlockedSinceBoot;
- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchLockStateDisabledWithHandler:(id /* block */)a0;
- (void)handleKeybagLockStatusChange:(long long)a0;
- (id)initWithKeybagMonitor:(id)a0 notificationHelper:(id)a1;

@end
