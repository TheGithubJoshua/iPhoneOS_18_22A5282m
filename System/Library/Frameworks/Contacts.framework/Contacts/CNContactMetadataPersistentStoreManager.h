@class NSURL, NSPersistentContainer, NSObject;
@protocol OS_os_log;

@interface CNContactMetadataPersistentStoreManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (readonly, nonatomic) NSURL *storeLocation;
@property (readonly, nonatomic) NSPersistentContainer *container;

+ (id)createPersistentContainer;
+ (id)createModel;
+ (id)currentManagedObjectModel;
+ (id)defaultStoreLocation;

- (id)storeDescription;
- (id)init;
- (id)createManagedObjectContext;
- (id)persistentStoreCoordinator;
- (void).cxx_destruct;
- (BOOL)createStoreDirectoryIfNeeded:(id *)a0;
- (id)initWithStoreLocation:(id)a0;
- (BOOL)performWorkWithManagedObjectContext:(id /* block */)a0 error:(id *)a1;
- (BOOL)setupIfNeeded:(id *)a0;

@end
