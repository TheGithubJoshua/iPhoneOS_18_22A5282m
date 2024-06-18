@interface MCFeatureOverrides : NSObject

+ (BOOL)isDevFused;
+ (unsigned long long)profileEventsMaxLength;
+ (BOOL)allowVPNInUserEnrollment;
+ (int)profileEventsExpirationInterval;
+ (id)_numberForDefaultsKey:(id)a0 isPresent:(BOOL *)a1;
+ (BOOL)shouldSimulatorSupportMDM;
+ (BOOL)isAppleInternal;
+ (BOOL)boolForDefaultsKey:(id)a0 isPresent:(BOOL *)a1;
+ (BOOL)boolForDefaultsKey:(id)a0;
+ (double)accountRemovalTimeoutWithDefaultValue:(double)a0;
+ (BOOL)shouldDisablePlatformPayloadFilter;

@end
