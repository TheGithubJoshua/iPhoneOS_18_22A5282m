@class CKVLocalization, NSString, NSObject;
@protocol KVSkitWriteAccess;

@interface CKVSkitUpdater : NSObject {
    NSObject<KVSkitWriteAccess> *_skit;
    CKVLocalization *_localization;
    NSString *_originAppId;
}

@property (readonly, nonatomic) unsigned long long insertCount;
@property (readonly, nonatomic) unsigned long long deleteCount;

- (id)initWithWriteAccess:(id)a0 settings:(id)a1 originAppId:(id)a2 itemType:(long long)a3;
- (id)init;
- (BOOL)insertItem:(id)a0 recordId:(id)a1;
- (void).cxx_destruct;
- (BOOL)deleteItemWithRecordId:(id)a0;
- (BOOL)setLocale;

@end
