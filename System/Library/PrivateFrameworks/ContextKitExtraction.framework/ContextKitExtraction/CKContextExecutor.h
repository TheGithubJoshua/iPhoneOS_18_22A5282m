@class NSCondition, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CKContextExecutor : NSObject {
    NSObject<OS_dispatch_queue> *_workItemQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_group> *_group;
    unsigned long long _timeoutAfter;
    NSCondition *_completionCondition;
    id /* block */ _completionHandler;
}

@property (readonly) _Atomic BOOL done;
@property (readonly, weak, nonatomic) id context;

- (void)markIncomplete;
- (void)addWorkItem:(id /* block */)a0 withContext:(id)a1;
- (void)addWorkItem:(id /* block */)a0;
- (void)markReady;
- (void).cxx_destruct;
- (void)addWorkItem:(id /* block */)a0 toQueue:(id)a1;
- (void)addWorkItemToQueue:(id)a0 withWorkItem:(id /* block */)a1 andContext:(id)a2;
- (id)initWithContext:(id)a0 workItemQueue:(id)a1 completionQueue:(id)a2 timeoutAfter:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)markReadyAndAwaitCompletion;
- (void)dealloc;
- (void)_awaitCompletion;

@end
