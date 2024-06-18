@class NSManagedObjectContext, NSPersistentContainer;

@interface VSPersistentContainer : NSObject

@property (retain, nonatomic) NSManagedObjectContext *viewContext;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly, nonatomic) long long modelVersion;

+ (id)legacyDirectoryURL;
+ (id)directoryURL;

- (id)init;
- (id)developerIdentityProviderFetchRequest;
- (id)initWithModelVersion:(long long)a0;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)migrateContainerIfNecessary;
- (id)insertDeveloperIdentityProviderInContext:(id)a0;

@end
