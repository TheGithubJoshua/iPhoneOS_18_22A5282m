@class NSArray;

@interface PLAccountingDebugService : PLService

@property (retain, nonatomic) NSArray *testNames;

+ (void)load;
+ (void)printError:(id)a0;

- (void)blockingLogGasGaugeWithTotalPower:(double)a0 withStartDate:(id)a1 withEndDate:(id)a2;
- (void)testDistribution5;
- (id)init;
- (void)testCorrectionInMemory;
- (void)testReloadBefore1;
- (void)testQualification2;
- (void)testCurrentDistributionEventForward;
- (void)testDistribution3;
- (void)testQualification3;
- (void)testCorrection4;
- (void)testReloadAfter2;
- (BOOL)verifyLastQualificationEventWithQualificationID:(int)a0 withNodeName:(id)a1;
- (BOOL)verifyLastDistributionEventWithDistributionID:(int)a0 withNodeName:(id)a1 withWeight:(double)a2;
- (void)testAddRemoveDistributionEventForward;
- (void)testChunk;
- (void)testCorrection1;
- (void)testPerformance;
- (BOOL)verifyTotalEnergyWithNodeName:(id)a0 withTotalEnergy:(double)a1 withRootNodeID:(int)a2 withEpsilon:(double)a3;
- (BOOL)verifyAggregateRootNodeEnergyWithNodeName:(id)a0 withRootNodeID:(int)a1 withEnergy:(double)a2 withDate:(id)a3;
- (BOOL)verifyLastPowerEventWithRootNodeID:(int)a0 withPower:(double)a1;
- (void)testShortDistributionEventDuration;
- (void).cxx_destruct;
- (void)testPowerEventIntervalOverlap;
- (BOOL)verifyAggregateQualificationEnergyWithQualificationID:(int)a0 withRootNodeID:(int)a1 withNodeName:(id)a2 withQualificationEnergy:(double)a3 withDate:(id)a4;
- (void)testReloadBefore2;
- (void)testCorrection2;
- (void)testDistribution4;
- (void)blockingClearQueues;
- (void)testQualification1;
- (void)testCorrection3;
- (void)testReloadAfter1;
- (BOOL)verifyTotalCorrectionEnergyWithNodeName:(id)a0 withTotalCorrectionEnergy:(double)a1 withRootNodeID:(int)a2;
- (void)testShortQualificationEventDuration;
- (void)testDistribution2;
- (void)testDistribution1;

@end
