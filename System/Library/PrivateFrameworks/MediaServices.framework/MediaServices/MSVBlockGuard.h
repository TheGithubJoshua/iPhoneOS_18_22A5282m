@class MSVTimer, NSObject;
@protocol OS_dispatch_queue;

@interface MSVBlockGuard : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _disarmed;
    BOOL _didTimeout;
    MSVTimer *_timeoutTimer;
    id /* block */ _interruptionHandler;
}

- (id)init;
- (id)initWithTimeout:(double)a0 interruptionHandler:(id /* block */)a1;
- (BOOL)disarm;
- (void).cxx_destruct;
- (id)initWithDeallocHandler:(id /* block */)a0;
- (void)dealloc;
- (id)initWithTimeout:(double)a0;
- (void)_interruptWithReason:(long long)a0;

@end
