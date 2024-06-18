@class MTTimerManager, AFInstanceContext, NSMutableDictionary;

@interface SOClockTimerManager : NSObject {
    AFInstanceContext *_instanceContext;
    NSMutableDictionary *_registeredObservations;
    MTTimerManager *_mtTimerManager;
}

+ (void)warmUp;

- (id)init;
- (void)checkIn;
- (id)timers;
- (id)updateTimer:(id)a0;
- (id)dismissTimerWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)addTimer:(id)a0;
- (id)removeTimer:(id)a0;
- (void)removeHandlerForEvent:(long long)a0;
- (void)dealloc;
- (id)_registeredObservations;
- (id)initWithInstanceContext:(id)a0;
- (void)addHandler:(id /* block */)a0 forEvent:(long long)a1;

@end
