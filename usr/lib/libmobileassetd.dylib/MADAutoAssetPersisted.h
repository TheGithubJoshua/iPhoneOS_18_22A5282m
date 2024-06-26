@class SUCorePersistedState, NSString, SUCoreLog, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MADAutoAssetPersisted : NSObject

@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSString *logLeader;
@property (readonly, retain, nonatomic) NSString *moduleName;
@property (readonly, retain, nonatomic) NSString *moduleCurrentVersion;
@property (retain, nonatomic) NSString *latestSafeSummary;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *persistedQueue;
@property (readonly, retain, nonatomic) SUCorePersistedState *entryTableOfContents;
@property (retain, nonatomic) NSMutableArray *currentEntryIDs;
@property (readonly, copy, nonatomic) id /* block */ moduleVersionMigrator;
@property (readonly, retain, nonatomic) SUCorePersistedState *persistedConfig;

+ (long long)persistedEntryStatusValue:(id)a0;
+ (id)persistedEntryStatusName:(long long)a0;
+ (id)persistedOperationSymbol:(id)a0;
+ (id)persistedComponentSymbol:(id)a0;
+ (id)persistedStateFilename:(id)a0 forFileID:(id)a1 ofEntryName:(id)a2;
+ (id)entryFileIDForModule:(id)a0 fromFilename:(id)a1;

- (id)_summary;
- (void)removePersistedEntry:(id)a0 fromLocation:(id)a1;
- (void)_persistTableOfContents:(id)a0 forEntryName:(id)a1 withEntryStatus:(long long)a2;
- (void)loadPersistedState:(id)a0;
- (id)_summaryLeader:(id)a0 fromLocation:(id)a1;
- (long long)_validateLoadedEntry:(id)a0 fromLocation:(id)a1 forEntryName:(id)a2 loadedWithEntryStatus:(long long)a3;
- (id)_contentsOfModulePersistedPath:(id)a0 fromLocation:(id)a1;
- (id)_loadPersistedEntry:(id)a0 forEntryName:(id)a1 withEntryStatus:(long long)a2;
- (void).cxx_destruct;
- (id)summary;
- (BOOL)_preExistingPersistedStateValid:(id)a0 fromLocation:(id)a1;
- (id)description;
- (void)_persistStatusChange:(id)a0 ofEntryName:(id)a1 withEntrySummary:(id)a2 currentStatus:(long long)a3 fromLocation:(id)a4;
- (void)removeAllPersistedEntries:(id)a0;
- (void)_removeEntryFile:(id)a0 reason:(id)a1 fromLocation:(id)a2;
- (id)initForModule:(id)a0 ofModuleVersion:(id)a1 usingDispatchQueue:(id)a2 usingLogger:(id)a3 loggingByName:(id)a4 withVersionMigrator:(id /* block */)a5;
- (id)persistedEntryIDs:(id)a0;
- (BOOL)_verifyPersistedDirectoryExistsOrCreate:(id)a0;
- (void)storePersistedEntry:(id)a0 withEntrySummary:(id)a1 fromLocation:(id)a2;
- (BOOL)persistedEntryAlreadyExists:(id)a0 fromLocation:(id)a1;
- (id)persistedEntry:(id)a0 fromLocation:(id)a1;
- (BOOL)_verifyEntryFileExists:(id)a0 fromLocation:(id)a1 expectingExists:(BOOL)a2;
- (void)_removeEntriesMissingFromTableOfContents:(id)a0;

@end
