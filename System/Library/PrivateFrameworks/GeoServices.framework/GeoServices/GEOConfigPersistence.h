@class _GEOConfigDBOperationQueue, GEOSQLiteDB, _GEOConfigDB, _GEOConfigCache;

@interface GEOConfigPersistence : NSObject {
    GEOSQLiteDB *_db;
    _GEOConfigDB *_configDB;
    _GEOConfigDB *_xpcConfigDB;
    _GEOConfigCache *_keyExpiryCache;
    _GEOConfigDBOperationQueue *_operationQueue;
}

+ (BOOL)_setup:(id)a0;
+ (BOOL)_migrateDates:(id)a0 withConverter:(id /* block */)a1;

- (id)_getExpiredKeyPathsOlderThanTime:(id)a0 osVersion:(id)a1;
- (void)tearDown;
- (id)getExpireForKeyPath:(id)a0;
- (void)pruneExpiredKeyPathsOlderThanTime:(id)a0;
- (void)pruneExpiredKeyPathsOlderThanOSVersion:(id)a0;
- (void)setXPCDefault:(id)a0 forKeyPath:(id)a1;
- (void)setDefault:(id)a0 forKeyPath:(id)a1;
- (id)xpcDefaultForKeyPathComponents:(id)a0;
- (void).cxx_destruct;
- (void)setExpire:(id)a0;
- (void)dealloc;
- (id)getExpiredKeyPathsOlderThanTime:(id)a0;
- (id)defaultForKeyPathComponents:(id)a0;
- (id)_getExpiredKeyPathsOlderThanTime:(id)a0 osVersion:(id)a1 from:(id)a2;
- (id)getExpiredKeyPathsOlderThanOSVersion:(id)a0;
- (id)getAllExpiringKeys;
- (id)defaultForKeyPath:(id)a0;
- (void)_pruneExpiredKeyPathsOlderThanTime:(id)a0 osVersion:(id)a1;
- (id)xpcDefaultForKeyPath:(id)a0;
- (id)initWithDBPath:(id)a0;
- (void)clearExpirationForKeyPath:(id)a0;

@end
