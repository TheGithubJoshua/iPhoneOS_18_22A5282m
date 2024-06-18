@interface DEUtils : NSObject

+ (id)enumeratorForAllItems:(id)a0;
+ (id)tarGzForDirectoryUrl:(id)a0 validatesUrl:(BOOL)a1;
+ (id)copyPath:(id)a0 toDestinationDir:(id)a1 zipped:(BOOL)a2;
+ (id)componentsByRemovingComponentsBeforeComponent:(id)a0 sourceURL:(id)a1 keepingComponent:(BOOL)a2;
+ (id)copyItem:(id)a0 toDestinationDir:(id)a1 zipped:(BOOL)a2;
+ (unsigned long long)getDirectorySize:(id)a0;
+ (id)processErrorResponse:(id)a0;
+ (id)tarGzForDirectoryUrl:(id)a0;
+ (id)copyPaths:(id)a0 toDestinationDir:(id)a1 withZipName:(id)a2;
+ (id)findAllfiles:(id)a0;
+ (id)dirForTarGz:(id)a0;
+ (BOOL)copyFile:(id)a0 toDir:(id)a1;
+ (id)userLibraryDirectoryForApp:(id)a0;
+ (id)uniqueTemporaryDirectory;
+ (id)lsDir:(id)a0 sorted:(BOOL)a1;
+ (void)removeFile:(id)a0;
+ (unsigned long long)getFileSystemItemSize:(id)a0;
+ (id)createUserOwnedDirectoryAtUrl:(id)a0;
+ (BOOL)copyAllFilesFromDir:(id)a0 toDir:(id)a1;
+ (id)applicationSupportDirectoryForApp:(id)a0;
+ (id)createDirectoryWithClassCDataProtection:(id)a0;
+ (void)excludeFromBackup:(id)a0;
+ (id)copyAndReturn:(id)a0 toDir:(id)a1;
+ (id)findAllItems:(id)a0 includeDirs:(BOOL)a1;
+ (id)findEntriesInDirectory:(id)a0 createdAfter:(id)a1 matchingPattern:(id)a2;
+ (BOOL)isValidDirectory:(id)a0;
+ (id)uniqueDateString;
+ (id)copyAndReturn:(id)a0 toDir:(id)a1 withNewFileName:(id)a2;
+ (id)lsDir:(id)a0;
+ (id)pathComponentsInURL:(id)a0 removingBaseURLComponents:(id)a1 keepingFirstComponent:(BOOL)a2;
+ (BOOL)copyAllFilesFromDir:(id)a0 toDir:(id)a1 keepSourceDir:(BOOL)a2;
+ (id)urlByRemovingComponentsBefore:(id)a0 source:(id)a1 keepComponent:(BOOL)a2;

@end
