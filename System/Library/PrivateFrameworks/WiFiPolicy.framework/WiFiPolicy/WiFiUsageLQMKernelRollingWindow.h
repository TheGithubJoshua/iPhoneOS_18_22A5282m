@interface WiFiUsageLQMKernelRollingWindow : NSObject

+ (BOOL)isOngoing;
+ (void)advanceReadingPointerOf:(unsigned long long)a0;
+ (void)initialize;
+ (unsigned long long)parseKernelBlobInto:(id)a0;
+ (void)addSample:(id)a0 To:(id)a1;
+ (id)kernelLQMRollingWindow:(id)a0 withReferenceWindow:(id)a1 andLqmFeatures:(id)a2;

@end
