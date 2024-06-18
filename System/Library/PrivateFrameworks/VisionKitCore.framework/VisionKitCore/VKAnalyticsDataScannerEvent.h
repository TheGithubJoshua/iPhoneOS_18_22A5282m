@interface VKAnalyticsDataScannerEvent : VKAnalyticsEvent

@property (nonatomic) double feedDuration;
@property (nonatomic) BOOL didScanForText;
@property (nonatomic) BOOL didScanForBarcodes;
@property (readonly, nonatomic) BOOL isHealth;

- (id)eventKey;
- (id)coreAnalyticsDictionary;
- (id)description;
- (long long)type;
- (id)initWithFeedDuration:(double)a0 scannedForText:(BOOL)a1 scannedForBarcodes:(BOOL)a2 customIdentifier:(id)a3;

@end
