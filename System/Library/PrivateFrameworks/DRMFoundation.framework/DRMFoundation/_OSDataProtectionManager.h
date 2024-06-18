@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _OSDataProtectionManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) BOOL deviceFormatedForContentProtection;
@property (readonly, nonatomic) NSMutableDictionary *handlers;
@property (readonly, nonatomic) NSMutableDictionary *availableState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) int notifyToken;
@property (readonly, nonatomic) BOOL notifyEnabled;

+ (id)sharedInstance;

- (id)init;
- (BOOL)deviceHasBeenUnlockedSinceBoot;
- (id)registerStateChangeHandler:(id /* block */)a0;
- (BOOL)isDataAvailableForClassC;
- (BOOL)isDataAvailableFor:(id)a0;
- (BOOL)isDataAvailableForClassA;
- (void).cxx_destruct;
- (void)deregisterStateChangeHandler:(id)a0;
- (void)handleKeyBagLockNotification;
- (BOOL)deviceIsPasswordConfigured;
- (BOOL)deviceIsLocked;

@end
