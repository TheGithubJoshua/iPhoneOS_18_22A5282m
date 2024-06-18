@interface MKApplicationDatabase : NSObject {
    struct sqlite3 { } *_database;
}

- (void)drop;
- (id)init;
- (void)commit;
- (id)identifiers;
- (void)rollback;
- (void)open:(id)a0;
- (void)begin;
- (BOOL)addIdentifier:(id)a0;
- (void)dealloc;
- (void)create;
- (void)close;
- (void)addIdentifiers:(id)a0;
- (BOOL)_addAppStoreIdentifier:(id)a0;
- (void)addAppStoreIdentifier:(id)a0;
- (id)appStoreIdentifiers;
- (long long)countForAppStoreIdentifiers;
- (void)query:(id)a0;

@end
