@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface STYPerformanceChecker : NSObject

@property (retain) NSDictionary *perfCheckerErrors;
@property (retain) NSObject<OS_dispatch_queue> *serialUtilityQueue;
@property BOOL underMemoryPressure;
@property BOOL underThermalPressure;

+ (id)sharedPerfChecker;

- (long long)triage:(id)a0;
- (void).cxx_destruct;
- (void)checkFramerateOfAnimationScenario:(id)a0 completionHandler:(id /* block */)a1;
- (void)checkPerformanceOfScenarioReport:(id)a0 completionHandler:(id /* block */)a1;
- (void)reportError:(long long)a0 report:(id)a1 completionHandler:(id /* block */)a2;
- (void)dealloc;
- (void)checkLatencyOfResponsivenessScenario:(id)a0 completionHandler:(id /* block */)a1;

@end
