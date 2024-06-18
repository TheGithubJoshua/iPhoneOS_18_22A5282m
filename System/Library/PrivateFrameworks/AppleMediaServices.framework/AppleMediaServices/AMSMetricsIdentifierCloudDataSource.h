@protocol AMSMetricsIdentifierCloudDataSourceDelegate;

@interface AMSMetricsIdentifierCloudDataSource : NSObject

@property (weak, nonatomic) id<AMSMetricsIdentifierCloudDataSourceDelegate> delegate;

+ (id)_sharedQueue;
+ (void)cleanupIdentifiers;
+ (id)_database;
+ (void)clearSyncState;
+ (void)removeAllRecords;

- (id)_createRecordForIdentifier:(id)a0;
- (void)fetchModifiedRecordsWithCompletion:(id /* block */)a0;
- (id)_createRecordForIdentifierStore:(id)a0;
- (void).cxx_destruct;
- (void)saveRecord:(id)a0 isServerRecord:(BOOL)a1;
- (id)_parseRecord:(id)a0 error:(id *)a1;
- (void)removeRecordWithIdentifier:(id)a0;

@end
