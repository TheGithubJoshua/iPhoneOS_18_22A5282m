@interface AADeviceInfo : NSObject

@property (class, readonly) AADeviceInfo *currentInfo;
@property (class, readonly, nonatomic) BOOL locationServicesRestricted;

+ (BOOL)isInternalBuild;
+ (id)osVersion;
+ (id)udid;
+ (id)serialNumber;
+ (id)infoDictionary;
+ (id)productVersion;
+ (id)apnsToken;
+ (BOOL)isMultiUserMode;
+ (id)userAgentHeader;
+ (id)appleIDClientIdentifier;
+ (id)clientInfoHeader;
+ (BOOL)hasiCloudSignOutRestriction;

- (id)osName;
- (id)productType;
- (id)osVersion;
- (id)regionCode;
- (id)udid;
- (id)serialNumber;
- (id)deviceName;
- (id)deviceClass;
- (id)productVersion;
- (id)buildVersion;
- (id)apnsToken;
- (id)deviceInfoDictionary;
- (id)uniqueChipIdentifier;
- (BOOL)hasCellularCapability;
- (id)bluetoothMacAddress;
- (id)modelNumber;
- (id)userAgentHeader;
- (id)appleIDClientIdentifier;
- (id)deviceBackingColor;
- (id)deviceHousingColor;
- (id)internationalMobileEquipmentIdentity;
- (id)deviceCoverGlassColor;
- (id)deviceColor;
- (id)wifiMacAddress;
- (id)deviceEnclosureColor;
- (id)clientInfoHeader;
- (id)mobileEquipmentIdentifier;
- (id)chipIdentifier;
- (id)storageCapacity;

@end
