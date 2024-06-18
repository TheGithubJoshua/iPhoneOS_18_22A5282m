@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experiment;

- (id)dimensions;
- (id)trialSystemTelemetry;
- (void)mergeTelemetry:(id)a0;
- (id)tags;
- (unsigned long long)hash;
- (void)addDimension:(id)a0;
- (void)addMetric:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithExperiment:(id)a0;
- (id)metrics;
- (id)containerForFirstNamespaceInExperimentWithContext:(id)a0;
- (void)logAsRollout:(BOOL)a0;
- (id)nextTasksForRunStatus:(int)a0;

@end
