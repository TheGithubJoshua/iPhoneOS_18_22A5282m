@interface TAFilterObservationAggregator : NSObject

+ (void)attachAISInfo:(id)a0 deviceRecord:(id)a1;
+ (id)aggregateObservationsThroughHistoryForSingleDetection:(id)a0 visitSnapshotBuffer:(id)a1 intervisitSnapshotBuffer:(id)a2 clock:(id)a3;
+ (id)aggregateObservationsThroughHistoryForDetectionResults:(id)a0 visitSnapshotBuffer:(id)a1 intervisitSnapshotBuffer:(id)a2 clock:(id)a3;
+ (id)location:(id)a0 withAdvertisementTimestamp:(id)a1;

@end
