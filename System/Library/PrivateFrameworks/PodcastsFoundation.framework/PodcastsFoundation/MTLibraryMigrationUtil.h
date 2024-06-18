@interface MTLibraryMigrationUtil : NSObject

+ (BOOL)needsImageStoreMigration;
+ (BOOL)needsDataMigration;
+ (BOOL)isMomCompatible:(id)a0;
+ (void)setLibraryImageStoreType:(id)a0;
+ (BOOL)needsCoreDataMigration;
+ (id)libraryImageStoreType;
+ (BOOL)isNewInstall;
+ (BOOL)createPersistentStoreForModel:(id)a0 attemptMigration:(BOOL)a1;

@end
