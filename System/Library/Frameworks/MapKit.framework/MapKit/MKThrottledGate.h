@class VKTimer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MKThrottledGate : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _maxAvailableTickets;
    double _availableTickets;
    double _refreshRate;
    NSMutableArray *_waitingJobs;
    VKTimer *_timer;
}

- (void)dispatch:(id /* block */)a0;
- (void)_ensureTimer;
- (void).cxx_destruct;
- (id)description;
- (void)_timerFired:(id)a0;
- (id)initWithMax:(int)a0 refreshRate:(double)a1 queue:(id)a2;
- (void)dealloc;
- (BOOL)_replenishAvailableJobsIfNecessary;
- (BOOL)_dispatchWaitingJobsIfNecessary;

@end
