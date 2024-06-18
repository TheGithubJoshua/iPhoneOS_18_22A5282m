@interface PPMutableContactDiskCache : PPContactDiskCache

- (BOOL)updateNameRecordCacheWithHistoryRecords:(id)a0 error:(id *)a1;
- (BOOL)deleteCacheIfTooOld;
- (BOOL)deleteNameRecordCache;
- (id)_createNewCacheObjectWithCreatedAt:(long long)a0;
- (long long)lastCreatedAt;
- (BOOL)_writeCache:(id)a0 path:(id)a1 error:(id *)a2;
- (void)setLastCreatedAt:(long long)a0;
- (id)_recordSetBucketsForNameRecords:(id)a0;
- (BOOL)addNameRecords:(id)a0 error:(id *)a1;

@end
