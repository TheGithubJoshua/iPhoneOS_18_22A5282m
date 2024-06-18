@interface FCTaskScheduler : NSObject

+ (void)scheduleLowPriorityOperation:(id)a0;
+ (void)scheduleOptionalPrefetchBlock:(id /* block */)a0;
+ (void)disableOptionalPrefetching;
+ (id)lowPriorityOperationQueue;
+ (void)popHighPriorityTaskInFlight;
+ (void)scheduleLowPriorityBlock:(id /* block */)a0;
+ (void)scheduleLowPriorityAsyncBlock:(id /* block */)a0;
+ (id)lowPriorityQueue;
+ (void)pushHighPriorityTaskInFlight;
+ (void)scheduleLowPriorityBlockForMainThread:(id /* block */)a0;
+ (void)executeOptionalPrefetchBlock:(id /* block */)a0;
+ (void)enableBackgroundDownloadsInSpiteOfHighPriorityTasks;
+ (id)backgroundDownloadOperationQueue;

@end
