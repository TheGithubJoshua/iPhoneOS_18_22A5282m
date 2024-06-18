@class CKContainer, NSString, NSObject, NSPersistentContainer;
@protocol OS_dispatch_queue, SKADatabaseProvidingDelegate;

@interface SKADatabaseProvider : NSObject <SKADatabaseProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *historyProcessingQueue;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) CKContainer *ckContainer;
@property (weak, nonatomic) id<SKADatabaseProvidingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (id)containerName;
- (id)cloudPersistentStoreDescription;
- (void)handlePersistentStoreRemoteChangeNotification:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForReceivedInvitation:(id)a0 managedObjectContext:(id)a1;
- (id)createCkContainer;
- (void)setLastProcessedPersistentHistoryToken:(id)a0;
- (id)localDatabaseFileURL;
- (id)createPersistentContainer;
- (BOOL)databaseHasBeenCreated;
- (void)processPersistentStoreRemoteChanges;
- (id)fileManager;
- (id)localPersistentStoreDescription;
- (id)extractModifiedChannelFromPersistentStoreRemoteChangeForChannel:(id)a0 managedObjectContext:(id)a1;
- (void).cxx_destruct;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(id /* block */)a0;
- (id)existingManagedObjectWithID:(id)a0 managedObjectContext:(id)a1;
- (id)newBackgroundContext;
- (id)ckContainerIdentifier;
- (id)lastProcessedPersistentHistoryTokenFileURL;
- (id)databaseDirectoryURL;
- (id)lastProcessedPersistentHistoryToken;
- (id)appTransactionAuthorName;
- (BOOL)overrideDeviceEncryptionCheck;
- (id)cloudDatabaseFileURL;

@end
