@class NSString, NSMutableDictionary, NSDate, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface FPDSharedScheduler : NSObject {
    NSObject<OS_xpc_object> *_activity;
    id /* block */ _criteriaBuilder;
    NSString *_label;
    NSMutableDictionary *_executors;
    BOOL _registered;
    long long _alwaysRunnableCount;
    NSDate *_lastRegistrationDate;
    NSDate *_lastTriggerDate;
    NSDate *_lastUsageDate;
    BOOL _preventRunning;
    BOOL _manualScheduling;
    BOOL _wasCheckedIn;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *queue;

@property BOOL preventRunning;
@property (getter=useManualScheduling) BOOL manualScheduling;
@property (readonly) BOOL hasRegisteredExecutors;
@property (readonly) long long registrationCount;
@property (readonly) NSString *label;

+ (void)checkIn;
+ (id)schedulerWithLabel:(id)a0;

- (void)removeKey:(id)a0;
- (void)ping;
- (void)_removeKey:(id)a0;
- (id)initWithLabel:(id)a0 criteria:(id)a1;
- (void)checkIn;
- (BOOL)canOrIsForcedToRun;
- (id)initWithLabel:(id)a0 criteriaBuilder:(id /* block */)a1;
- (void)markDoneForKey:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)registerActivity;
- (void)addKey:(id)a0 executor:(id /* block */)a1;
- (BOOL)canRun;
- (void)unregisterActivity;
- (BOOL)runIfPossible:(id /* block */)a0;
- (id /* block */)forceRunningWithReason:(id)a0;
- (BOOL)shouldPause;

@end
