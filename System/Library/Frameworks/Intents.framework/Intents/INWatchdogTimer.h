@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface INWatchdogTimer : NSObject {
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _isStopped;
    double _remainingInterval;
    double _startTime;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void)_start;
- (void)_reset;
- (void)_stop;
- (BOOL)_isCanceled;
- (void)stop;
- (void)cancel;
- (id)initWithTimeoutInterval:(double)a0 timeoutHandler:(id /* block */)a1;
- (BOOL)isCanceled;
- (void)start;
- (void)_cancel;
- (void).cxx_destruct;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (BOOL)cancelIfNotAlreadyCanceled;
- (void)dealloc;
- (BOOL)_cancelIfNotAlreadyCanceled;

@end
