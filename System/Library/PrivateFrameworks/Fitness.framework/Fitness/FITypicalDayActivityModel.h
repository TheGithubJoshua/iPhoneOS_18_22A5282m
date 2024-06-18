@class NSDate, NSString, FISleepDataProvider, NSDateInterval, NSMutableArray, NSObject, FISleepUserDay, FISimpleHistogram, HKActivitySummary;
@protocol FITypicalDayActivityModelDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface FITypicalDayActivityModel : NSObject <FISleepDataProviderDelegate> {
    NSDateInterval *_interval;
    HKActivitySummary *_queue_currentActivitySummary;
    FISimpleHistogram *_queue_moveHistogram;
    FISimpleHistogram *_queue_exerciseHistogram;
    NSMutableArray *_queue_bucketDates;
    BOOL _activitySummaryLoaded;
    NSObject<OS_dispatch_group> *_activitySummaryBarrierGroup;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_projectedOffWristDateToday;
    long long _totalActiveDays;
    FISleepDataProvider *_sleepDataProvider;
    FISleepUserDay *_sleepUserDay;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sleepUserDayLock;
}

@property (weak, nonatomic) id<FITypicalDayActivityModelDelegate> delegate;
@property (readonly, nonatomic) long long totalActiveDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_emptySimpleHistogram;

- (id)currentCalendar;
- (void)_setSleepUserDay:(id)a0;
- (id)_goodMorningAlertDismissedDateForToday;
- (double)currentStandGoalPercentage;
- (id)_sleepDataProvider;
- (double)valueOfTypicalDayBriskMinutesEarnedByNow;
- (BOOL)willCompleteMoveGoalWithBufferPercentage:(double)a0;
- (double)currentMoveGoalPercentage;
- (BOOL)_willCompleteGoalWithType:(long long)a0 bufferPercentage:(double)a1;
- (double)_queue_currentValueForHistogram:(id)a0;
- (void)rebuildWithInterval:(id)a0;
- (double)valueOfTypicalDayMoveEarnedByNow;
- (id)projectedOffWrist;
- (BOOL)shouldSuggestWalkWithActivitySettingsController:(id)a0;
- (double)briskWalkTimeToCompleteMoveGoalWithAcitivitySettingsController:(id)a0;
- (id)initForDateInterval:(id)a0 delegate:(id)a1;
- (void)_queue_populateHistogramsAndOffWristDateForToday;
- (BOOL)_queue_enumerateActivitySummariesOrderedByCacheIndexWithCalendar:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (double)_queue_briskWalkTimeToCompleteMoveGoalWithDateOfBirth:(id)a0 biologicalSex:(long long)a1 height:(id)a2 weight:(id)a3 wheelchairUse:(long long)a4 experienceType:(unsigned long long)a5;
- (void)sleepDataProviderUserDayDidUpdate;
- (double)projectedDayDuration;
- (void)sleepDataProviderLastGoodMorningDismissedDateDidChange;
- (void)_setProjectedOffWristDateToday:(id)a0;
- (id)initForDateInterval:(id)a0 delegate:(id)a1 sleepDataProvider:(id)a2;
- (void)_waitUntilActivitySummaryLoaded;
- (id)userWakeUpDateForToday;
- (BOOL)projectedToBeatMoveRecordByEndOfDay;
- (id)currentDate;
- (BOOL)willCompleteExerciseGoalWithBufferPercentage:(double)a0;
- (void).cxx_destruct;
- (long long)_bucketIndexForDate:(id)a0 startOfDay:(id)a1 bucketDates:(id)a2;
- (void)_queue_updateHistogram:(id)a0 goalType:(long long)a1 activitySummary:(id)a2;
- (id)sleepUserDay;
- (id)_bucketDateForIndex:(unsigned long long)a0 startOfDay:(id)a1;
- (void)_updateSleepUserDay;
- (id)userEndOfDay;
- (double)percentageOfTypicalDayBriskMinutesEarnedComparedToNow;
- (double)_percentageOfTypicalDayComparedToNowForGoal:(long long)a0;
- (BOOL)willCompleteStandGoalOrItIsTooLateWithBufferPercentage:(double)a0;
- (BOOL)willCompletingMoveRingEarnStreakAchievement;
- (id)userStartOfDay;
- (double)currentExerciseGoalPercentage;
- (void)handleUpdatedCurrentActivitySummary:(id)a0;
- (id)startOfToday;
- (double)percentageOfTypicalDayMoveComparedToNow;
- (void)_queue_updateProjectedOffWristDateHistogram:(id)a0 activitySummary:(id)a1 activeDays:(long long *)a2;
- (id)_queue_calculateProjectedOffWristDateFromHistogram:(id)a0 activeDays:(long long)a1;
- (void)sleepDataProviderLastAlarmWakeUpDateDidChange;
- (BOOL)isSleepAlarmEnabledForToday;
- (id)endOfToday;

@end
