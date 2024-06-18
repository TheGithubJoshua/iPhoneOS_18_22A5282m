@class NSArray, CKRecordZone, NSMutableDictionary, NSError, CKRecordZoneID, CKDPCSKeySyncCoreAnalytics;

@interface CKDAggregateZonePCSOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *sourceZoneIDs;
@property (retain, nonatomic) CKRecordZone *targetZone;
@property (retain, nonatomic) NSMutableDictionary *zonePCSDataByZoneID;
@property BOOL isHandlingRetryableError;
@property (retain) NSError *currentError;
@property (nonatomic) long long numZoneSaveAttempts;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (retain, nonatomic) CKRecordZoneID *zoneWaitingOnKeyRegistrySync;
@property (retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics;

- (id)nameForState:(unsigned long long)a0;
- (void)main;
- (BOOL)makeStateTransition;
- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)relevantZoneIDs;
- (void)_sendCoreAnalyticsEventForKeySync;
- (void).cxx_destruct;
- (BOOL)_saveTargetZone;
- (void)_fetchPCSDataForZoneID:(id)a0;
- (void)_fetchZonePCS;
- (void)_handleZoneSavedWithID:(id)a0 responseCode:(id)a1;
- (void)_prepareTargetZonePCS;
- (void)_setPermanentFailure;
- (void)_sychronizeUserKeyRegistryIfNeeded;

@end
