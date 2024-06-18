@class NSString, HDProfile, HDKeyValueDomain, NSObject;
@protocol OS_dispatch_queue, HKFeatureStatusProviding;

@interface HDHRAFibBurdenRescindedNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HKFeatureStatusProvidingObserver> {
    HDProfile *_profile;
    id<HKFeatureStatusProviding> _featureStatusProvider;
    HDKeyValueDomain *_localKeyValueDomain;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ unitTesting_postNotificationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)daemonReady:(id)a0;
- (id)_rescindedAlertTitleKeyForUnsatisfiedRequirementIdentifiers:(id)a0;
- (void)_queue_presentRescindedOrReEnabledAlertIfNeededWithFeatureStatus:(id)a0;
- (void)_queue_pullFeatureStatusAndPresentAlertIfNeeded;
- (id)initWithProfile:(id)a0 featureStatusProvider:(id)a1 keyValueDomain:(id)a2;
- (BOOL)_isFeatureRescindedWithRequirementsEvaluation:(id)a0;
- (id)initWithProfile:(id)a0 featureStatusProvider:(id)a1;
- (id)_rescindedAlertBodyKeyForUnsatisfiedRequirementIdentifiers:(id)a0;
- (void)_sendNotificationRequest:(id)a0;
- (void)featureStatusProviding:(id)a0 didUpdateFeatureStatus:(id)a1;
- (BOOL)_isFeatureUnavailableForNonRescindedReasonsWithRequirementsEvaluation:(id)a0;
- (void).cxx_destruct;
- (id)_rescindedRequirementIdentifiers;
- (void)dealloc;
- (void)_showRescindedNotificationWithTitleKey:(id)a0 bodyKey:(id)a1;

@end
