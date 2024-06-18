@class _PASLock, TRIExperimentDeployment;

@interface TRIExperimentTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeployment;

- (id)dimensions;
- (id)trialSystemTelemetry;
- (void)mergeTelemetry:(id)a0;
- (id)tags;
- (void)addDimension:(id)a0;
- (void)addMetric:(id)a0;
- (void).cxx_destruct;
- (id)initWithExperimentDeployment:(id)a0;
- (void)setIdentifyTelemetryAsV1Rollout:(BOOL)a0;
- (id)metrics;

@end
