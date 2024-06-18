@class NSString, NSMutableDictionary, NSDate;

@interface PFUbiquitySaveSnapshot : NSObject {
    NSDate *_transactionDate;
    NSString *_modelVersionHash;
    NSString *_exportingPeerID;
    NSString *_localPeerID;
    NSMutableDictionary *_storeNameToStoreSaveSnapshots;
}

- (id)description;
- (void)dealloc;
- (id)initWithSaveNotification:(id)a0 withLocalPeerID:(id)a1;
- (id)initWithTransactionLog:(id)a0;

@end
