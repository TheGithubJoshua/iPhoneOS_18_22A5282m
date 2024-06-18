@interface Heart.SummariesAtrialFibrillationDataFetcher : NSObject <HKSampleListDataFetcher> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ resultsHandler;
}

- (id)init;
- (void)stop;
- (void)start;
- (void).cxx_destruct;

@end
