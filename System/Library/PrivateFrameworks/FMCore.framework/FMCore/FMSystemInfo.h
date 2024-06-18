@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (id)deviceUDID;
- (id)productType;
- (BOOL)isInternalBuild;
- (id)osVersion;
- (id)serialNumber;
- (id)deviceName;
- (id)productName;
- (id)deviceClass;
- (id)meid;
- (BOOL)isDeviceSecured;
- (id)deviceModelName;
- (id)btMacAddress;
- (BOOL)hasSEP;
- (id)ecid;
- (id)chipId;
- (id)wifiMacAddress;
- (id)imei;
- (id)osBuildVersion;
- (id)ownerAccount;

@end
