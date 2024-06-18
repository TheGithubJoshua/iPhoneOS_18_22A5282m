@interface MXUtilities : NSObject

+ (id)osVersion;
+ (id)modelIdentifier;
+ (id)containerPath;
+ (BOOL)isAppAnalyticsEnabled;
+ (id)regionFormat;
+ (id)platformArchitecture;
+ (BOOL)isAppInstalledForBundleID:(id)a0;
+ (BOOL)verifySDKVersionForClient:(id)a0;
+ (id)getServicesWhitelist;

@end
