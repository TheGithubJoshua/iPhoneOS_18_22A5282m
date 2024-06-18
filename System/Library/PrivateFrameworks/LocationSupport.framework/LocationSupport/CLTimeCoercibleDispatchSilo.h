@class NSMutableArray;

@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo

@property (readonly, nonatomic) NSMutableArray *timerHolders;

- (void)prepareAndRunBlock:(id /* block */)a0;
- (void)heartBeat:(id)a0;
- (void)afterInterval:(double)a0 async:(id /* block */)a1;
- (void)setLatchedAbsoluteTimestamp:(double)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithUnderlyingQueue:(id)a0;
- (void).cxx_destruct;
- (id)newTimer;

@end
