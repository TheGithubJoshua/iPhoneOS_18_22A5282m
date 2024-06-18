@interface HDHeartRateDataAggregator : HDDataAggregator

- (void)setConfiguration:(id)a0;
- (id)objectType;
- (id)configurationForCollector:(id)a0;
- (void)dealloc;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2;
- (void)workoutManagerStateChanged:(id)a0;
- (id)initWithDataCollectionManager:(id)a0;

@end
