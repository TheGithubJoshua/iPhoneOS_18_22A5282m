@interface MTConstants : NSObject

+ (BOOL)excludeDirectoryFromBackup:(id)a0;
+ (void)removeExcludeFromBackupFlagFromDirectoryIfNeeded:(id)a0;
+ (id)documentsDirectory;
+ (id)cachesDirectory;
+ (id)managedObjectModelDefinitionURL;
+ (void)_repairFilePermissionsIfNeeded;
+ (id)libraryDirectory;
+ (id)sharedCacheDirectory;
+ (id)_watchManagedAssetsDirectoryURL;
+ (void)repairPermissionsOfDirectoryIfNeeded:(id)a0;
+ (id)attributesForNewDirectory;
+ (id)sharedDocumentsDirectory;
+ (id)managedAssetsDirectoryURL;
+ (id)sharedContainerURL;

@end
