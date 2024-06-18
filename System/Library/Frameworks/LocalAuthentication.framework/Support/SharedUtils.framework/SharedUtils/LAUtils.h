@interface LAUtils : NSObject

+ (BOOL)isSharedIPad;
+ (BOOL)isAppleSilicon;
+ (BOOL)isBiometricOnlyPolicy:(long long)a0;
+ (BOOL)isGibraltar;
+ (BOOL)callerRunningOnForeground:(id)a0 pid:(int)a1;
+ (id)truncateString:(id)a0 maxLength:(long long)a1;
+ (id)auditTokenToData:(struct { unsigned int x0[8]; })a0;
+ (BOOL)isApplePayPolicy:(long long)a0;
+ (BOOL)isSecureBootCapable;
+ (BOOL)isApplePayPolicy:(long long)a0 inApp:(BOOL)a1;
+ (BOOL)isDaytona;
+ (BOOL)hasBridge;

@end
