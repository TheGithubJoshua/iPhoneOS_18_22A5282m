@class NSString, FISleepUserDay, HKSPSleepStore, NSDate, NSUserDefaults;
@protocol FISleepDataProviderDelegate;

@interface FISleepDataProvider : NSObject <HKSPSleepStoreObserver> {
    HKSPSleepStore *_sleepStore;
    id<FISleepDataProviderDelegate> _delegate;
    unsigned long long _currentSleepScheduleState;
    NSUserDefaults *_userDefaults;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) FISleepUserDay *sleepUserDay;
@property (copy, nonatomic) NSDate *lastGoodMorningDismissedDate;
@property (nonatomic) BOOL isGoodMorningAlertNotificationEnabled;
@property (copy, nonatomic) NSDate *lastAlarmWakeUpDate;
@property (nonatomic) BOOL isUserAwake;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setSleepUserDay:(id)a0;
- (void)sleepStore:(id)a0 sleepScheduleStateDidChange:(unsigned long long)a1;
- (void)_clearCurrentSleepScheduleState;
- (void)_updateSleepUserDayFromWakeUp:(id)a0 currentDate:(id)a1;
- (void)_setSleepUserDayWithStartOfDay:(id)a0 endOfDay:(id)a1;
- (id)initWithSleepStore:(id)a0 delegate:(id)a1;
- (void)activate;
- (void)_clearSleepUserDay;
- (void)sleepStore:(id)a0 sleepEventRecordDidChange:(id)a1;
- (BOOL)_updateLastGoodMorningDismissedDateIfNeeded:(id)a0;
- (void)_initialLoadSleepUserDay;
- (void).cxx_destruct;
- (void)_setEmptySleepUserDay:(id)a0;
- (BOOL)_isDate:(id)a0 within24HoursOfDate:(id)a1;
- (void)_setUserDefaults:(id)a0;
- (void)sleepStore:(id)a0 sleepScheduleDidChange:(id)a1;
- (void)sleepStore:(id)a0 sleepModeOnDidChange:(BOOL)a1;
- (void)_updateSleepUserDay;
- (void)_fetchGoodMorningAlertNotificationEnabled;
- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (id)_fetchCachedSleepUserDay;
- (void)dealloc;
- (void)sleepStore:(id)a0 sleepScheduleModelDidChange:(id)a1;
- (void)_cacheSleepUserDay:(id)a0;
- (void)_fetchLastAlarmWakeUpDate;
- (void)_fetchLastGoodMorningDismissedDate;
- (void)_updateCurrentSleepScheduleState;
- (void)_updateSleepUserDayFromWindDownOrBedtime:(id)a0 currentDate:(id)a1;
- (BOOL)_updateLastAlarmWakeUpDateIfNeeded:(id)a0;
- (BOOL)_updateGoodMorningAlertNotificationEnabledIfNeeded:(BOOL)a0;

@end
