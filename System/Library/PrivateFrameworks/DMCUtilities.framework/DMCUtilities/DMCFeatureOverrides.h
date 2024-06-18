@interface DMCFeatureOverrides : NSObject

+ (id)serviceDiscoveryDomainWithValue:(id)a0;
+ (BOOL)bypassMDMTLSClientAuthentication;
+ (BOOL)sentinelExistsAtPath:(id)a0;
+ (BOOL)shouldSimulateMDMBYODSignIn;
+ (id)modelNameWithDefaultValue:(id)a0;
+ (BOOL)ignoreEnrollmentMode;
+ (id)stringForDefaultsKey:(id)a0;
+ (BOOL)useNonEphemeralWebAuthSession;
+ (id)modelNumberWithDefaultValue:(id)a0;
+ (BOOL)shouldSimulateMDMCommunication;
+ (id)simulatedMDMBYODProfile;
+ (id)simulatedMDMBYODAuthMethod;
+ (id)dictForDefaultsKey:(id)a0;
+ (BOOL)allowAnyESSOApplicationEntitlements;
+ (BOOL)allowAnyMAIDToSignIn;
+ (id)serviceDiscoveryFallbackURLWithValue:(id)a0;
+ (double)enrollmentStepTimeoutThresholdWithDefaultValue:(double)a0;
+ (id)numberForDefaultsKey:(id)a0;
+ (id)simulatedMDMBYODDefaultUsername;
+ (id)objectForDefaultsKey:(id)a0;
+ (id)attestationRateLimitOverrideMinutes;
+ (BOOL)boolForDefaultsKey:(id)a0;
+ (id)productNameWithDefaultValue:(id)a0;
+ (BOOL)useHTTPLogging;
+ (id)deviceNameWithDefaultValue:(id)a0;
+ (double)accountSignInTimeoutThresholdWithDefaultValue:(double)a0;
+ (id)softwareUpdateDeviceIDWithDefaultValue:(id)a0;
+ (BOOL)_isUnknownProduct;
+ (id)gestaltOverrideForKey:(const struct __CFString { } *)a0 withDefaultValue:(id)a1;
+ (id)enrollmentProfileWithDefaultValue:(id)a0;
+ (id)serviceDiscoveryDefaultPortWithValue:(id)a0;
+ (id)activationRecordFlagsWithFlags:(id)a0;

@end
