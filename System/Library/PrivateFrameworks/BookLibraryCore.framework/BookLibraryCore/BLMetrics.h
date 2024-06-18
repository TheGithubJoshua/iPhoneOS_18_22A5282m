@class BLServiceProxy;

@interface BLMetrics : NSObject

@property (retain, nonatomic) BLServiceProxy *serviceProxy;

+ (id)metrics;
+ (void)flushInProcessWithCompletion:(id /* block */)a0;

- (void)enqueueEvents:(id)a0;
- (id)init;
- (void)flush;
- (void).cxx_destruct;
- (void)setAutoFlushEnabled:(BOOL)a0;

@end
