@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLDelayedActionTimer : NSObject {
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _start;
    double _delay;
    double _end;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) double timeRemaining;

- (void)cancel;
- (id)initWithTargetQueue:(id)a0;
- (void)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
