@interface _DPDeviceInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)osVersion;
+ (BOOL)isDisabledByTaskingForDedisco;
+ (BOOL)isDisabledByTaskingForPrio;
+ (BOOL)isDataCollectionEnabled;
+ (BOOL)isRunningUnitTests;
+ (BOOL)isDisabledByTaskingForCrashCopier;
+ (BOOL)isDisabledByTaskingForTransport:(unsigned long long)a0;

@end
