@class NSString;

@interface MTEnvironmentDeviceDelegate : NSObject <MTEnvironmentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)osVersion;
- (id)userAgent;
- (id)hardwareModel;
- (id)userType;
- (id)cookies;
- (BOOL)isAnonymous;
- (id)app;
- (id)pageUrl;
- (id)os;
- (id)screenHeight;
- (id)appVersion;
- (id)connectionType;
- (id)screenWidth;
- (id)pixelRatio;
- (id)hostApp;
- (id)_diskUsage;
- (id)dsId;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)hardwareFamily;
- (id)osBuildNumber;
- (id)osLanguages;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
