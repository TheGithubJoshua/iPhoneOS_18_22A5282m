@class CKDRecordPCSData, CKRecordID, NSString;

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData;
@property (retain, nonatomic) NSString *serverRecordType;

- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_decryptRecordPCSInSharedDatabase;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_savePCSDataToCache;
- (BOOL)needsChainPCSCreation;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_decryptRecordPCSInPrivateDatabase;
- (BOOL)_fetchPCSForPrivateZone;
- (BOOL)_decryptPCS;
- (BOOL)_fetchDependentPCS;
- (void).cxx_destruct;
- (BOOL)_createAdditionalPCS;
- (id)itemTypeName;
- (BOOL)hasAllPCSData;
- (BOOL)_fetchDependentPCSInSharedDatabase;

@end
