@class NSObject;
@protocol OS_dispatch_queue;

@interface GEOPlatform : NSObject {
    struct __CTServerConnection { } *_telephonyServerConnection;
    NSObject<OS_dispatch_queue> *_coreTelephonyIsolationQueue;
}

+ (id)sharedPlatform;
+ (BOOL)isRunningInGeod;
+ (void)setIsRunningInGeod:(BOOL)a0;

- (id)osVersion;
- (id)hardwareModel;
- (id)productName;
- (id)hardwareIdentifier;
- (id)init;
- (BOOL)isInternalInstall;
- (id)buildVersion;
- (id)deviceCountrySKU;
- (BOOL)supportsAdvancedMap;
- (long long)deviceScreenHeightInPixels;
- (BOOL)supportsNavigation;
- (id)osAndBuildVersion;
- (BOOL)supportsForceTouch;
- (BOOL)isCellDataPossible;
- (void).cxx_destruct;
- (double)deviceScreenScale;
- (BOOL)isMacSetupUser;
- (id)clientCapabilities;
- (BOOL)supportsRealisticTiles;
- (id)hardwareClass;
- (BOOL)mapsFeatureFreedomEnabled;
- (long long)deviceScreenWidthInPixels;
- (BOOL)supportsMultiUser;
- (id)deviceCountrySKUForServiceRequests;
- (BOOL)supportsASTC;

@end
