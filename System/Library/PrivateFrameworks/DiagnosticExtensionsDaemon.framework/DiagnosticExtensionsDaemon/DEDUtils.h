@interface DEDUtils : NSObject

+ (id)deviceModel;
+ (id)deviceName;
+ (id)deviceClass;
+ (id)deriveMacDeviceClassForProductType:(id)a0;
+ (BOOL)isInternalInstall;
+ (id)modelForProductType:(id)a0;
+ (id)platform;
+ (id)sharedLog;
+ (id)deviceClassForProductType:(id)a0;
+ (id)deviceHardwareCodename;
+ (BOOL)isDataClassBAvailable;
+ (BOOL)isDebugRequestsEnabled;
+ (id)osBuild;
+ (int)deviceHomeButtonType;
+ (id)deviceProductType;
+ (id)deviceUniformTypeIdentifier;
+ (id)deviceSerialNumber;
+ (id)uniqueDeviceSpecifier;
+ (id)deviceColor;
+ (id)deviceEnclosureColor;

@end
