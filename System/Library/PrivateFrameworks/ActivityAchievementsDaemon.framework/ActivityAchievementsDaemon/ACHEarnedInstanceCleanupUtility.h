@class ACHAwardsKeyValueClient, HKHealthStore, ACHEarnedInstanceStore, HDProfile;

@interface ACHEarnedInstanceCleanupUtility : NSObject

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) ACHAwardsKeyValueClient *keyValueClient;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) HDProfile *profile;

- (long long)_daemon_historicalEvaluationAdjustment;
- (id)_cleanupNewExerciseRecordAchievements;
- (id)_cleanupFirstWorkoutAchievements;
- (long long)_historicalEvaluationAdjustment;
- (id)_cleanupLifetimeMoveGoalAchievements;
- (void).cxx_destruct;
- (id)_cleanupLongestMoveStreakAchievements;
- (id)initWithHealthStore:(id)a0 keyValueClient:(id)a1 earnedInstanceStore:(id)a2;
- (long long)_client_historicalEvaluationAdjustment;
- (id)_cleanupBestWorkoutAchievements;
- (void)performCleanup;
- (id)initWithEarnedInstanceStore:(id)a0 profile:(id)a1;

@end
