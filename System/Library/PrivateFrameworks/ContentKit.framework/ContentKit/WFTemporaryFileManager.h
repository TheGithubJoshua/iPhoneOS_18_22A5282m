@interface WFTemporaryFileManager : NSObject

+ (void)setUpDirectories;
+ (void)configureBackupFlagAtURL:(id)a0;
+ (id)createSharedTemporaryFileWithFilename:(id)a0;
+ (id)topLevelTemporaryDirectoryURL;
+ (id)proposedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0 isDirectory:(BOOL)a1;
+ (id)createTemporaryDirectoryWithFilename:(id)a0;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1 isDirectory:(BOOL)a2;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (void)markDirectoryAsPurgeableAtURL:(id)a0;
+ (id)proposedTemporaryFileURLForFilename:(id)a0;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)a0;
+ (id)appGroupIdentifier;
+ (id)temporaryDirectoryURL;
+ (void)configureBackupFlagIfNecessary;
+ (id)createUniqueDirectoryInDirectory:(id)a0;
+ (id)createTemporaryDirectoryWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)a0 error:(id *)a1;
+ (id)createTemporaryFileWithFilename:(id)a0;
+ (void)configureFileProtectionAtPath:(id)a0;
+ (id)createTemporaryFileWithFilename:(id)a0 inDirectory:(id)a1;
+ (id)sharedTemporaryDirectoryURL;
+ (void)createSharedDirectoryIfNecessary;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)a0;
+ (id)sharedAppGroupDirectoryURL;
+ (id)proposedFileURLForFilename:(id)a0 atTheRootOfDirectory:(id)a1;
+ (void)clearTemporaryFiles;
+ (id)proposedFileURLForFilename:(id)a0 inDirectory:(id)a1 isDirectory:(BOOL)a2;

@end
