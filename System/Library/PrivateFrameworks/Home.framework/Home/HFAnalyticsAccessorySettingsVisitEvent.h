@class HFItem;

@interface HFAnalyticsAccessorySettingsVisitEvent : HFAnalyticsEvent

@property (retain, nonatomic) HFItem *sourceItem;
@property (nonatomic) BOOL isHomePod;
@property (nonatomic) BOOL isMediaAccessory;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
