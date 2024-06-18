@class NSString;

@interface IMPowerWifiUsageCollector : NSObject <CUTPowerMonitorDelegate, CUTWiFiManagerDelegate>

@property (readonly, nonatomic) BOOL shouldCollectInternalStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)a0;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (id)_getExternalLastConnectedDate;
- (void)_setExternalLastConnectedDate:(id)a0;
- (void)disconnectedFromAResource_ExternalCollection;
- (BOOL)_shouldWriteDownPowerWifiChanges;
- (BOOL)_isOnPower;
- (void)disconnectFromResourceForTotalDurationKey:(id)a0 dateKey:(id)a1 powerWifiDict:(id)a2;
- (void)reconnectedToBothResources_ExternalCollection;
- (id)_getPowerAndWifiDictionaryForKey:(id)a0;
- (void)reconnectToResourceForTotalDurationKey:(id)a0 dateKey:(id)a1 powerWifiDict:(id)a2;
- (BOOL)_isWifiUsable;
- (id)todaysKey;
- (double)_getExternalTotalDuration;
- (void)_setExternalTotalDuration:(id)a0;
- (BOOL)connectedToPowerAndWifiForOver20Hours;
- (void)cutWiFiManagerLinkDidChange:(id)a0 context:(id)a1;
- (void)dealloc;
- (void)_notePowerDidChangeForInternalCollection:(BOOL)a0 isOnWifi:(BOOL)a1;
- (void)_noteWifiLinkDidChangeForInternalCollection:(BOOL)a0 isOnPower:(BOOL)a1;
- (void)updateConnectedToPowerWifiIntervalIfConnected;
- (void)clearConnectedToPowerWifiOver20Hours;

@end
