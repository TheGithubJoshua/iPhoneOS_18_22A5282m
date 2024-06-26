@class NSString, NSMutableArray;

@interface SignpostAnimationSubInterval : NSObject <SignpostSupportTimeInterval>

@property (readonly, nonatomic) double timebaseRatio;
@property (readonly, nonatomic) NSMutableArray *parentAnimationIntervals;
@property (readonly, nonatomic) unsigned long long startMachContinuousTime;
@property (readonly, nonatomic) unsigned long long endMachContinuousTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)durationMachContinuousTime;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (float)durationSeconds;
- (id)initWithInterval:(id)a0;
- (double)durationMs;
- (unsigned long long)durationNanoseconds;
- (double)startMs;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (id)initWithStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1 timebaseRatio:(double)a2;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;

@end
