@class NSString, NSDictionary, NSURL, ICExclusiveLock, NSMergePolicy;

@interface ICPersistentContainer : NSPersistentContainer

@property (class, readonly, nonatomic) ICExclusiveLock *databaseOpenLock;

@property (retain, nonatomic) NSURL *storeURL;
@property (retain, nonatomic) NSString *storeType;
@property (retain, nonatomic) NSDictionary *storeOptions;
@property (retain, nonatomic) NSMergePolicy *mergePolicy;
@property (readonly, nonatomic) NSURL *backupsDirectoryURL;
@property (nonatomic) unsigned long long fakeFreeDiskSpace;
@property (nonatomic) BOOL abortAfterReplacingDatabase;

+ (id)managedObjectModel;
+ (id)oldManagedObjectModel;
+ (id)standardStoreOptions;
+ (BOOL)isDataProtectionError:(id)a0;
+ (BOOL)isDatabaseMissingError:(id)a0;

- (BOOL)isReadOnly;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3 managedObjectModel:(id)a4;
- (BOOL)loadPersistentStore:(id *)a0 storeCreatedHandler:(id /* block */)a1;
- (id)initWithStoreURL:(id)a0 storeType:(id)a1 options:(id)a2 mergePolicy:(id)a3;
- (void)setupPersistentStoreDescriptions;
- (void).cxx_destruct;
- (id)performBlockWithDatabaseOpenLock:(id /* block */)a0;
- (BOOL)migrateFromOldDataModel;
- (BOOL)loadPersistentStore:(id *)a0;
- (id)newBackgroundContext;
- (void)vacuumStore;
- (BOOL)isTooLowOnDiskSpace;
- (BOOL)allowsCoreDataMigration;
- (void)vacuumStoreWithCompletionHandler:(id /* block */)a0;
- (void)setupViewContext;
- (void)backupPersistentStore;

@end
