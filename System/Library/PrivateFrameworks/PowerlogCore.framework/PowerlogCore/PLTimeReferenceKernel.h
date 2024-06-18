@class NSDate;

@interface PLTimeReferenceKernel : PLTimeReference

@property (retain) NSDate *lastSystemTimeRecalibrated;
@property (retain) NSDate *lastKernelTimeRecalibrated;
@property BOOL rebootOccurred;

- (double)resolution;
- (void)initializeOffsetWithEntries:(id)a0;
- (id)currentTime;
- (void).cxx_destruct;
- (void)setSystemReboot:(BOOL)a0;
- (unsigned long long)continuousTimeToAbsoluteNs:(unsigned long long)a0;
- (struct mach_timebase_info { unsigned int x0; unsigned int x1; } *)getTimebaseInfo;

@end
