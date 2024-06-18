@class NSString, DNDSIDSSyncEngine, DNDSGlobalConfiguration, DNDSSyncEngine;
@protocol DNDSGlobalConfigurationStoreDelegate, DNDSBackingStore;

@interface DNDSGlobalConfigurationStore : NSObject <DNDSBackingStoreDelegate, DNDSSyncEngineDataSource, DNDSIDSSyncEngineDataSource, DNDSGlobalConfigurationStoring> {
    id<DNDSBackingStore> _backingStore;
    DNDSSyncEngine *_syncEngine;
    DNDSIDSSyncEngine *_idsSyncEngine;
    DNDSGlobalConfiguration *_configuration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<DNDSGlobalConfigurationStoreDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)idsSyncEngine:(id)a0 didFetchRecord:(id)a1;
- (id)initWithBackingStore:(id)a0 syncEngine:(id)a1 idsSyncEngine:(id)a2;
- (void)_lock_prepareCKRecordToSave:(id)a0;
- (id)recordIDsForIDSSyncEngine:(id)a0;
- (void)syncEngine:(id)a0 resolveConflictBetweenClientRecord:(id)a1 andServerRecord:(id)a2;
- (void)_lock_updateConfigurationWithDNDSIDSRecord:(id)a0;
- (void)globalConfigurationSyncManager:(id)a0 didReceiveUpdatedGlobalConfiguration:(id)a1;
- (void)syncEngine:(id)a0 recordWithIDWasDeleted:(id)a1;
- (id)backingStore:(id)a0 migrateDictionaryRepresentation:(id)a1 fromVersionNumber:(unsigned long long)a2 toVersionNumber:(unsigned long long)a3;
- (void)_purgeData;
- (unsigned long long)_lock_writeRecord:(id)a0 writePartition:(BOOL)a1 error:(id *)a2;
- (void)syncEngine:(id)a0 didFetchRecord:(id)a1;
- (void)purgeRecordsForSyncEngine:(id)a0;
- (void)_populateDNDSIDSRecord:(id)a0 withGlobalConfiguration:(id)a1;
- (id)recordIDsForSyncEngine:(id)a0;
- (void).cxx_destruct;
- (void)_populateCKRecord:(id)a0 withGlobalConfiguration:(id)a1;
- (id)_createConfigurationFromCKRecord:(id)a0;
- (id)_lock_mutableExistingConfigurationInStore:(id)a0;
- (id)syncEngine:(id)a0 recordTypeForRecordID:(id)a1;
- (void)idsSyncEngine:(id)a0 recordWithIDWasDeleted:(id)a1;
- (void)syncEngine:(id)a0 zoneWithIDWasDeleted:(id)a1 removingRecordIDs:(id)a2;
- (id)_createConfigurationFromDNDSIDSRecord:(id)a0;
- (long long)syncEngine:(id)a0 wantsRecord:(id)a1;
- (void)_lock_updateConfigurationWithCKRecord:(id)a0;
- (void)_lock_prepareDNDSIDSRecordToSave:(id)a0;
- (id)readRecordWithError:(id *)a0;
- (long long)syncEngine:(id)a0 prepareRecordToSave:(inout id)a1;
- (void)syncEngine:(id)a0 failedToDeleteRecordWithID:(id)a1 error:(id)a2;
- (void)_notifyDelegateOfConfigurationChange;
- (id)_lock_existingConfiguration;
- (void)_lock_purgeData;
- (unsigned long long)writeRecord:(id)a0 error:(id *)a1;
- (unsigned long long)writeRecord:(id)a0 writePartition:(BOOL)a1 error:(id *)a2;
- (void)purgeRecordsForIDSSyncEngine:(id)a0;
- (void)idsSyncEngine:(id)a0 prepareRecordToSave:(inout id)a1;

@end
