@interface VKAnalyticsSubjectEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (nonatomic) long long interactionType;
@property (nonatomic) BOOL subjectFound;
@property (nonatomic) double processingDuration;

- (id)eventKey;
- (id)coreAnalyticsDictionary;
- (id)description;
- (long long)type;
- (id)initWithEventType:(long long)a0 interactionType:(long long)a1 subjectFound:(BOOL)a2 processingDuration:(double)a3 customIdentifier:(id)a4;

@end
