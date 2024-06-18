@class GEOSQLiteDB;

@interface GEONavdCachePersistenceManager : NSObject {
    GEOSQLiteDB *_db;
}

- (void)removeAllEntries;
- (void)deleteFromDiskWithKey:(id)a0;
- (id)init;
- (double)nextTimeStampForRefreshTimer;
- (void)tearDown;
- (id)entryWithRowId:(long long)a0;
- (id)readValueWithKey:(id)a0;
- (void).cxx_destruct;
- (long long)dumpToDiskWithKey:(id)a0 value:(id)a1;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (long long)numberOfEntries;
- (void)enumerateAllEntriesWithHandler:(id /* block */)a0;

@end
