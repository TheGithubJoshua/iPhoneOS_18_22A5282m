@class NSMutableDictionary;

@interface AMSMetricsMemoryDataSource : NSObject <AMSMetricsDataSource>

@property (retain, nonatomic) NSMutableDictionary *batches;

+ (id)batchesFromEvents:(id)a0;

- (void)cancel;
- (BOOL)removeEvents:(id)a0 error:(id *)a1;
- (void)enumerateSortedEventsForTopic:(id)a0 block:(id /* block */)a1;
- (BOOL)willStartBatchingWithLogKey:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)skipEvents:(id)a0 error:(id *)a1;
- (void)didFinishBatching;
- (id)initWithEvents:(id)a0;

@end
