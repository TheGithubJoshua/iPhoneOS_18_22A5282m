@class NSString;
@protocol HDMedicationCountProvider, HDDrugInteractionFactorStateProvider;

@interface HDOntologyInteractionsFeatureEvaluator : HDOntologyMedicationFeatureEvaluator <HDDrugInteractionFactorStateObserver, HDMedicationCountObserver, HDOntologyFeatureEvaluator> {
    id<HDMedicationCountProvider> _medicationCountProvider;
    id<HDDrugInteractionFactorStateProvider> _interactionFactorStateProvider;
}

@property (class, readonly, nonatomic) double minimumTimeToLive;

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithDaemon:(id)a0;
- (id)init;
- (id)initWithDaemon:(id)a0 medicationCountProvider:(id)a1 interactionFactorStateProvider:(id)a2;
- (void)drugInteractionFactorStateProvider:(id)a0 didObserveChangeForProfile:(id)a1 hasDrugInteractionFactor:(long long)a2;
- (void).cxx_destruct;
- (void)registerRequiredObserversForProfile:(id)a0 queue:(id)a1;
- (void)medicationCountProvider:(id)a0 didObserveChangeForProfile:(id)a1 ontologyBackedMedicationCount:(long long)a2;
- (long long)requiresFeatureShardForProfile:(id)a0;

@end
