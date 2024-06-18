@class NSDictionary, NSOrderedSet, NSString;

@interface SBPlatformController : NSObject {
    NSDictionary *_defaultIconState;
    NSOrderedSet *_defaultIconStateDisplayIdentifiers;
    NSString *_localizedDeviceName;
    BOOL _internalInstall;
    BOOL _carrierInstall;
    long long _medusaCapabilities;
}

+ (id)sharedInstance;

- (id)defaultIconState;
- (id)productType;
- (id)hardwareModel;
- (id)deviceClass;
- (id)init;
- (BOOL)isInternalInstall;
- (BOOL)isHomeGestureEnabled;
- (id)uniqueDeviceIdentifier;
- (BOOL)isCarrierInstall;
- (void)_loadDefaultIconInfo;
- (BOOL)prefersAlwaysOnOrientation;
- (BOOL)isiPadMini;
- (void).cxx_destruct;
- (id)localizedPlatformName;
- (id)systemBuildVersion;
- (BOOL)isRoundCornerPhone;
- (BOOL)isRoundCornerPad;
- (id)defaultIconStateDisplayIdentifiers;
- (long long)medusaCapabilities;

@end
