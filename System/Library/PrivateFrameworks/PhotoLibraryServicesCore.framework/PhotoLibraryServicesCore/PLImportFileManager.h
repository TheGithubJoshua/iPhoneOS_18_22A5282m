@class PLPhotoLibraryPathManager;

@interface PLImportFileManager : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
}

+ (BOOL)isCameraDirectoryFolderName:(id)a0;
+ (BOOL)isImportDirectoryFolderName:(id)a0;

- (id)init;
- (id)_dcimDirectory;
- (id)urlForNewDCIMFolderWithFolderNumber:(long long *)a0;
- (id)initWithPathManager:(id)a0;
- (id)_DCIMFolderNameWithNumber:(long long)a0;
- (void).cxx_destruct;
- (id)nextAvailableFilePathInDirectory:(id)a0 withExtension:(id)a1;
- (BOOL)removeUnusedDCIMDirectoryAtPath:(id)a0;

@end
