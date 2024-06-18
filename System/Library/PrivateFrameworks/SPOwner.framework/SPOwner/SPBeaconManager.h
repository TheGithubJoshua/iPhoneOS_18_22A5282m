@class NSUUID, FMXPCServiceDescription, NSDate, NSData, FMXPCActivity, SPBeaconManagerSimpleBeaconUpdateInterface, NSDictionary, NSString, FMXPCSession, NSObject, SPBLEStateMonitor, SPMonitorsWrapper;
@protocol OS_dispatch_queue, SPBeaconManagerXPCProtocol, OS_dispatch_source;

@interface SPBeaconManager : NSObject <SPMonitorsWrapperDelegate, SPBLEStateMonitorDelegate>

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPBeaconManagerXPCProtocol> proxy;
@property (retain, nonatomic) id<SPBeaconManagerXPCProtocol> userAgentProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FMXPCActivity *periodicActionXpcActivity;
@property (nonatomic) BOOL schedulePeriodicActionXpcActivity;
@property (nonatomic) double periodicActionXpcActivityInterval;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *periodicActionDispatchTimer;
@property (retain, nonatomic) SPMonitorsWrapper *monitorWrapper;
@property (retain, nonatomic) SPBLEStateMonitor *bleMonitor;
@property (nonatomic) BOOL currentBeaconingState;
@property (nonatomic) BOOL forceBeaconingOff;
@property (nonatomic) unsigned char currentStatus;
@property (nonatomic) long long cachedLocalBeaconManagerState;
@property (nonatomic) BOOL initialStateChangeSent;
@property (nonatomic) BOOL beaconFromNVRAM;
@property (nonatomic) BOOL isOfflineFindingEnabled;
@property (copy, nonatomic) NSUUID *selfBeaconingUUID;
@property (nonatomic) unsigned long long selfBeaconingIndex;
@property (copy, nonatomic) NSDate *selfBeaconingPairDate;
@property (copy, nonatomic) NSData *selfBeaconingDerivedSharedSecretKey;
@property (copy, nonatomic) NSData *selfBeaconingPublicKey;
@property (copy, nonatomic) NSDictionary *selfBeaconingConfigurations;
@property (nonatomic) BOOL alreadyPoisonedLocalBeacon;
@property (retain, nonatomic) SPBeaconManagerSimpleBeaconUpdateInterface *simpleBeaconUpdateInterface;
@property (copy, nonatomic) id /* block */ stateChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ statusChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ beaconingKeyChangedBlockWithCompletion;
@property (copy, nonatomic) id /* block */ nearbyTokensChangedBlockWithCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)afterFirstUnlock:(id /* block */)a0;
+ (id)scheduleDateInterval:(id)a0;

- (void)beaconForUUID:(id)a0 completion:(id /* block */)a1;
- (void)connectionTokensForBeaconUUID:(id)a0 dateInterval:(id)a1 completion:(id /* block */)a2;
- (double)timeIntervalToNextFireDateFromDate:(id)a0;
- (void)allBeaconingKeysForUUID:(id)a0 dateInterval:(id)a1 forceGenerate:(BOOL)a2 completion:(id /* block */)a3;
- (id)init;
- (unsigned long long)bucketWithBaseTime:(id)a0 date:(id)a1;
- (void)localActivationLockInfoChanged;
- (void)notifyStateChange:(BOOL)a0;
- (void)connectedToBeacon:(id)a0 withIndex:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)stateDidChange:(BOOL)a0 powerState:(unsigned long long)a1;
- (void)createKeyReconcilerWithCompletion:(id /* block */)a0;
- (void)connectedToBeacon:(id)a0 withIndex:(unsigned long long)a1;
- (void)generateBeaconingKeysOfType:(long long)a0 now:(id)a1 withCompletion:(id /* block */)a2;
- (void)refreshBeaconingState;
- (void)roleCategoriesWithCompletion:(id /* block */)a0;
- (id)remoteInterface;
- (void)isLPEMModeSupported:(id /* block */)a0;
- (void)handlerForActivity:(id)a0 state:(long long)a1;
- (void)timerFired;
- (void)fetchUserStatsForBeacon:(id)a0 completion:(id /* block */)a1;
- (void)setKeyRollInterval:(unsigned long long)a0 forBeacon:(id)a1 completion:(id /* block */)a2;
- (void)setRole:(long long)a0 forBeacon:(id)a1 completion:(id /* block */)a2;
- (void)updateObfuscatedIdentifierWithCompletion:(id /* block */)a0;
- (id)xpcActivityCriteria:(id)a0;
- (void)updateBeacon:(id)a0 updates:(id)a1 completion:(id /* block */)a2;
- (void)createOwnedDeviceKeyRecordForUUID:(id)a0 completion:(id /* block */)a1;
- (void)start;
- (void)beaconingStateChanged:(long long)a0;
- (void)purgeOwnedDeviceKeyRecordsForUUID:(id)a0 completion:(id /* block */)a1;
- (void)setAlignmentUncertainty:(double)a0 atIndex:(unsigned long long)a1 date:(id)a2 forBeacon:(id)a3 completion:(id /* block */)a4;
- (void)allBeaconsOfTypes:(id)a0 includeDupes:(BOOL)a1 includeHidden:(BOOL)a2 completion:(id /* block */)a3;
- (void)bleMonitor:(id)a0 didChangeState:(unsigned long long)a1;
- (void)beaconingStateChangedNotification:(id)a0;
- (void)stopUpdatingSimpleBeaconsWithCompletion:(id /* block */)a0;
- (id)generateOfflineAdvertisingKeysForReason:(long long)a0 now:(id)a1;
- (void)notifyBeaconingKeysChangedBlockWithCompletion:(id /* block */)a0;
- (void)unacceptedBeaconsWithCompletion:(id /* block */)a0;
- (void)allDuriansWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)updateStateFromNVRAM;
- (void)fetchKeyMapFileDescriptorForBeacon:(id)a0 completion:(id /* block */)a1;
- (void)beaconsChanged:(id)a0;
- (void)connectionTokensForBeaconUUID:(id)a0 criteria:(id)a1 completion:(id /* block */)a2;
- (void)notificationBeaconForSubscriptionId:(id)a0 completion:(id /* block */)a1;
- (void)repairDataStore:(id /* block */)a0;
- (void)setCurrentWildKeyIndex:(long long)a0 forBeacon:(id)a1 completion:(id /* block */)a2;
- (void)allBeaconsOfType:(id)a0 completion:(id /* block */)a1;
- (void)removeDuplicateBeaconsWithCompletion:(id /* block */)a0;
- (void)setSuppressLPEMBeaconing:(BOOL)a0 completion:(id /* block */)a1;
- (void)connectionTokensForBeaconUUID:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)beaconingKeysForUUID:(id)a0 dateInterval:(id)a1 completion:(id /* block */)a2;
- (void)createDuplicateBeaconsForBeacon:(id)a0 skipGroupIdentifier:(BOOL)a1 count:(long long)a2 completion:(id /* block */)a3;
- (void)userHasAcknowledgeFindMyWithCompletion:(id /* block */)a0;
- (void)periodicActionWithCompletion:(id /* block */)a0;
- (void)startUpdatingSimpleBeaconsWithContext:(id)a0 collectionDifference:(id /* block */)a1 completion:(id /* block */)a2;
- (void)allBeaconsOfTypes:(id)a0 completion:(id /* block */)a1;
- (void)notifyNearbyTokensChangedBlockWithCompletion:(id /* block */)a0;
- (id)dateIntervalForIndex:(unsigned long long)a0 baseDate:(id)a1;
- (void)setPeriodicActionDispatchTimerWithInterval:(double)a0;
- (BOOL)isBeaconing;
- (void)setUserHasAcknowledgedFindMy:(BOOL)a0 completion:(id /* block */)a1;
- (void)setWildKeyBase:(unsigned long long)a0 interval:(unsigned long long)a1 fallback:(unsigned long long)a2 forBeacon:(id)a3 completion:(id /* block */)a4;
- (void)postedLocalNotifyWhenFoundNotificationForUUID:(id)a0 completion:(id /* block */)a1;
- (id)rawNVRAMData;
- (void)_invalidate;
- (void)notifyStatusChange:(unsigned char)a0;
- (void)ownedDeviceKeyRecordsForUUID:(id)a0 completion:(id /* block */)a1;
- (void)fetchFirmwareVersionForBeacon:(id)a0 completion:(id /* block */)a1;
- (void)allBeaconsWithCompletion:(id /* block */)a0;

@end