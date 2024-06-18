@class NSString, HDProfile;

@interface CHCompanionWidgetSchedulingManager : NSObject <HDProfileReadyObserver, HDDataObserver, HDUserCharacteristicsProfileObserver> {
    HDProfile *_profile;
    long long _wheelchairUse;
    int _standalonePhoneFitnessModeChangeToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)_donateRelevance;
- (void)_startObservingUserCharacteristics;
- (void)_stopObservingStandalonePhoneFitnessMode;
- (void)profileDidBecomeReady:(id)a0;
- (void)_reloadWidgetTimelines;
- (void)_startObservingStandalonePhoneFitnessMode;
- (void)userCharacteristicsManager:(id)a0 didUpdateUserProfile:(id)a1;
- (void).cxx_destruct;
- (void)_stopObservingUserCharacteristics;
- (void)_startObservingWorkouts;
- (void)_stopObservingWorkouts;
- (void)dealloc;
- (long long)_currentWheelchairUse;

@end
