@class NSHashTable;

@interface SGLongRunningTaskManager : NSObject {
    NSHashTable *_tasks;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)unregister:(id)a0;
- (id)task;
- (id)taskWithDeadline:(double)a0;
- (void)tellCurrentTasksToDefer;

@end
