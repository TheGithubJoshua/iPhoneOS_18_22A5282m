@interface CUIKUserActivityTomorrow : CUIKUserActivityCalendarDate

- (id)initWithDictionary:(id)a0;
- (id)initWithDate:(id)a0 view:(unsigned long long)a1 calendar:(id)a2;
- (void)updateActivity:(id)a0;
- (BOOL)isTomorrow;
- (id)dictionary;

@end