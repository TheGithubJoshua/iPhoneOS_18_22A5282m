@interface BSDateTimeCache : NSObject {
    double _yesterday;
    double _today;
    double _tomorrow;
    double _2daysFromNow;
    double _6daysAgo;
    double _prevWeek;
    double _nextWeek;
    double _lastAttemptedResetTime;
    double _lastSuccessfulResetTime;
    BOOL _isResetting;
}

+ (id)sharedInstance;

- (double)nextWeek;
- (id)init;
- (BOOL)isWithinPrevWeek:(double)a0 includeToday:(BOOL)a1;
- (void)_resetAndConfigure;
- (BOOL)isToday:(double)a0;
- (id)description;
- (double)yesterday;
- (double)today;
- (double)tomorrow;
- (BOOL)isTomorrow:(double)a0;
- (void)dealloc;
- (BOOL)isWithinPrevWeek:(double)a0;
- (double)prevWeek;
- (BOOL)isYesterday:(double)a0;
- (BOOL)isWithinNextWeek:(double)a0;

@end
