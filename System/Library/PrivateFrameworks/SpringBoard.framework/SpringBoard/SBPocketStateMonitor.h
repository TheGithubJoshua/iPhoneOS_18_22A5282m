@class NSString, NSHashTable, CMPocketStateManager, NSObject;
@protocol OS_dispatch_queue;

@interface SBPocketStateMonitor : NSObject <CMPocketStateDelegate> {
    CMPocketStateManager *_pocketStateManager;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (readonly, nonatomic) long long pocketState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pocketStateManager:(id)a0 didUpdateState:(long long)a1;
- (void)addObserver:(id)a0;
- (id)initWithCMPocketStateManager:(id)a0 calloutQueue:(id)a1;

@end
