@class NSURL, NSMutableDictionary;

@interface KVSkitWriter : NSObject <KVSkitWriteAccess> {
    NSURL *_directoryURL;
    NSMutableDictionary *_info;
    struct unique_ptr<skitbridge::Indexer, std::default_delete<skitbridge::Indexer>> { struct __compressed_pair<skitbridge::Indexer *, std::default_delete<skitbridge::Indexer>> { struct Indexer *__value_; } __ptr_; } _indexer;
    BOOL _inTransaction;
    long long _transactionLocale;
}

@property (readonly, nonatomic) unsigned long long flushThreshold;

+ (void)initialize;

- (BOOL)rollbackChanges:(id *)a0;
- (id)init;
- (BOOL)_beginTransactionWithError:(id *)a0;
- (long long)indexLocale;
- (BOOL)setTransactionLocale:(long long)a0 assetPath:(id)a1 error:(id *)a2;
- (long long)_indexLocale;
- (BOOL)removeVocabularyItemWithRecordId:(id)a0 error:(id *)a1;
- (BOOL)commitChanges:(BOOL *)a0 error:(id *)a1;
- (id)initWithSkitDirectoryURL:(id)a0 dataProtectionClass:(int)a1 flushThreshold:(unsigned long long)a2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addVocabularyItemWithBuffer:(id)a0 originAppId:(id)a1 recordId:(id)a2 error:(id *)a3;
- (BOOL)clearWithError:(id *)a0;
- (BOOL)isSupportedItemType:(long long)a0;
- (void)_resetTransactionSate;
- (BOOL)shouldMerge:(BOOL *)a0 error:(id *)a1;
- (BOOL)_saveLocaleWithError:(id *)a0;
- (BOOL)_loadLocaleWithError:(id *)a0;
- (BOOL)cleanup:(id *)a0;

@end
