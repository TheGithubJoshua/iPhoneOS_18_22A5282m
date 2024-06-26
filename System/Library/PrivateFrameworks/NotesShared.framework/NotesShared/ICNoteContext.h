@class NSArray, NSData, NSObject, NSDictionary, ICManagedObjectContextUpdater, ICAccount, NSManagedObjectContext, NSString, NSTimer, ICNote, ICAccountUtilities, ICNotesCrossProcessChangeCoordinator, ICFolderCustomNoteSortType, NSError, ICPersistentContainer;
@protocol OS_dispatch_queue;

@interface ICNoteContext : NSObject <ICNoteContainer>

@property (class, readonly, nonatomic) ICNoteContext *sharedContext;

@property (nonatomic) unsigned long long contextOptions;
@property (retain) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) ICNotesCrossProcessChangeCoordinator *crossProcessChangeCoordinator;
@property (retain, nonatomic) ICManagedObjectContextUpdater *contextUpdater;
@property (getter=isSaving) BOOL saving;
@property (retain, nonatomic) ICAccountUtilities *accountUtilities;
@property (retain, nonatomic) NSTimer *trashDeletionTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundTaskQueue;
@property (nonatomic) BOOL shouldEnsureLocalAccount;
@property (retain, nonatomic) NSDictionary *persistentStoresByAccountId;
@property (nonatomic) unsigned long long countOfPerformBackgroundTask;
@property (nonatomic) BOOL delaySaving;
@property (readonly, nonatomic) BOOL isSharedContext;
@property (readonly) ICPersistentContainer *persistentContainer;
@property (retain, nonatomic) ICNote *currentNote;
@property (retain, nonatomic) NSError *databaseOpenError;
@property (nonatomic) BOOL databaseOpenFailedDueToLowDiskSpace;
@property (retain, nonatomic) NSTimer *updateAttachmentLocationsTimer;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (readonly, nonatomic) BOOL canBeSharedViaICloud;
@property (readonly, nonatomic) BOOL supportsEditingNotes;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (readonly, nonatomic) BOOL isModernCustomFolder;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSArray *visibleNotes;
@property (readonly, nonatomic) BOOL supportsDateHeaders;
@property (readonly, nonatomic) int dateHeadersType;
@property (readonly, nonatomic) BOOL isShowingDateHeaders;
@property (readonly, nonatomic) unsigned long long visibleNotesCount;
@property (readonly, copy, nonatomic) NSString *titleForNavigationBar;
@property (readonly, copy, nonatomic) NSString *titleForTableViewCell;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (readonly, nonatomic) NSArray *visibleSubFolders;
@property (copy, nonatomic) NSData *subFolderOrderMergeableData;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filenameFromFileWrapper:(id)a0;
+ (void)enableLocalAccount;
+ (void)useContainerNamed:(id)a0;
+ (void)crashThisApp;
+ (BOOL)legacyNotesDisabled;
+ (void)setLegacyNotesDisabled:(BOOL)a0;
+ (void)resetAppContainer;
+ (id)searchIndexerDataSource;
+ (id)performBackgroundTaskSerialQueue;
+ (void)resetAppState;
+ (BOOL)hasSharedContext;
+ (void)startSharedContextWithOptions:(unsigned long long)a0;
+ (BOOL)updateSharedStateFile:(id)a0 toState:(BOOL)a1 error:(id *)a2;
+ (id)workerManagedObjectContextForContainer:(id)a0;
+ (id)snapshotManagedObjectContextForContainer:(id)a0;
+ (void)markOldTrashedNotesForDeletionInContext:(id)a0;
+ (BOOL)isActive;
+ (BOOL)hasContextOptions:(unsigned long long)a0;

- (BOOL)save:(id *)a0;
- (id)objectID;
- (void)destroyPersistentStore;
- (void)saveSubFolderMergeableDataIfNeeded;
- (id)persistentContainerQueue;
- (void)addOrDeleteLocalAccountIfNecessary;
- (id)fetchedResultsControllerForFetchRequest:(id)a0 sectionNameKeyPath:(id)a1;
- (void)cloudContextFetchRecordChangeOperationDidFinish:(id)a0;
- (void)purgeEverything;
- (void)refreshPersistentStoresByAccountIdFromPersistentStores:(id)a0;
- (void)accountsDidChange:(id)a0;
- (BOOL)hasAnyContextOptions:(unsigned long long)a0;
- (id)customNoteSortTypeValue;
- (id)primaryICloudACAccount;
- (void)refreshAll;
- (void)createAdditionalPersistentStoresWithAccountIdentifiers:(id)a0 persistentContainer:(id)a1;
- (void)managedObjectContextUpdaterDidChangeObjectWithID:(id)a0;
- (id)newFetchedResultsControllerForAllAccounts;
- (void)startIndexingWithCoreSpotlightDelegateForDescription:(id)a0 coordinator:(id)a1;
- (id)defaultPersistentStoreFromPersistentStores:(id)a0;
- (void)applicationWillTerminate;
- (id)predicateForPinnedNotes;
- (id)workerManagedObjectContext;
- (id)snapshotManagedObjectContext;
- (id)persistentStoreCoordinator;
- (id)storeFilenameForAccountIdentifier:(id)a0;
- (void)setupTrashDeletionTimer;
- (BOOL)recoverFromSaveError;
- (BOOL)mergeWithSubFolderMergeableData:(id)a0;
- (void).cxx_destruct;
- (id)allICloudACAccounts;
- (void)reloadPersistentContainer;
- (BOOL)save;
- (void)managedObjectContextDidSave:(id)a0;
- (BOOL)saveImmediately;
- (id)inMemoryPersistentStoreFromPersistentStores:(id)a0;
- (void)applyDateHeadersType:(int)a0;
- (void)managedObjectContextUpdaterDidMerge:(id)a0;
- (void)cleanupAdditionalPersistentStores;
- (void)setupCrossProcessChangeCoordinator;
- (void)updateAccounts;
- (void)updateSubFolderMergeableDataChangeCount;
- (id)predicateForVisibleNotes;
- (void)clearPersistentContainer;
- (id)predicateForSearchableAttachments;
- (void)performSnapshotBackgroundTask:(id /* block */)a0;
- (id)persistentStoreForAccountID:(id)a0;
- (void)performBackgroundTask:(id /* block */)a0;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (id)predicateForSearchableNotes;
- (void)dealloc;
- (void)loadAdditionalPersistentStores;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)createAdditionalPersistentStoresWithAccountIdentifiers:(id)a0 completionBlock:(id /* block */)a1;
- (void)startSearchIndexerChangeObservingIfNecessary;
- (void)deleteEverything;
- (void)postMoveUpdateChangeCountForNote:(id)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)saveAndClearDecryptedDataIfNecessary;
- (BOOL)noteIsVisible:(id)a0;
- (BOOL)hasContextOptions:(unsigned long long)a0;
- (void)purgeDeletedObjectsInManagedObjectContext:(id)a0;

@end
