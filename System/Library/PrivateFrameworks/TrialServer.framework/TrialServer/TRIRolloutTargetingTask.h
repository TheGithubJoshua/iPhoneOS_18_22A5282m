@class NSString, NSArray, TRIRolloutDeployment, NSDate, TRIRolloutTaskSupport;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIRolloutTargetingTask : TRIBaseTask <TRITask, TRIMetricsProviding> {
    TRIRolloutTaskSupport *_support;
    BOOL _includeDependencies;
    id<TRITaskAttributing> _taskAttribution;
    unsigned long long _triggerEvent;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;
@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseFromData:(id)a0;
+ (id)taskWithRolloutDeployment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2 triggerEvent:(unsigned long long)a3;

- (id)initWithCoder:(id)a0;
- (id)dimensions;
- (id)_runTaskUsingContext:(id)a0 withTaskQueue:(id)a1 rolloutTargeter:(id)a2 error:(id *)a3;
- (id)trialSystemTelemetry;
- (id)serialize;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (id)_systemCovariatesWithPaths:(id)a0;
- (id)_asPersistedTask;
- (id)runUsingContext:(id)a0 withTaskQueue:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRolloutDeployment:(id)a0 includeDependencies:(BOOL)a1 taskAttribution:(id)a2 triggerEvent:(unsigned long long)a3;
- (id)_categoricalValueForTriggerEvent:(unsigned long long)a0;
- (id)_taskResultWithStatus:(int)a0 reportResults:(BOOL)a1 nextTasks:(id)a2;
- (id)metrics;
- (void)runDequeueHandlerUsingContext:(id)a0;

@end
