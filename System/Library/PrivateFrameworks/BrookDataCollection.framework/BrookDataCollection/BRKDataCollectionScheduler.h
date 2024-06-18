@class NSBackgroundActivityScheduler, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BRKDataCollectionScheduler : NSObject {
    NSBackgroundActivityScheduler *_scheduler;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void)schedule:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_queue_schedule:(id /* block */)a0;
- (void)_queue_setSchedulerCriteria;

@end
