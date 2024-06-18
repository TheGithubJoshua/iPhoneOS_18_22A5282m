@class NSString, NSNumber;

@interface HFAnalyticsResumeSetupExitOptionsEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *accessoryType;
@property (retain, nonatomic) NSNumber *resumeSetupOption;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
