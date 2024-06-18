@class NSManagedObjectContext;

@interface HCDatabaseManager : NSObject {
    int _contentProtectionNotifyToken;
}

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;

- (id)init;
- (id)containerIdentifier;
- (void)logMessage:(id)a0;
- (void).cxx_destruct;
- (id)apsConnectionMachServiceName;
- (void)dealloc;
- (id)cloudKitContainer;
- (void)setupDatabase;
- (id)databaseFilePath;
- (id)managedObjectModelName;
- (void)contentDidUpdate:(id)a0;
- (BOOL)saveIfPossible;
- (void)storesWillChange:(id)a0;

@end
