@class NSNumber, NSString;

@interface HFAnalyticsAppForegroundDurationEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *foregroundDuration;
@property (nonatomic) BOOL userHasAccessories;
@property (retain, nonatomic) NSString *processName;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
