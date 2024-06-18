@class NSString, HDOntologyUpdateCoordinator;

@interface HDOntologyCHRFeatureEvaluator : NSObject <HDHealthRecordsAccountExistenceObserver, HDOntologyFeatureEvaluator>

@property (class, readonly, nonatomic) double minimumTimeToLive;

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;


- (id)init;
- (void)accountExistenceNotifier:(id)a0 didChangeHealthRecordAccountExistence:(BOOL)a1;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (void).cxx_destruct;
- (void)registerRequiredObserversForProfile:(id)a0 queue:(id)a1;
- (long long)requiresFeatureShardForProfile:(id)a0;
- (BOOL)canRequireShardWithError:(id *)a0;

@end
