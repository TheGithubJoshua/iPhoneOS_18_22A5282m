@class TRIRolloutDeployment, _PASLock;

@interface TRIRolloutTaskSupport : NSObject <TRIMetricsProviding> {
    _PASLock *_lock;
}

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;

- (id)dimensions;
- (id)trialSystemTelemetry;
- (void)mergeTelemetry:(id)a0;
- (id)tags;
- (id)initWithRolloutDeployment:(id)a0;
- (void)addDimension:(id)a0;
- (void)addMetric:(id)a0;
- (void).cxx_destruct;
- (id)metrics;

@end
