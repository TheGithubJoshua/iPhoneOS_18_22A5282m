@class CARObserverHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DBKeybagMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) int lockStateNotificationToken;
@property (nonatomic) long long lockedState;
@property (nonatomic) double backoffInterval;
@property (nonatomic) BOOL permanentlyBlocked;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic) long long currentState;
@property (readonly, nonatomic, getter=isBlocked) BOOL blocked;

- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_handleKeybagStatusChanged;
- (void)_queue_updateLockedState;

@end
