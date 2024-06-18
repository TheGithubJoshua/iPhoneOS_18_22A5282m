@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;

- (id)initForQuantityType:(id)a0 dataCollectionManager:(id)a1;
- (id)objectType;
- (void).cxx_destruct;
- (Class)sensorDatumClass;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;

@end
