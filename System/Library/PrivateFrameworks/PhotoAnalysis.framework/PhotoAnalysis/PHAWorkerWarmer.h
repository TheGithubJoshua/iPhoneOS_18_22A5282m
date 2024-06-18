@class PHAJobConstraints, NSMutableSet, PHAWorker;

@interface PHAWorkerWarmer : NSObject

@property (class, readonly) unsigned long long stateCode;

@property (readonly, nonatomic) NSMutableSet *workers;
@property (retain, nonatomic) PHAWorker *lastActiveWorker;
@property (retain, nonatomic) PHAJobConstraints *lastConstraints;

- (id)init;
- (id)statusAsDictionary;
- (void)setActiveWorker:(id)a0 withJob:(id)a1;
- (void).cxx_destruct;
- (void)reportNoMoreJobsExpected;
- (void)recordConstraintChange:(id)a0;
- (BOOL)_cooldownWorkerIfWarmed:(id)a0;
- (void)_warmupWorkerIfCooled:(id)a0 withProgressBlock:(id /* block */)a1;

@end
