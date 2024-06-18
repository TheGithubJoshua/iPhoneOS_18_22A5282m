@interface VTUtilities : NSObject

+ (unsigned long long)horsemanDeviceType;
+ (double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)a0;
+ (BOOL)isInternalInstall;
+ (id)sanitizeEventInfoForLogging:(id)a0;
+ (BOOL)isNonUI;
+ (id)deviceProductVersion;
+ (BOOL)supportExternalPhraseSpotter;
+ (unsigned long long)deviceCategoryForDeviceProductType:(id)a0;
+ (double)systemUpTime;
+ (BOOL)supportPremiumAssets;
+ (id)getAssetHashFromConfigPath:(id)a0;
+ (BOOL)supportTTS;
+ (id)deviceProductType;
+ (BOOL)isIOS;
+ (id)deviceSoftwareVersion;
+ (BOOL)supportBargeIn;
+ (double)_round:(double)a0 withPlaces:(int)a1;
+ (void)forceReload;
+ (BOOL)isTorpedo;
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)a0;
+ (BOOL)VTIsHorseman;
+ (BOOL)isNano;
+ (BOOL)isAlwaysOn;
+ (BOOL)supportRemoteDarwinVoiceTrigger;

@end
