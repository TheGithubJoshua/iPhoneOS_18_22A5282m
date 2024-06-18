@class NSTimeZone, NSCalendar, NSLocale, NSDate;

@interface BaseDateProvider : NSObject

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) long long updateType;
@property (readonly, nonatomic) unsigned long long updateWallClockAlignment;
@property (readonly, nonatomic) NSDate *timerEndDate;

- (void)_endSession;
- (id)updateInterval;
- (id)formattedString;
- (void).cxx_destruct;
- (id)_sessionTextForIndex:(long long)a0 context:(id)a1;
- (void)_startSessionWithDate:(id)a0;
- (id)_timeFormatByRemovingDesignatorOfTimeFormat:(id)a0;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 andRemovingDesignator:(BOOL)a1 designatorExists:(BOOL *)a2;
- (id)_timeFormatByRemovingWhitespaceAroundDesignatorOfTimeFormat:(id)a0 designatorExists:(BOOL *)a1;
- (long long)_updateFrequency;
- (id)formattedStringInContext:(id)a0;
- (id)initWithCalendar:(id)a0 locale:(id)a1 timeZone:(id)a2;

@end
