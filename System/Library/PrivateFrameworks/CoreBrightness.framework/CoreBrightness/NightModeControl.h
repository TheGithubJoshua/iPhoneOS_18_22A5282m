@class CBAnalyticsNightShiftTracker, NSMutableDictionary, NSDictionary, SunriseSunsetProvider, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NightModeControl : NSObject {
    NSMutableDictionary *_properties;
    SunriseSunsetProvider *_sunriseSunsetProvider;
    int _sunriseSunsetInfoQueryTimeout;
    NSDictionary *_sunriseSunsetInfo;
    NSMutableArray *_supportObjs;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_nextTransitionTimer;
    NSObject<OS_dispatch_source> *_transitionTimer;
    CBAnalyticsNightShiftTracker *_modeTracker;
    int _algoState;
    float _transitionLength;
    float _transitionLengthActual;
    float _transitionsTimesCoeff;
    float _transitionRate;
    float _minFactor;
    float _maxFactor;
    struct NMFactorState { double rampStartTime; float factor; float target; float start; float rampLength; } _factorState;
    struct __CFTimeZone { } *_currentTimeZone;
    double _sunsetAbsolute;
    double _sunsetPreviousAbsolute;
    double _sunriseAbsolute;
    double _sunrisePreviousAbsolute;
    double _offTransitionTimeAbsoluteUnrestricted;
    double _offTransitionTimeAbsoluteUnrestrictedPrev;
    BOOL _transitionTimesValid;
    BOOL _isDaylight;
    int _currentScheduledTransitionType;
    double _displayOffTimestamp;
    double _untilNexTransitionTimestamp;
    float _inactivityTimeout;
    BOOL _checkInactivity;
    BOOL _displayOff;
    int _logLevel;
    id /* block */ _callbackBlock;
    struct { BOOL active; BOOL enabled; BOOL sunSchedulePermitted; int mode; struct { struct { int hour; int minute; } fromTime; struct { int hour; int minute; } toTime; } schedule; unsigned long long disableFlags; BOOL available; } _status;
    struct { struct { int hour; int minute; } fromTime; struct { int hour; int minute; } toTime; } _backupSchedule;
    BOOL _statusUpdated;
    NSString *_currentSunriseKey;
    NSString *_currentSunsetKey;
    NSString *_previousSunriseKey;
    NSString *_previousSunsetKey;
    NSString *_nextSunriseKey;
    NSString *_nextSunsetKey;
    NSString *_isDaylightKey;
    int _notifyUserAboutScheduleCounter;
    struct __CFUserNotification { } *_enableNotification;
    BOOL _notificationInProgress;
    BOOL _revertToSunriseSunset;
}

- (id)copyStatusDictionaryFromPrefs;
- (void)displayAlertInteractive:(BOOL)a0;
- (void)setMode:(int)a0;
- (void)saveStatusToPrefs:(id)a0;
- (BOOL)updateTransitionTimesFromSunriseSunset:(double)a0;
- (void)timeZoneChanged;
- (void)setPreference:(id)a0 forKey:(id)a1 user:(id)a2;
- (void)scheduleNextTransition:(double)a0 withType:(int)a1;
- (void)initiateFullMaxTransition;
- (void)removeSupportObject:(id)a0;
- (void)updateTransitionTimes:(double)a0;
- (void)reevaluateCurrentStateWithFactorFadeOption:(float)a0;
- (void)retrieveSunriseSunsetTimesFromBackup:(double)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)updateLowPowerModeState:(id)a0;
- (BOOL)updateTransitionTimesFromSchedule:(double)a0;
- (void)updateSunriseSunsetInfo:(id)a0;
- (void)setNightModeFactor:(float)a0 withFadePeriod:(float)a1;
- (void)setAlgoState:(int)a0;
- (void)setSchedule:(id)a0;
- (id)getPropertyForKey:(id)a0;
- (void)cancelSchedule;
- (void)clockChanged;
- (void)enableBlueLightReduction:(BOOL)a0 withOption:(int)a1;
- (void)setSunPermitted:(BOOL)a0;
- (void)tearDownAllTimers;
- (void)addSupportObject:(id)a0;
- (BOOL)parseStatusDictionary:(id)a0 intoStruct:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; BOOL x6; } *)a1 shouldUpdatePrefs:(BOOL *)a2;
- (id)copyPreferenceForKey:(id)a0 user:(id)a1;
- (void)setNightShiftFactorDictionary:(id)a0;
- (void)reevaluateCurrentState;
- (id)copyTimeStringWithHour:(int)a0 minute:(int)a1 second:(int)a2;
- (void)cancelTransition;
- (id)copyDictionaryFromStatus:(struct { BOOL x0; BOOL x1; BOOL x2; int x3; struct { struct { int x0; int x1; } x0; struct { int x0; int x1; } x1; } x4; unsigned long long x5; BOOL x6; } *)a0;
- (id)copyLowPowerModeState;
- (void)initiateTransitionTo:(float)a0 andRampLength:(float)a1;
- (void)updateOptionTimestamp:(double)a0;
- (void)dealloc;
- (void)transitionTimerHandler;
- (id)initWithSupportObject:(id)a0 queue:(id)a1 callback:(id /* block */)a2;
- (void)initiateRestrictedMaxTransition;
- (void)initiateFullMinTransition;
- (void)setNightModeFactor:(float)a0;
- (void)updateStatusDictionaryWithValue:(id)a0 forKey:(id)a1;
- (void)updateSunriseSunsetBackup;

@end
