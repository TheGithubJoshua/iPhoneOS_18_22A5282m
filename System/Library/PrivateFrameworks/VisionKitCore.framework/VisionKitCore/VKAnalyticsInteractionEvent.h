@interface VKAnalyticsInteractionEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (nonatomic) BOOL analysisButtonActive;
@property (nonatomic) long long source;
@property (nonatomic) unsigned long long activeInteractionTypes;
@property (nonatomic) long long textLength;
@property (nonatomic) long long ddCount;
@property (nonatomic) long long mrcCount;
@property (nonatomic) long long vsCount;

- (id)eventKey;
- (id)initWithEventType:(long long)a0 analysis:(id)a1 source:(long long)a2 interactionTypes:(unsigned long long)a3 buttonActive:(BOOL)a4 customIdentifier:(id)a5;
- (id)coreAnalyticsDictionary;
- (id)description;
- (long long)type;

@end
