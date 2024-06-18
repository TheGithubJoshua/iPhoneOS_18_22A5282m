@class NSDictionary;

@interface WiFiUsageLQMWindowAnalysisNetworkQuality : WiFiUsageLQMWindowAnalysis

@property (nonatomic) unsigned long long networkQualityResponsivenessScore;
@property (retain, nonatomic) NSDictionary *networkQualityEventFields;

- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 AndDictionary:(id)a1 andActiveCall:(BOOL)a2 andTimestamp:(id)a3 onQueue:(id)a4;
- (void).cxx_destruct;

@end
