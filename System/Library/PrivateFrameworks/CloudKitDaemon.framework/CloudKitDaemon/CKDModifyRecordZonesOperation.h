@class NSArray, NSMutableDictionary, CKDPCSKeySyncCoreAnalytics, NSMutableArray;
@protocol CKModifyRecordZonesOperationCallbacks;

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation {
    BOOL _hasZoneSaves;
    BOOL _hasZoneDeletes;
}

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *recordZonesToSave;
@property (retain, nonatomic) NSArray *recordZoneIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *retryableErrorsByZoneID;
@property (nonatomic) BOOL allowDefaultZoneSave;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (nonatomic) int numZoneSaveAttempts;
@property (nonatomic) long long maxZoneSaveAttempts;
@property (nonatomic) BOOL dontFetchFromServer;
@property (nonatomic) BOOL didSynchronizeUserKeyRegistry;
@property (retain, nonatomic) NSMutableArray *zonesWaitingOnKeyRegistrySync;
@property (retain, nonatomic) CKDPCSKeySyncCoreAnalytics *keySyncAnalytics;
@property (retain, nonatomic) id<CKModifyRecordZonesOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ saveCompletionBlock;
@property (copy, nonatomic) id /* block */ deleteCompletionBlock;

+ (long long)isPredominatelyDownload;

- (id)nameForState:(unsigned long long)a0;
- (BOOL)isOperationType:(int)a0;
- (void)main;
- (BOOL)makeStateTransition;
- (int)operationType;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)supportsClearAssetEncryption;
- (void)_fetchPCSDataForZonesFromServer:(BOOL)a0;
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)_handleRecordZoneSaved:(id)a0 responseCode:(id)a1 serverCapabilities:(unsigned long long)a2 expirationDate:(id)a3 expired:(BOOL)a4;
- (void)_handleRecordZoneDeleted:(id)a0 responseCode:(id)a1;
- (void)_createNewPCSForZone:(id)a0 completionHandler:(id /* block */)a1;
- (void)_sendCoreAnalyticsEventForKeySync;
- (void)_fetchPCSDataForZone:(id)a0 fromServer:(BOOL)a1;
- (void).cxx_destruct;
- (void)_checkAndPrepareZones;
- (void)_synchronizeUserKeyRegistryIfNeeded;
- (void)_sendErrorForFailedZones;
- (BOOL)_saveZonesToServer;

@end
