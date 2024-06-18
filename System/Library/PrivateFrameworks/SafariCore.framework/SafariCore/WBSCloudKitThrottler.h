@class NSArray, NSMutableArray;
@protocol WBSCloudKitThrottlerDataStore;

@interface WBSCloudKitThrottler : NSObject {
    NSMutableArray *_pastOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    double _numberOfSecondsToMonitor;
    unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
}

@property (weak, nonatomic) id<WBSCloudKitThrottlerDataStore> dataStore;

+ (id)_distributionBucketsFromConfiguration:(id)a0;
+ (BOOL)policyStringRepresentsValidPolicy:(id)a0;

- (id)init;
- (void)reloadRecordOfPastOperations;
- (id)dateOfNextPermittedOperationWithPriority:(long long)a0;
- (id)initWithPolicyString:(id)a0;
- (void)operationWithPriority:(long long)a0 didCompleteWithResult:(long long)a1;
- (double)_test_numberOfSecondsToMonitor;
- (BOOL)_loadDistributionConfiguration:(id)a0;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_minimumTimeBetweenOperationsForOperations:(id)a0;
- (void)_loadRecordOfPastOperations;
- (void)_addOperationAtDate:(id)a0;
- (double)_timeIntervalUntilOperationShouldBePruned:(id)a0;
- (void).cxx_destruct;
- (double)_timeIntervalUntilNextPermittedOperationAttemptWithNormalPriority;
- (id)description;
- (double)_currentMinimumTimeIntervalBetweenOperations;
- (void)_saveRecordOfPastOperations;
- (id)_dateOfNextPermittedOperationAttemptWithNormalPriority;
- (BOOL)permitsOperationWithPriority:(long long)a0;
- (void)_pruneExpiredOrInvalidOperations;
- (BOOL)_throttlerIsActive;
- (void)setPolicyString:(id)a0;

@end
