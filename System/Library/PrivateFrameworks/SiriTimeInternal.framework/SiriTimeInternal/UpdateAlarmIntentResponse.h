@class SiriAlarm;

@interface UpdateAlarmIntentResponse : INIntentResponse

@property (nonatomic, retain) SiriAlarm *updatedAlarm;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
