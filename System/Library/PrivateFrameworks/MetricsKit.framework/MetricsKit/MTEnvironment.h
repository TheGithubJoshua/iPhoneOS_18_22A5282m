@protocol MTEnvironmentDelegate;

@interface MTEnvironment : MTObject

@property (weak, nonatomic) id<MTEnvironmentDelegate> delegate;

- (id)osVersion;
- (id)userAgent;
- (id)hardwareModel;
- (id)cookies;
- (BOOL)isAnonymous;
- (id)app;
- (void).cxx_destruct;
- (id)pageUrl;
- (id)os;
- (id)screenHeight;
- (id)appVersion;
- (id)connectionType;
- (id)environmentDataCenter;
- (id)screenWidth;
- (id)pixelRatio;
- (id)hostApp;
- (id)dsId;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)environmentBuild;
- (id)environmentInstance;
- (id)hardwareFamily;
- (id)hostAppVersion;
- (id)osBuildNumber;
- (id)osLanguages;
- (id)parentPageUrl;
- (id)resourceRevNum;
- (id)storeFrontHeader;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end
