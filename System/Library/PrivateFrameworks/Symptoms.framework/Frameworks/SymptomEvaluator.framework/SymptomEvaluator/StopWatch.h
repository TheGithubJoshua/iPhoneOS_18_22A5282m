@class NSDate;

@interface StopWatch : NSObject {
    NSDate *start;
    double cumul;
}

+ (BOOL)nearlyEqualRun:(double)a0 toRun:(double)a1 fudgeFactor:(double)a2;

- (BOOL)isRunning;
- (double)total;
- (double)stop;
- (double)currentRun;
- (void)start;
- (void).cxx_destruct;
- (BOOL)wasRunningBefore:(id)a0;

@end
