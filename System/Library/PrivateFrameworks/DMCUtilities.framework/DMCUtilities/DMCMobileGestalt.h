@interface DMCMobileGestalt : NSObject

+ (BOOL)isWatch;
+ (BOOL)isAppleTV;
+ (id)deviceUDID;
+ (BOOL)isPad;
+ (id)productType;
+ (id)regionCode;
+ (id)serialNumber;
+ (BOOL)isHomePod;
+ (id)productName;
+ (id)deviceClass;
+ (id)buildVersion;
+ (BOOL)hasTelephonyCapability;
+ (id)regionInfo;
+ (id)diskCapacity;
+ (id)modelNumber;
+ (BOOL)hasCellularDataCapability;
+ (BOOL)isPhone;
+ (id)deviceColor;
+ (id)diskUsage;
+ (id)_overridableGestaltForKey:(const struct __CFString { } *)a0 expectedClass:(Class)a1;
+ (id)availableCapacity;
+ (id)deviceCapacity;
+ (BOOL)hasInternetTetheringCapability;
+ (id)marketingVersion;
+ (id)supplementalBuildVersion;
+ (id)supplementalMarketingVersion;
+ (id)supplementalMarketingVersionExtra;

@end
