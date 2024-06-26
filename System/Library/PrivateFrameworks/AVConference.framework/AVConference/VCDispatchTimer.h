@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface VCDispatchTimer : VCObject {
    NSObject<OS_dispatch_source> *_timer;
    unsigned int _intervalMilliseconds;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (readonly, nonatomic) id /* block */ callbackBlock;
@property (readonly, nonatomic) BOOL isRunning;

- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithIntervalMilliseconds:(unsigned int)a0 callbackBlock:(id /* block */)a1;
- (id)initWithIntervalMilliseconds:(unsigned int)a0 callbackBlock:(id /* block */)a1 clientQueue:(id)a2;
- (id)initWithIntervalSeconds:(unsigned int)a0 callbackBlock:(id /* block */)a1;
- (id)initWithIntervalSeconds:(unsigned int)a0 callbackBlock:(id /* block */)a1 clientQueue:(id)a2;

@end
