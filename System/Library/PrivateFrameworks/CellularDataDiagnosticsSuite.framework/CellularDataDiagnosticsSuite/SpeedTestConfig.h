@class NPTPerformanceTest;

@interface SpeedTestConfig : NSObject {
    BOOL inProgress;
    NPTPerformanceTest *performanceTest;
}

- (void)abort;
- (id)init;
- (BOOL)inProgress;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startDownloadTest:(id /* block */)a0;

@end
