@class CMPedometerProxy;

@interface CMPedometer : NSObject

@property (readonly, nonatomic) CMPedometerProxy *pedometerProxy;

+ (BOOL)isPaceAvailable;
+ (long long)authorizationStatus;
+ (BOOL)isDistanceAvailable;
+ (BOOL)isAllDayElevationAvailable;
+ (BOOL)isFloorCountingAvailable;
+ (BOOL)isStepCountingAvailable;
+ (BOOL)isCadenceAvailable;
+ (BOOL)isPedometerEventTrackingAvailable;

- (id)init;
- (void)_startPedometerUpdatesSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;
- (void)dealloc;
- (id)_pedometerDataWithRecordID:(long long)a0;
- (void)_queryPedometerDataSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;
- (void)queryPedometerDataFromDate:(id)a0 toDate:(id)a1 withHandler:(id /* block */)a2;
- (void)queryPedometerDataSinceDataRecord:(id)a0 withHandler:(id /* block */)a1;
- (void)queryPedometerDataSinceRecord:(long long)a0 withHandler:(id /* block */)a1;
- (void)queryRawSpeedToKValueBinsWithHandler:(id /* block */)a0;
- (void)queryRemoteRawSpeedToKValueBinsWithHandler:(id /* block */)a0;
- (void)queryRemoteStepCadenceToStrideLengthBinsWithHandler:(id /* block */)a0;
- (void)queryStepCadenceToStrideLengthBinsWithHandler:(id /* block */)a0;
- (BOOL)sendStrideCalibrationHistoryToFile:(id)a0;
- (void)startPedometerEventUpdatesWithHandler:(id /* block */)a0;
- (void)startPedometerUpdatesFromDate:(id)a0 withHandler:(id /* block */)a1;
- (void)stopPedometerEventUpdates;
- (void)stopPedometerUpdates;
- (id)strideCalibrationDump;

@end
