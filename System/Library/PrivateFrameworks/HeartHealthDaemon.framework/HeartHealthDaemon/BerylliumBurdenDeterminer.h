@class HKAnalyticsEventSubmissionManager, ABAfibBurdenAnalyzer;

@interface BerylliumBurdenDeterminer : NSObject <HKHRAFibBurdenDeterminer> {
    ABAfibBurdenAnalyzer *_analyzer;
    HKAnalyticsEventSubmissionManager *_analyticsEventSubmissionManager;
}

- (id)initWithAnalyticsEventSubmissionManager:(id)a0;
- (void).cxx_destruct;
- (id)burdenForTachogramClassifications:(id)a0 calculationType:(long long)a1 calculationTypeContext:(id)a2 error:(id *)a3;

@end
