@class NSString, MTXPCConnectionProvider, MTMetrics, NSNotificationCenter, MTTimerManagerExportedObject, MTTimerCache;
@protocol MTTimerManagerIntentSupport;

@interface MTTimerManager : NSObject <MTTimerManagerIntentSupport, MTTimerManagerProviding, MTUserDefaultNotificationObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MTTimerManagerIntentSupport> timerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MTTimerManagerExportedObject *exportedObject;
@property (readonly, nonatomic) MTXPCConnectionProvider *connectionProvider;
@property (retain, nonatomic) MTMetrics *metrics;
@property (retain, nonatomic) MTTimerCache *cache;
@property (retain, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id notificationObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setDefaultDuration:(double)a0;
+ (double)defaultDuration;
+ (void)warmUp;

- (id)init;
- (id)_updateTimer:(id)a0 doSynchronous:(BOOL)a1;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1;
- (id)resumeCurrentTimer;
- (id)nextTimersForDate:(id)a0 maxCount:(unsigned long long)a1;
- (void)checkIn;
- (id)stopCurrentTimer;
- (id)timers;
- (id)currentTimer;
- (BOOL)startCurrentTimerWithDurationSync:(double)a0;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)initWithConnectionProvider:(id)a0 metrics:(id)a1;
- (id)startCurrentTimerWithDuration:(double)a0;
- (id)updateTimer:(id)a0;
- (id)_initWithConnectionProvidingBlock:(id /* block */)a0 metrics:(id)a1 notificationCenter:(id)a2;
- (id)initWithMetrics:(id)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)addTimer:(id)a0;
- (id)_runningTimerFromCurrentTimer:(id)a0 withDuration:(double)a1;
- (id)_validateCanStartTimer:(id)a0;
- (id)timersSync;
- (id)removeTimer:(id)a0;
- (void)reconnect;
- (id)pauseCurrentTimer;
- (BOOL)stopCurrentTimerSync;
- (id)nextTimer;
- (BOOL)_updateCurrentTimerWithStateSync:(unsigned long long)a0;
- (BOOL)pauseCurrentTimerSync;
- (id)repeatTimerWithIdentifier:(id)a0;
- (void)dealloc;
- (id)_updateCurrentTimerWithState:(unsigned long long)a0;
- (void)_getCachedTimersWithFuture:(id)a0 finishBlock:(id /* block */)a1;
- (BOOL)resumeCurrentTimerSync;
- (id)getCurrentTimerSync;

@end
