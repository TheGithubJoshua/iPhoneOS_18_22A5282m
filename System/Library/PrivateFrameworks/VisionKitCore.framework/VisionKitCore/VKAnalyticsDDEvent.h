@interface VKAnalyticsDDEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (nonatomic) unsigned long long dataDetectorTypes;

- (id)eventKey;
- (id)coreAnalyticsDictionary;
- (id)description;
- (long long)type;
- (id)initWithElement:(id)a0 eventType:(long long)a1 customIdentifier:(id)a2;

@end
