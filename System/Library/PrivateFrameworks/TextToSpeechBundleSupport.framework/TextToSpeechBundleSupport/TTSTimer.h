@class NSLock, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface TTSTimer : NSObject {
    NSMutableArray *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSLock *_timerLock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _paused;
}

- (void)_startTimer:(id)a0;
- (void)pauseQueue;
- (void)_createTimer;
- (void).cxx_destruct;
- (void)_handleTimerFired;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)a0;
- (void)continueQueue;
- (void)enqueueBlock:(id /* block */)a0 withDelay:(double)a1 withId:(long long)a2;
- (void)clearQueue;

@end
