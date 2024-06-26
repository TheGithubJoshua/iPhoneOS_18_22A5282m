@class PLDiscretionaryIntervalManager, NSDictionary, NSMutableDictionary, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PLDiscretionaryEnergyMonitor : NSObject

@property (retain) PLDiscretionaryIntervalManager *intervalManager;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) double lastReportedTotalEnergy;
@property (nonatomic) double lastReportedCPUEnergy;
@property (nonatomic) double lastReportedNetworkEnergy;
@property (retain, nonatomic) NSDictionary *lastPowerlogResponse;
@property (retain, nonatomic) NSMutableArray *quickEnergySnapshots;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *powerlogQueryTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *quickEnergyAccumulatorTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property double accumulatedCPUEnergy;
@property double accumulatedNetworkEnergy;
@property double powerlogEnergyDiff;
@property (retain) NSDate *powerlogTimestampPrevious;
@property (retain) NSDate *powerlogTimestampLast;
@property double powerlogEnergyPrevious;
@property double powerlogEnergyLast;
@property BOOL isCharging;
@property BOOL debugMode;
@property (retain) NSMutableDictionary *mockData;

+ (double)getDiscretionaryEnergyBudget;

- (void)generateEnergyReport;
- (void)setStateForNotification:(id)a0 withState:(id)a1;
- (void)logPowerlogResponse:(id)a0;
- (void)logEnergyReport:(id)a0;
- (void)reportStopEvent:(id)a0 withInfo:(id)a1;
- (id)createQuickEnergyAccumulatorTimer;
- (void)testHighVolumeStartStopReporting:(id)a0 withInfo:(id)a1 withNumIterations:(double)a2;
- (void)queryPowerlogForDiscretionaryEnergy;
- (double)getPowerlogEnergySum:(id)a0;
- (id)createPowerlogQueryTimer;
- (void).cxx_destruct;
- (id)initWithDebugMode:(BOOL)a0 andMockData:(id)a1 andCompletionBlock:(id /* block */)a2;
- (void)setupNotificationListeners;
- (void)reportStartEvent:(id)a0 withInfo:(id)a1;
- (void)updateMockData:(id)a0;
- (void)incrementCPUEnergy:(double)a0;
- (void)incrementNetworkEnergy:(double)a0;
- (id)initWithCompletionBlock:(id /* block */)a0;
- (void)accumulateQuickEnergy;
- (void)reportChargingStatus:(BOOL)a0;
- (void)logQuickEnergySnapshots;
- (void)runCompletionBlockWithEnergyResponse:(id)a0;

@end
