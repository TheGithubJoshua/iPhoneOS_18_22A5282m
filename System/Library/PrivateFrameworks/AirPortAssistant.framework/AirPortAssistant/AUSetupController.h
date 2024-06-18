@class NSString, NSDictionary, NSMutableSet, NSDate;

@interface AUSetupController : AssistantCallbackController <SetupUIConfigDelegateResult, AutoGuessSetup, BaseStationSetup> {
    struct BSConfigurationContext { } *_configContext;
    BOOL _autoJoinState;
    BOOL _scanningState;
    BOOL _busy;
    BOOL _initializedBasePasswordFlag;
    BOOL _performingManualRead;
    BOOL _needToNilBonjour;
    NSString *_keychainBasePassword;
    NSString *_keychainWiFiPassword;
    NSString *_keychainDiskPassword;
}

@property (nonatomic) BOOL activeTask;
@property (readonly, nonatomic) NSMutableSet *setupDelegates;
@property (nonatomic) id uiConfigDelegate;
@property (nonatomic) id context;
@property (retain, nonatomic) NSString *autoGuessSetupRecommendation;
@property (retain, nonatomic) NSDictionary *lastInstrumentation;
@property (retain, nonatomic) NSDictionary *bonjourRecord;
@property (nonatomic) BOOL rememberBasePassword;
@property (nonatomic) BOOL rememberWiFiPassword;
@property (nonatomic) BOOL rememberDiskPassword;
@property (retain, nonatomic) NSString *keychainBasePassword;
@property (retain, nonatomic) NSString *keychainWiFiPassword;
@property (retain, nonatomic) NSString *keychainDiskPassword;
@property (readonly, nonatomic) NSDate *lastHeardFromDevice;
@property (retain, nonatomic) NSString *lastSystemName;
@property (retain, nonatomic) NSString *lastDNSName;
@property (retain) NSDictionary *restoreRecommendation;

+ (void)initialize;
+ (id)setupController;

- (id)init;
- (int)taskState;
- (BOOL)dirty;
- (BOOL)isMonitoring;
- (void)dealloc;
- (int)closeAllConnections;
- (int)busyState;
- (int)cancelTask;
- (void)applicationDidEnterBackgroundNotification:(id)a0;
- (int)cancelSetup;
- (void)handleBusyStart;
- (id)validateAllSettingsAndGetErrors;
- (void)logChangesToCCL;
- (int)rpcWPSStopAsync;
- (id)allKeychainMACAddresses;
- (id)bestKeychainMACAddress;
- (struct _BaseStation { } *)bsRef;
- (int)closeAllConnections:(BOOL)a0;
- (int)copyValue:(id *)a0 forBSSetting:(int)a1;
- (int)copyValue:(id *)a0 forSettingPath:(id)a1;
- (void)deleteKeychainBasePassword;
- (void)deleteKeychainWirelessPassword;
- (long long)ethernetPortCount;
- (int)getValue:(id *)a0 forBSSetting:(int)a1;
- (int)getValue:(id *)a0 forSettingPath:(id)a1;
- (void)handleBusyComplete;
- (void)handleSetupComplete:(int)a0;
- (void)handleTaskComplete;
- (BOOL)hasACPFeature:(unsigned int)a0;
- (int)ignoreProblemCode:(unsigned int)a0;
- (int)joinAndBrowseAsync;
- (int)joinAsync;
- (id)keychainBasePassword;
- (id)keychainDiskPassword;
- (id)keychainWiFiPassword;
- (void)loadKeychainBasePassword;
- (void)loadKeychainWirelessPassword;
- (BOOL)performingManualRead;
- (int)readAllPropertiesFromBaseAsync;
- (int)readPropertyListFromBaseAsync:(id)a0;
- (void)resetWiFiState;
- (int)rpcDisconnectAllDiskUsersWithMessageAsync:(id)a0;
- (int)rpcRefreshBSSettingAsync:(int)a0;
- (int)rpcRenewDHCPLeaseAsync;
- (int)rpcStartRemoteBrowse:(id)a0 withService:(id)a1;
- (int)rpcSystemInterfacesAsync;
- (int)rpcWPSAllowClientAsync:(id)a0;
- (int)rpcWPSStartAsync:(BOOL)a0 dayPass:(BOOL)a1 timeout:(unsigned int)a2;
- (void)saveKeychainBasePassword;
- (void)saveKeychainWirelessPassword;
- (void)setKeychainBasePassword:(id)a0;
- (void)setKeychainDiskPassword:(id)a0;
- (void)setKeychainWiFiPassword:(id)a0;
- (int)setMonitorForChanges:(BOOL)a0;
- (int)setValue:(id)a0 forBSSetting:(int)a1;
- (int)setValue:(id)a0 forSettingPath:(id)a1;
- (int)setupFromAutoguessRecommendation:(id)a0 withOptions:(id)a1;
- (void)setupUIConfigResult:(int)a0 withOptions:(id)a1;
- (void)setupWiFiState;
- (int)setupWithTargetBaseStation:(id)a0 andSettings:(id)a1;
- (int)setupWithTargetNetwork:(id)a0;
- (id)snapshotChangedKeys;
- (BOOL)snapshotDirty;
- (int)snapshotPop:(BOOL)a0;
- (int)snapshotPush;
- (void)snapshotResetAll;
- (int)stateForProblem:(unsigned int)a0;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext { unsigned int x0; struct AssistantContext *x1; int x2; struct __CFDictionary *x3; int x4; id x5; id x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; void *x8; long long x9; } *)a0;
- (id)targetBaseInfoDict;
- (int)taskArchiveDiskAsync:(id)a0;
- (unsigned int)taskCode;
- (int)taskEraseDiskAsync:(id)a0;
- (int)taskRestartAsync;
- (int)taskRestoreDefaultsAsync:(BOOL)a0;
- (int)taskUploadFirmwareAsync:(id)a0;
- (int)unIgnoreProblemCode:(unsigned int)a0;
- (long long)unignoredProblemCount;
- (int)updateKeychainWithPasswords;
- (int)updateKeychainWithPasswordsWithStatus:(int)a0;
- (void)updateLastHeardFromDevice;
- (void)updateRememberKeychainFlagsButSkipBasePassword:(BOOL)a0;
- (void)updateRememberKeychainFlagsIfInitializing;
- (int)updateSettingsAsync;
- (id)validateSettingsAndGetErrors:(id)a0;

@end