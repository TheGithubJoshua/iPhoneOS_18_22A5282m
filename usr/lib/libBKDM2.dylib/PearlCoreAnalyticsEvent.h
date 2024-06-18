@class NSString, NSDictionary, PBCodable, NSNumber;

@interface PearlCoreAnalyticsEvent : BiometricKitCoreAnalyticsEvent {
    PBCodable *_awdMetric;
    NSDictionary *_awdMetricDictionary;
    NSString *_awdMetricName;
    NSNumber *_awdMetricId;
    NSDictionary *_eventDictionary;
}

- (id)getAWDMetric;
- (id)getEventDictionary;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 awdMetric:(id)a1;
- (void)prepareEventDictionary;
- (BOOL)postAWDMetric;
- (void)logAnalyticsDictionary:(id)a0;
- (void)reset;
- (BOOL)postEvent;
- (id)initWithName:(id)a0;

@end
