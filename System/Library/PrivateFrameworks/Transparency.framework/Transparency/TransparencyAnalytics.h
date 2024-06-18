@class TransparencySFAnalytics;

@interface TransparencyAnalytics : NSObject

@property (retain) TransparencySFAnalytics *sfanalytics;

+ (id)logger;
+ (id)errorChain:(id)a0 depth:(unsigned long long)a1;
+ (BOOL)hasInternalDiagnostics;
+ (id)formatEventName:(id)a0 application:(id)a1;
+ (id)analyticsApplications;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)a0 validateType:(unsigned long long)a1 error:(id *)a2 block:(id /* block */)a3;
+ (id)analyticsErrorData:(id)a0;
+ (BOOL)doWithAnalyticsForEventName:(id)a0 error:(id *)a1 block:(id /* block */)a2;
+ (unsigned long long)doKTResultWithAnalyticsForEventName:(id)a0 error:(id *)a1 block:(id /* block */)a2;

- (id)datePropertyForKey:(id)a0;
- (id)numberPropertyForKey:(id)a0;
- (void)setDateProperty:(id)a0 forKey:(id)a1;
- (void)logMetric:(id)a0 withName:(id)a1;
- (void)setMetricsAccountID:(id)a0;
- (id)dailyMetrics;
- (void)logSoftFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2;
- (void)setNumberProperty:(id)a0 forKey:(id)a1;
- (void)incrementIntegerPropertyForKey:(id)a0;
- (void)setFailureNowForPropertyKey:(id)a0;
- (void)setSuccessNowForPropertyKey:(id)a0;
- (void).cxx_destruct;
- (id)fuzzyTimeSinceDateKey:(id)a0;
- (void)logHardFailureForEventNamed:(id)a0 withAttributes:(id)a1;
- (void)updateCollectionConfigurationWithData:(id)a0;
- (void)logResultForEvent:(id)a0 hardFailure:(BOOL)a1 result:(id)a2 withAttributes:(id)a3;
- (void)removeMultiSamplerForName:(id)a0;
- (void)noteEventNamed:(id)a0;
- (id)failureKey:(id)a0;
- (BOOL)skipLogResult:(id)a0;
- (void)logSuccessForEventNamed:(id)a0;
- (void)addMultiSamplerForName:(id)a0 withTimeInterval:(double)a1 block:(id /* block */)a2;
- (id)fuzzyTimeSinceLastSuccess:(id)a0;

@end
