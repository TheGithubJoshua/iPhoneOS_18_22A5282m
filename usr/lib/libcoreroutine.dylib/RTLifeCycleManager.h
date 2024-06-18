@class NSObject, NSMutableDictionary, NSMutableSet, NSMutableArray, RTWatchdogManager;
@protocol OS_dispatch_queue;

@interface RTLifeCycleManager : NSObject

@property (retain, nonatomic) NSMutableArray *signals;
@property (retain, nonatomic) NSMutableDictionary *listeners;
@property (retain, nonatomic) NSMutableSet *services;
@property (retain, nonatomic) RTWatchdogManager *watchdogManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)_start;
- (void)_exit;
- (id)init;
- (void)addListener:(id)a0 machPort:(id)a1;
- (void)start;
- (void)submitUptimeMetricsWithDefaultsMananger:(id)a0;
- (void)addService:(id)a0;
- (void).cxx_destruct;
- (id)serviceWithClass:(Class)a0;
- (void)dealloc;
- (id)createSourceForSignal:(int)a0 withBlock:(id /* block */)a1;
- (void)exit;
- (void)exitWithDelay:(double)a0;

@end
