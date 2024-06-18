@class NSString, MTCoreDataContainer;
@protocol MTCoreDataContainerConfigProvider;

@interface MTDB : NSObject <NSManagedObjectContextProvider>

@property (retain, nonatomic) MTCoreDataContainer *coreDataContainer;
@property (retain, nonatomic) id<MTCoreDataContainerConfigProvider> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setCorrupt:(BOOL)a0;
+ (id)sharedInstance;
+ (BOOL)needsSerpentIdEpisodeMigration;
+ (BOOL)canExtensionOpenDatabase;
+ (void)setQuickCheckForNeedsContainerMigration:(BOOL)a0;
+ (id)libraryPath;
+ (void)setSerpentIdMigrationComplete:(BOOL)a0;
+ (void)setSharedInstance:(id)a0;
+ (BOOL)needsCacheBustForFreeAndPaidUrlStorage;
+ (BOOL)isCorrupt;
+ (long long)libraryDataVersion;
+ (void)setStoreBothFreeAndPaidUrlsPreviousBootup;
+ (void)setLibraryDataVersion:(long long)a0;
+ (void)setCoreDataVersion:(long long)a0;
+ (void)isPodcastsAppCheck;
+ (long long)coreDataVersion;
+ (id)fetchManagedObjectModelFromDisk;
+ (BOOL)serpentIdMigrationComplete;
+ (BOOL)quickCheckForNeedsContainerMigration;
+ (id)libraryShmPath;
+ (BOOL)createDatabaseIfNeeded;
+ (id)libraryWalPath;

- (id)managedObjectModel;
- (id)init;
- (void).cxx_destruct;
- (id)loggingContext;
- (id)contextForName:(id)a0;
- (id)playbackContext;
- (void)addChangeNotifier:(id)a0;
- (id)carPlayContext;
- (id)importContext;
- (id)initWithCoreDataContainer:(id)a0 config:(id)a1;
- (id)mainOrPrivateContext;
- (id)mainQueueContext;
- (id)persistentStoreUuid;
- (id)privateQueueContext;
- (void)removeChangeNotifier:(id)a0;
- (id)resetableImportContext;
- (id)storeContext;

@end
