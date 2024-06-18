@interface _ANEDeviceInfo : NSObject

+ (BOOL)isInternalBuild;
+ (id)productName;
+ (id)buildVersion;
+ (BOOL)precompiledModelChecksDisabled;
+ (id)aneSubTypeVariant;
+ (long long)aneBoardType;
+ (id)bootArgs;
+ (BOOL)hasANE;
+ (BOOL)isExcessivePowerDrainWhenIdle;
+ (id)aneSubType;
+ (id)aneSubTypeProductVariant;

@end
