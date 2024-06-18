@class NSObject;
@protocol OS_dispatch_source;

@interface NFTimer : NSObject {
    NSObject<OS_dispatch_source> *_src;
    unsigned long long _popTimeInSeconds;
    BOOL _monotonic;
}

- (void)stopTimer;
- (id)initWithCallback:(id /* block */)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (void)startTimer:(double)a0;
- (void)dealloc;
- (id)initSleepTimerWithCallback:(id /* block */)a0 queue:(id)a1;
- (void)startTimer:(double)a0 leeway:(double)a1;

@end
