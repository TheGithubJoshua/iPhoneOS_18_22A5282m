@interface VNDetectorAsyncTasksQueueCache : VNAsyncTasksQueueCache

+ (id)queueLabelWithUniqueAppendix:(id)a0;
+ (long long)maximumAllowedTasksInTheQueue;
+ (id)sharedCache;

@end
