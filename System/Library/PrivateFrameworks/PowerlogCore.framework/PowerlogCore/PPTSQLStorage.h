@class NSDictionary, NSMutableSet;

@interface PPTSQLStorage : PPTStorage

@property BOOL storageStarted;
@property (retain) NSDictionary *connectionByStorage;
@property (retain) NSMutableSet *entryKeysToSetup;

+ (id)trimConditionsForCESQLWithTrimDate:(id)a0;
+ (id)trimConditionsForEPSQLWithTrimDate:(id)a0;
+ (id)trimConditionsForEntryKey:(id)a0 trimDate:(double)a1 currDate:(double)a2;
+ (id)trimConditionsForPLSQLWithTrimDate:(id)a0;
+ (id)trimConditionsForStorage:(int)a0 trimDate:(id)a1;

- (id)init;
- (void)deleteOldMetadataStore;
- (void)updateMetadata:(id)a0 updateMetrics:(id)a1 addMetrics:(id)a2;
- (void)setupStorageForEntryKey:(id)a0;
- (id)connectionForKey:(id)a0;
- (id)CESQLConnection;
- (id)PreUnlockEPSQLConnection;
- (int)storageForConnection:(id)a0;
- (id)metricsToUpdateForStorage:(id)a0 processedMetrics:(id)a1;
- (void)setupFolders;
- (void).cxx_destruct;
- (id)PLSQLConnection;
- (void)setupTableForEntryKey:(id)a0 withName:(id)a1;
- (void)setupTableForEntryKey:(id)a0;
- (void)createMetadataTable;
- (void)setupMetadataStorage;
- (id)metricsToAddForStorage:(id)a0 processedMetrics:(id)a1;
- (BOOL)updateTable:(id)a0 transferDataForKeys:(id)a1;
- (void)startStorage;
- (id)EPSQLConnection;
- (id)setupDBConnectionAtPath:(id)a0;
- (void)setupDBConnections;
- (void)handleMetadataVersionChange;
- (void)persistMetadata;
- (void)closeAllConnections;
- (void)handleSchemaMismatchForTable:(id)a0;

@end
