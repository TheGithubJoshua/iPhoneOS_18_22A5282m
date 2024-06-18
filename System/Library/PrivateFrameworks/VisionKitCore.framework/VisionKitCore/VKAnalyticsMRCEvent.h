@class NSString;

@interface VKAnalyticsMRCEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSString *barcodeSymbology;
@property (nonatomic) long long _dataType;
@property (readonly, nonatomic) long long dataType;

- (id)eventKey;
- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)description;
- (long long)type;
- (id)initWithElement:(id)a0 eventType:(long long)a1 customIdentifier:(id)a2;

@end
