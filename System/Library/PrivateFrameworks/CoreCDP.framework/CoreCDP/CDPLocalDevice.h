@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject {
    id<CDPLocalDeviceSecretProxy> _localSecretProxy;
}

+ (id)sharedInstance;
+ (BOOL)hasLocalSecret;

- (id)modelVersion;
- (id)osVersion;
- (id)serialNumber;
- (id)deviceName;
- (id)hardwareModel;
- (id)deviceClass;
- (id)init;
- (BOOL)currentProcessHasEntitlement:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasLocalSecret;
- (BOOL)_isHomePod;
- (BOOL)_currentProcessCreatesDaemonTypeProxy;
- (id)marketingModel;
- (BOOL)supportsSecureBackupRecovery;

@end
