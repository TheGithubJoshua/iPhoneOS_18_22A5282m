@class SCLScheduleIntervalFormatter, NSListFormatter, NSLocale;

@interface SCLTimeIntervalsFormatter : NSFormatter

@property (readonly, nonatomic) SCLScheduleIntervalFormatter *intervalFormatter;
@property (readonly, nonatomic) NSListFormatter *listFormatter;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL prefersHoursOnly;
@property (nonatomic) unsigned long long intervalFormattingStyle;

- (id)init;
- (id)locale;
- (void)setLocale:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (id)stringFromTimeIntervals:(id)a0;

@end
