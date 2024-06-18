@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}

- (id)collectedTypes;
- (id)persistentIdentifier;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (Class)coreMotionDatumClass;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 collectedDistanceType:(id)a1;
- (id)queue_newDataSource;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;

@end
