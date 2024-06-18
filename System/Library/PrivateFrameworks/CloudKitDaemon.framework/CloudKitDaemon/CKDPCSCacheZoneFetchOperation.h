@class CKDZonePCSData, CKRecordZoneID;

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) BOOL needsZoneishPCS;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (nonatomic) BOOL shouldCreateZoneishPCS;
@property (nonatomic) BOOL rolledPCSForZone;

- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (void)_saveZoneToServer:(id)a0 withPCS:(struct _OpaquePCSShareProtection { } *)a1 zoneishPCS:(struct _OpaquePCSShareProtection { } *)a2 previousEtag:(id)a3 completion:(id /* block */)a4;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_savePCSDataToCache;
- (void)_decryptZonePCSInSharedDatabase;
- (void)_decryptZonePCSUsingServiceIdentities;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_saveUpdatedPCSToServer;
- (void)_saveNewPCSOnZone:(id)a0 completion:(id /* block */)a1;
- (void)_willRetryFetch;
- (BOOL)_decryptPCS;
- (BOOL)_fetchDependentPCS;
- (BOOL)_createAdditionalPCS;
- (void)_saveZoneToServer:(id)a0 completion:(id /* block */)a1;
- (void)_handleDecryptedZonePCSData:(id)a0 withError:(id)a1;
- (id)itemTypeName;
- (BOOL)hasAllPCSData;
- (BOOL)_checkAndUpdateZonePCSIfNeeded;
- (void)_fetchDepedentPCSInSharedDatabase;

@end
