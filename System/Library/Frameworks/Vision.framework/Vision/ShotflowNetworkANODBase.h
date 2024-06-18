@interface ShotflowNetworkANODBase : ShotflowNetwork

+ (unsigned long long)mumberBinsNegativeMaxout;
+ (unsigned long long)numberMaxoutLayers;
+ (const void *)cellStartsX;
+ (BOOL)poseSquare;
+ (const void *)cellStartsY;
+ (const void *)ratios;
+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (float)nonSquareRollDefault;
+ (float)nonSquareYawDefault;

- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;
- (void)initializeBuffers;

@end
