@interface GKSConnectivitySettings : NSObject

+ (int)getDecryptionMKMRecoveryInterval;
+ (double)getAdjustmentFactorC;
+ (id)getAllSettings;
+ (BOOL)supportsHEVCEncoding;
+ (unsigned char)getAbTestingState;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)a0;
+ (id)getTestGroupPermutations:(unsigned char)a0;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (void)setClientOptions:(id)a0;
+ (double)getLongTermValueWeightA;
+ (BOOL)supportsRedAudio;
+ (double)getShortTermValueWeightA;
+ (double)getShortTermValueWeightB;
+ (int)getRateControllerType;
+ (int)getShortTermHistoryLength;
+ (double)getLongTermValueWeightB;
+ (BOOL)supportiRATRecommendation;
+ (void)setAddress:(id)a0 forService:(id)a1;
+ (id)getVCRCSeverBagConfigWithKey:(id)a0;
+ (double)getAdjustmentFactorA;
+ (BOOL)getFeatureFlagForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 featureFlagDomain:(char *)a2 featureFlagName:(char *)a3;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getIPPortForService:(id)a0;
+ (id)getClientOption:(id)a0;
+ (double)getNoRemoteDuplicationThresholdFast;
+ (int)getAdaptiveLearningState;
+ (double)getAdjustmentFactorB;
+ (int)getNewSessionJoiningInterval;
+ (id)getAddressForService:(id)a0;
+ (double)getLongTermValueWeightC;
+ (int)getLongTermHistoryLength;
+ (id)getStorebagValueStorebagKey:(id)a0 defaultValue:(id)a1;
+ (int)getWRMRSSIThresholdValue:(int)a0;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (int)getNATTypeFromCarrierBundle;
+ (double)getThresholdForSwitch:(unsigned int)a0;
+ (void)setServerAddresses:(id)a0;
+ (int)getDecryptionTimeoutInterval;
+ (struct tagIPPORT { int x0; char x1[16]; union { unsigned int x0; unsigned char x1[16]; } x2; unsigned short x3; } *)getCachedIPPort;
+ (double)getAdaptiveLearningB;
+ (double)getShortTermValueWeightC;
+ (double)getAdaptiveLearningA;
+ (id)getStorebagValueForStorebagKey:(id)a0 userDefaultKey:(struct __CFString { } *)a1 defaultValue:(id)a2 isDoubleType:(BOOL)a3;
+ (BOOL)supportsEVSCodec;
+ (double)getRemoteMediaStallTimeout;

- (id)init;
- (void)dealloc;

@end
