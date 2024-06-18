@class CKDSharePCSData, CKRecordID;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;

- (void)_handlePCSDataFetched:(id)a0 withError:(id)a1;
- (BOOL)_fetchPCSDataFromServer;
- (BOOL)_savePCSDataToCache;
- (BOOL)_fetchPCSDataFromDatabase;
- (BOOL)_decryptPCS;
- (id)itemTypeName;
- (BOOL)hasAllPCSData;

@end
