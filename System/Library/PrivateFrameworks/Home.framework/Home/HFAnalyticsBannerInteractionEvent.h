@class NSString, NSNumber;

@interface HFAnalyticsBannerInteractionEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *itemClassName;
@property (retain, nonatomic) NSNumber *hiddenBannerCount;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
