@class NSObject;
@protocol OS_dispatch_queue;

@interface IDSInternalQueueController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    void *_contextKey;
}

+ (id)sharedInstance;

- (id)init;
- (id)initWithName:(char *)a0 contextKey:(void *)a1;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)isQueueCurrent;
- (id)initWithQueue:(id)a0;
- (void)performBlock:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (BOOL)assertQueueIsCurrent;
- (BOOL)assertQueueIsNotCurrent;
- (id)queue;

@end
