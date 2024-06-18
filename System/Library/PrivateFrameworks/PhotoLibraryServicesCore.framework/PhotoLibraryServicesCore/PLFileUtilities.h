@interface PLFileUtilities : NSObject

+ (id)descriptionForFileIngestionType:(long long)a0;
+ (id)proxyLockFilePathForDatabasePath:(id)a0;
+ (BOOL)removeDisconnectedSQLiteDatabaseFileWithPath:(id)a0 error:(id *)a1;
+ (BOOL)removeFilesInDirectoryAtURL:(id)a0 withPrefix:(id)a1 error:(id *)a2 progress:(id /* block */)a3;
+ (BOOL)createDirectoryAtPath:(id)a0 error:(id *)a1 usingFileManager:(id)a2;
+ (long long)fileLengthForFilePath:(id)a0;
+ (id)realSystemPhotoLibraryPath;
+ (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;
+ (id)redactedDescriptionForPath:(id)a0;
+ (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
+ (BOOL)secureMoveItemAtURL:(id)a0 toURL:(id)a1 capabilities:(id)a2 error:(id *)a3;
+ (id)embeddedHomeDirectory;
+ (id)fileManager;
+ (BOOL)ingestItemAtURL:(id)a0 toURL:(id)a1 type:(long long)a2 options:(unsigned long long)a3 capabilities:(id)a4 error:(id *)a5;
+ (id)_defaultSystemLibraryPath;
+ (BOOL)createDirectoryAtPath:(id)a0 error:(id *)a1;
+ (BOOL)stripImmutableFlagIfNecessaryFromFileAtPath:(id)a0;
+ (BOOL)filePath:(id)a0 hasPrefix:(id)a1;
+ (BOOL)URLIsInTrash:(id)a0;
+ (id)defaultSystemPhotoDataDirectory;
+ (id)realPathForPath:(id)a0 error:(id *)a1;
+ (id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)a0 databaseName:(id)a1;
+ (BOOL)cloneFileAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
+ (long long)directoryEntryCountAtURL:(id)a0 error:(id *)a1;
+ (id)defaultSystemLibraryURL;
+ (id)defaultSystemPhotoDataMiscDirectory;
+ (id)defaultSystemPhotoDCIMDirectory;
+ (id)systemLibraryURL;
+ (BOOL)changeFileOwnerToMobileAtPath:(id)a0 error:(id *)a1 usingFileManager:(id)a2;
+ (BOOL)removeItemAtURL:(id)a0 error:(id *)a1;
+ (BOOL)filePath:(id)a0 isEqualToFilePath:(id)a1;
+ (BOOL)changeFileOwnerToMobileAtPath:(id)a0 error:(id *)a1;
+ (id)_mobileOwnerAttributes;
+ (BOOL)stripExtendedAttributesFromFileAtURL:(id)a0 inDomain:(id)a1 error:(id *)a2;
+ (void)calculateTotalSizeOfFilesAtPath:(id)a0 result:(id /* block */)a1;
+ (BOOL)isFileExistsError:(id)a0;
+ (id)redactedDescriptionForFileURL:(id)a0;
+ (BOOL)hasDiskSpaceToCopyFileAtURL:(id)a0;
+ (BOOL)fileURL:(id)a0 isEqualToFileURL:(id)a1;
+ (BOOL)filePathIsSubpathOfSyncRoot:(id)a0;
+ (id)defaultSystemPhotoDataCPLDirectory;

@end
