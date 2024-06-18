@interface ShotflowNetworkANFDv1 : ShotflowNetwork

+ (id)modelName;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (const void *)importantClasses;
+ (unsigned long long)numberMaxoutLayers;
+ (unsigned long long)mumberPosClasses;
+ (const void *)cellStartsX;
+ (BOOL)poseSquare;
+ (const void *)cellStartsY;
+ (const void *)ratios;
+ (struct CGSize { double x0; double x1; })inputImageSize;

- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;
- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)initializeBuffers;

@end
