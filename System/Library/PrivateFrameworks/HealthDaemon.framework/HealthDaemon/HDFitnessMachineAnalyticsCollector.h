@class HKPersistentTimer, HDGymKitWorkoutAnalyticEvent;

@interface HDFitnessMachineAnalyticsCollector : NSObject {
    HKPersistentTimer *_authorizationTimer;
}

@property (retain, nonatomic) HDGymKitWorkoutAnalyticEvent *gymKitWorkoutEvent;

- (void)setFitnessMachineType:(unsigned long long)a0 manufacturer:(id)a1;
- (id)init;
- (void)workoutFailedWithError:(id)a0;
- (void)workoutEndedSubmitMetricsWith:(id)a0;
- (void)userIsAuthorized;
- (void).cxx_destruct;
- (void)userBeganPairing;

@end
