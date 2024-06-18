@class SCKAsyncSerialQueue;

@interface SCKStartupQueue : NSObject

@property (retain, nonatomic) SCKAsyncSerialQueue *startupTaskQueue;

- (void)executeAfterStartup:(id /* block */)a0;
- (id)initWithDeferredStartup:(BOOL)a0;
- (void).cxx_destruct;
- (void)enqueueStartupBlock:(id /* block */)a0;

@end
