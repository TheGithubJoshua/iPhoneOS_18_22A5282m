@interface MKPhotoLibraryAssetDatabase : NSObject {
    struct sqlite3 { } *_database;
    unsigned long long _count;
}

- (void)remove:(id)a0;
- (id)collections;
- (void)commit;
- (id)initWithType:(unsigned long long)a0;
- (void)rollback;
- (void)open:(id)a0;
- (void)begin;
- (id)asset;
- (void)dealloc;
- (unsigned long long)countForCollection:(id)a0;
- (unsigned long long)count;
- (void)create;
- (void)close;
- (void)addAsset:(id)a0;
- (id)identifiersForCollection:(id)a0 offset:(unsigned long long)a1 limit:(unsigned long long)a2;
- (void)query:(id)a0;
- (void)setIdentifier:(id)a0 forAsset:(id)a1;

@end
