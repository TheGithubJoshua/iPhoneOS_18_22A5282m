@class NSString, HKObserverSet, HKTaskServerProxyProvider;

@interface HKMobilityWalkingSteadinessFeatureStatusManager : NSObject <HKMobilityWalkingSteadinessFeatureStatusManagerClient, _HKXPCExportable> {
    HKObserverSet *_observers;
    HKTaskServerProxyProvider *_proxyProvider;
    long long _onboardingState;
    long long _notificationState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (void)removeObserver:(id)a0;
- (void)setNotificationsEnabled:(BOOL)a0;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)client_didUpdateOnboardingStatus:(id)a0;
- (void)client_didUpdateNotificationStatus:(id)a0;
- (id)onboardingStatusWithError:(id *)a0;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)client_didUpdateFitnessTrackingEnabled:(BOOL)a0;
- (void)resetOnboarding;
- (id)exportedInterface;
- (BOOL)isFitnessTrackingEnabled;
- (id)notificationStatusWithError:(id *)a0;

@end
