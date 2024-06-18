@interface ICSTrigger : ICSProperty

- (void)setDuration:(id)a0;
- (void)setDate:(id)a0;
- (id)initWithDate:(id)a0;
- (BOOL)isDurationBased;
- (id)initWithDuration:(id)a0 travelRelativeDuration:(id)a1;
- (id)travelRelativeDuration;
- (id)initWithDuration:(id)a0;
- (void)fixAlarmTrigger;

@end
