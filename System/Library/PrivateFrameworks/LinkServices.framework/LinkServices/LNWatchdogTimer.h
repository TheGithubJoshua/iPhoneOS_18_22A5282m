@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface LNWatchdogTimer : NSObject

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timerSource;
@property (nonatomic, getter=_isStopped) BOOL stopped;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) double remainingInterval;
@property (nonatomic) double startTime;

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
- (BOOL)isStopped;
- (void).cxx_destruct;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 timeoutHandler:(id /* block */)a2;
- (BOOL)cancelIfNotAlreadyCanceled;
- (void)dealloc;
- (BOOL)_cancelIfNotAlreadyCanceled;
- (void)reset;
- (id)initWithTimeoutInterval:(double)a0 onQueue:(id)a1 singleUse:(BOOL)a2 timeoutHandler:(id /* block */)a3;
- (id)initWithTimeoutInterval:(double)a0 singleUse:(BOOL)a1 timeoutHandler:(id /* block */)a2;

@end
