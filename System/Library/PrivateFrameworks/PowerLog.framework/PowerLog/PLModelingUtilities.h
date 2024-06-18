@interface PLModelingUtilities : NSObject

+ (BOOL)isWatch;
+ (BOOL)isAppleTV;
+ (BOOL)isiPad;
+ (BOOL)isiPhone;
+ (BOOL)isHomePod;
+ (BOOL)internalBuild;
+ (BOOL)isMac;
+ (BOOL)isARMMac;
+ (BOOL)isTVOS;
+ (BOOL)isiPod;
+ (BOOL)hasAOD;
+ (BOOL)carrierBuild;
+ (BOOL)alsCurveHigherThanDefault;
+ (double)defaultBatteryEnergyCapacity;
+ (double)duetDiscretionaryBudget;
+ (double)getDefaultL0bThresholdForDeviceType;
+ (BOOL)isHeySiriAlwaysOn;
+ (BOOL)isLowPowerModeSupported;
+ (BOOL)isNarrowScreen;
+ (BOOL)isPercentageSupported;
+ (double)networkingEnergyWithBytes:(int)a0 withDuration:(double)a1;
+ (BOOL)shouldShowBatteryGraphs;
+ (id)valueForMobileGestaltCapability:(id)a0;

@end
