@class NSString, NSConditionLock, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MFInvocationQueue : NSObject <MFDiagnosticsGenerator, MFContentProtectionObserver> {
    NSConditionLock *_lock;
    NSMutableArray *_items;
    unsigned long long _maxThreads;
    NSMutableSet *_threadOverrides;
    BOOL _isForeground;
    NSObject<OS_dispatch_queue> *_keybagQueue;
}

@property (nonatomic) unsigned long long maxThreadCount;
@property (nonatomic) int threadPriorityTrigger;
@property (nonatomic) double threadRecycleTimeout;
@property (readonly, nonatomic) unsigned long long invocationCount;
@property (readonly, nonatomic) unsigned long long threadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)flushAllInvocationQueues;
+ (id)sharedInvocationQueue;
+ (unsigned long long)totalInvocationCount;

- (id)init;
- (void)removeAllItems;
- (void)contentProtectionStateChanged:(int)a0 previousState:(int)a1;
- (void)applicationWillSuspend;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (void)applicationWillResume;
- (void)didCancel:(id)a0;
- (void)_drainQueue:(id)a0;
- (void)addInvocation:(id)a0;
- (id)initWithMaxThreadCount:(unsigned long long)a0;
- (void)_adjustThreadPrioritiesIsForeground:(BOOL)a0;
- (void)_processInvocation:(id)a0;

@end
