@class NSString;

@interface SFActivityBitmaps : NSObject {
    char _bitmapsBuffer[64];
}

@property (retain, nonatomic) NSString *appName;
@property unsigned long long startTime;
@property unsigned long long wordOffset;
@property unsigned long long numOfWords;

+ (void)adjustStartTime:(unsigned long long *)a0 endTime:(unsigned long long *)a1 currMachAbsTime:(unsigned long long)a2;
+ (unsigned long long)alignToBitmapTimeline:(unsigned long long)a0;

- (void)setAlignedBitmap:(unsigned long long)a0 withStartTime:(unsigned long long)a1;
- (void)setActivityWithStartTime:(unsigned long long)a0 part1:(unsigned long long)a1 part2:(unsigned long long)a2;
- (id)init;
- (void)clearAndSetNewActivityWithStartTime:(unsigned long long)a0 part1:(unsigned long long)a1 part:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)writeWord:(unsigned long long)a0 atOffset:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)adjustStartTime:(unsigned long long)a0;
- (unsigned long long)getWordAtOffset:(unsigned long long)a0;
- (unsigned long long)getHammingWeight;
- (unsigned long long)getEndTime;
- (id)getWrappedBitmapsFromTime:(unsigned long long)a0 toTime:(unsigned long long)a1;
- (void)resetStartTimeToEarlierTime:(unsigned long long)a0;
- (void)resetAllActivities;
- (unsigned long long)getLongestContiguousHammingWeight;
- (void)freeUpBufferSpace;
- (unsigned long long)getAlignedBitmapStartingAtTime:(unsigned long long)a0;
- (void)addActivityWithFlowId:(unsigned long long)a0 startTime:(unsigned long long)a1 part1:(unsigned long long)a2 part2:(unsigned long long)a3;

@end
