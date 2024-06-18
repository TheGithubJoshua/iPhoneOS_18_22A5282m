@class NSArray, NSDate;

@interface ACCAnalyticsLoggerSQLiteStore : ACCSQLite

@property (readonly) NSArray *allEvents;
@property (retain) NSDate *uploadDate;

+ (id)storeWithPath:(id)a0 schema:(id)a1;

- (id)summaryCounts;
- (void)addEventDict:(id)a0 toTable:(id)a1;
- (void)clearAllData;
- (BOOL)tryToOpenDatabase;
- (void)dealloc;
- (long long)successCount;
- (void)incrementSuccessCount;
- (void)incrementWrapFailureCount;
- (long long)wrapFailureCount;

@end
