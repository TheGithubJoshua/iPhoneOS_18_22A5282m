@interface FMTokenBucket : NSObject

@property (nonatomic) double fillRate;
@property (nonatomic) double capacity;
@property (nonatomic) double operationCost;
@property (nonatomic) double tokenBucket;
@property (nonatomic) double lastArrivalTime;
@property (nonatomic) double totalInterArrivalTime;
@property (nonatomic) double wastedTokens;
@property (nonatomic) double totalTokensGenerated;
@property (nonatomic) double totalTokensConsumed;
@property (nonatomic) long long totalOperations;
@property (nonatomic) long long operationsAllowed;
@property (nonatomic) double lastBucketFill;
@property (nonatomic) double interArrivalTime;
@property (readonly, nonatomic) BOOL operationAllowed;

- (BOOL)_consumeTokens:(long long)a0;
- (BOOL)operationAllowedWithCost:(double)a0;
- (id)initWithFillRate:(double)a0 capacity:(double)a1;
- (id)dumpStatistics;
- (long long)countOfOperationsAllowed;
- (double)timeIntervalUntilOperationAllowed;
- (double)timeIntervalUntilOperationAllowedWithCost:(double)a0;
- (void)_replenishTokens;
- (id)initWithFillRate:(double)a0 capacity:(double)a1 initialAllocation:(double)a2;
- (long long)countOfOperationsAllowedWithCost:(double)a0;
- (void)reset;

@end
