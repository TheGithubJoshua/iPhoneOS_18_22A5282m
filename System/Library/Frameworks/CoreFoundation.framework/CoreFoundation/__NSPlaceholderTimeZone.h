@interface __NSPlaceholderTimeZone : NSTimeZone

- (id)data;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)init;
- (id)abbreviationForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (oneway void)release;
- (id)name;
- (id)__initWithName:(id)a0 cache:(BOOL)a1;
- (id)initWithName:(id)a0 data:(id)a1;
- (unsigned long long)retainCount;
- (id)__initWithName:(id)a0 data:(id)a1 secondsFromGMT:(int)a2 cache:(BOOL)a3;
- (id)retain;
- (void)dealloc;
- (id)initWithName:(id)a0;

@end
