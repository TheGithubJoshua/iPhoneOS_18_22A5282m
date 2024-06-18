@class NSHashTable;

@interface SKASystemMonitor : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ivarLock;
@property (nonatomic) BOOL underFirstLock;
@property (retain, nonatomic) NSHashTable *listeners;
@property (readonly, nonatomic) BOOL isUnderFirstDataProtectionLock;

+ (id)logger;
+ (id)sharedInstance;

- (void)addListener:(id)a0;
- (id)init;
- (void)_listenForKeyBagChangeNotifications;
- (void)removeListener:(id)a0;
- (BOOL)_deviceStillUnderFirstLock;
- (void)_updateLockState;
- (void)_deliverNotificationSelectorToListeners:(SEL)a0;
- (void).cxx_destruct;

@end
