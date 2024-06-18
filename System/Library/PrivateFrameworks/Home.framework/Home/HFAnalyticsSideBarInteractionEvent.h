@class NSString;

@interface HFAnalyticsSideBarInteractionEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *itemClassName;
@property (retain, nonatomic) NSString *deviceOrientationStr;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
