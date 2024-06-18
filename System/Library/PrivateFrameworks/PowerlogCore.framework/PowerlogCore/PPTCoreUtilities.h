@interface PPTCoreUtilities : NSObject

+ (BOOL)isAllowedSubsystem:(id)a0 category:(id)a1;
+ (BOOL)isValidModeForMetric:(id)a0;
+ (BOOL)isAllowedMetric:(id)a0;
+ (id)getPrivacyAllowlist;
+ (id)getAllowlist;
+ (id)getTestAllowlist;
+ (id)md5Hash:(id)a0;

@end
