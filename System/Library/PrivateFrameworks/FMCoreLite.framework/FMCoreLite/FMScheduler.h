@interface FMScheduler : NSObject

+ (id)globalAsyncScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)a0;
+ (id)mainThreadScheduler;
+ (id)immediateScheduler;
+ (id)serialDispatchQueueSchedulerWithName:(id)a0;
+ (id)schedulerWithDispatchQueue:(id)a0;

@end
