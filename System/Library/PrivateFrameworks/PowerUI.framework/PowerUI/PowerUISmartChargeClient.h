@class NSString, NSObject, NSXPCConnection;
@protocol OS_os_log;

@interface PowerUISmartChargeClient : NSObject <PowerUISmartChargeClientManaging>

@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;

- (void)shouldMCMBeDisplayedWithHandler:(id /* block */)a0;
- (void)listMonitorSignals;
- (void)isCECCurrentlyEnabledWithHandler:(id /* block */)a0;
- (BOOL)isOBCSupported;
- (void)isSmartChargingCurrentlyEnabledWithHandler:(id /* block */)a0;
- (void)isOBCSupportedWithHandler:(id /* block */)a0;
- (void)cecFullChargeDeadlineWithHandler:(id /* block */)a0;
- (id)powerLogStatus;
- (void).cxx_destruct;
- (BOOL)isCECSupported;
- (void)resetDevelopmentMode;
- (void)isMCMCurrentlyEnabledWithHandler:(id /* block */)a0;
- (id)status;
- (void)dealloc;
- (BOOL)setChargingStatus:(BOOL)a0;
- (void)fullChargeDeadlineWithHandler:(id /* block */)a0;
- (void)forceModelUpdate;
- (void)isCECSupportedWithHandler:(id /* block */)a0;
- (void)enterDevelopmentMode;
- (id)initWithClientName:(id)a0;
- (BOOL)isOBCEngaged:(BOOL *)a0 asDesktopDevice:(BOOL *)a1 chargingOverrideAllowed:(BOOL *)a2 withError:(id *)a3;
- (id)cecFullChargeDeadline:(id *)a0;
- (id)fullChargeDeadline:(id *)a0;
- (void)enableSmartChargingWithHandler:(id /* block */)a0;
- (BOOL)setState:(unsigned long long)a0 error:(id *)a1;
- (BOOL)disableCEC:(id *)a0;
- (void)disableCECWithHandler:(id /* block */)a0;
- (BOOL)disableMCM:(id *)a0;
- (void)disableMCMWithHandler:(id /* block */)a0;
- (BOOL)disableSmartCharging:(id *)a0;
- (void)disableSmartChargingWithHandler:(id /* block */)a0;
- (BOOL)enableCEC:(id *)a0;
- (void)enableCECWithHandler:(id /* block */)a0;
- (BOOL)enableMCM:(id *)a0;
- (void)enableMCMWithHandler:(id /* block */)a0;
- (BOOL)enableSmartCharging:(id *)a0;
- (void)engageFrom:(id)a0 until:(id)a1 repeatUntil:(id)a2 overrideAllSignals:(BOOL)a3;
- (unsigned long long)isCECCurrentlyEnabled:(id *)a0;
- (unsigned long long)isMCMCurrentlyEnabled:(id *)a0;
- (BOOL)isOBCEngaged:(id *)a0;
- (BOOL)isOBCEngaged:(BOOL *)a0 isMaxChargeLimited:(BOOL *)a1 chargingOverrideAllowed:(BOOL *)a2 withError:(id *)a3;
- (BOOL)isOBCEngagedAsDesktopDevice:(BOOL *)a0 chargingOverrideAllowed:(BOOL *)a1 withError:(id *)a2;
- (void)isOBCEngagedAsDesktopDeviceWithHandler:(id /* block */)a0;
- (unsigned long long)isSmartChargingCurrentlyEnabled:(id *)a0;
- (id)lastUsedLeewayWithError:(id *)a0;
- (void)legacy_client_isOBCEngagedWithHandler:(id /* block */)a0;
- (void)resetEngagementOverride;
- (BOOL)setCECState:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setMCMState:(unsigned long long)a0 error:(id *)a1;
- (BOOL)shouldMCMBeDisplayed:(id *)a0;
- (id)simulateCurrentOutputAsOfDate:(id)a0 overrideAllSignals:(BOOL)a1 withError:(id *)a2;
- (BOOL)smartChargingUIState:(unsigned long long *)a0 chargeLimit:(unsigned long long *)a1 chargingOverrideAllowed:(BOOL *)a2 withError:(id *)a3;
- (BOOL)temporarilyDisableCEC:(id *)a0;
- (void)temporarilyDisableCECWithHandler:(id /* block */)a0;
- (BOOL)temporarilyDisableMCM:(id *)a0;
- (void)temporarilyDisableMCMWithHandler:(id /* block */)a0;
- (BOOL)temporarilyDisableSmartCharging:(id *)a0;
- (void)temporarilyDisableSmartChargingWithHandler:(id /* block */)a0;
- (BOOL)temporarilyEnableCharging:(id *)a0;
- (void)temporarilyEnableChargingWithHandler:(id /* block */)a0;

@end
