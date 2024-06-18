@interface MTUICollectionCellAnalogClockView : MTUIAnalogClockView

+ (double)overSecondHandDotSize;
+ (double)hourHandLength;
+ (double)minuteHandLength;
+ (double)overHourHandDotSize;
+ (BOOL)shouldCacheImageOnDiskForType:(int)a0 dayTime:(BOOL)a1;
+ (struct CGPoint { double x0; double x1; })handRotationalCenterForHand:(long long)a0;
+ (double)secondHandMainLength;
+ (double)faceRadius;
+ (double)secondHandOverhangLength;
+ (id)makeClockFaceForDaytime:(BOOL)a0;
+ (long long)style;
+ (double)minuteHandWidth;
+ (double)secondHandWidth;
+ (double)hourHandWidth;

- (double)updateInterval;
- (double)coarseUpdateInterval;

@end
