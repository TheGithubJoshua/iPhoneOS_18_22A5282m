@class NSNumber, NSString;

@interface HFAnalyticsSectionReorderingEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *numberOfSections;
@property (retain, nonatomic) NSString *reorderingAction;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
