@class NSString, NSMutableDictionary, NSNumber, NSObject;
@protocol CKVDatabaseReadWriteAccess;

@interface CKVFTSRecordUpdater : NSObject {
    NSObject<CKVDatabaseReadWriteAccess> *_database;
    NSString *_originAppId;
    NSNumber *_itemTypeNumber;
    NSMutableDictionary *_commandCache;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)deleteRecordId:(id)a0;
- (BOOL)insertRecordsFromItem:(id)a0 recordId:(id)a1;
- (BOOL)deleteDataset;
- (BOOL)deleteRecordIds:(id)a0;
- (id)initWithDatabase:(id)a0 originAppId:(id)a1 itemType:(long long)a2;

@end
