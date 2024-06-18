@interface FMSystemInfo_ios : FMSystemInfo

- (id)deviceUDID;
- (id)productType;
- (id)osVersion;
- (id)serialNumber;
- (id)deviceName;
- (id)productName;
- (id)deviceClass;
- (id)meid;
- (id)_deviceInfoNumberForKey:(struct __CFString { } *)a0;
- (BOOL)isDeviceSecured;
- (id)deviceModelName;
- (id)_deviceInfoForKey:(struct __CFString { } *)a0;
- (id)btMacAddress;
- (BOOL)hasSEP;
- (BOOL)_boolDeviceInfoForKey:(struct __CFString { } *)a0;
- (id)ecid;
- (id)chipId;
- (id)wifiMacAddress;
- (id)imei;
- (id)osBuildVersion;

@end
