@class NSMutableSet, NSMutableArray, PLCloudPhotoLibraryBatchContainer;

@interface PLCloudPhotoLibraryBatchManager : NSObject {
    NSMutableArray *_batches;
    PLCloudPhotoLibraryBatchContainer *_currentBatch;
    BOOL _wasDrained;
    NSMutableSet *_masterHistory;
    unsigned long long _resourceBudget;
}

- (void)addRecord:(id)a0;
- (id)init;
- (BOOL)isAboveMaximumResourceBudget;
- (id)drainBatches;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)addRecord:(id)a0 ignoreBatchSize:(BOOL)a1;
- (void)reset;
- (long long)currentBatchCount;

@end
