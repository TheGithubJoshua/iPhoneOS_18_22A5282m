@class NSDictionary, HDProfile, NSMapTable;
@protocol HDDataCollector;

@interface HDDataCollectorMultiplexer : NSObject {
    HDProfile *_profile;
    id<HDDataCollector> _collector;
    NSDictionary *_aggregatorsByType;
    NSMapTable *_recordsByAggregator;
}

- (id)aggregatorForType:(id)a0;
- (id)initForCollector:(id)a0 identifier:(id)a1 profile:(id)a2 types:(id)a3;
- (void)setLastSensorDatum:(id)a0 forAggregator:(id)a1;
- (id)identifierForAggregator:(id)a0;
- (id)lastDatumForType:(id)a0;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (void)registerForCollectionWithState:(id)a0;
- (id)mergedConfiguration;
- (void)setConfiguration:(id)a0 forAggregator:(id)a1;

@end
