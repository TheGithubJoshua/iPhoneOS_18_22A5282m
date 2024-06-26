@class PLLibraryServicesManager;

@interface PLPhotoLibraryOpener : NSObject {
    BOOL _reportInProgressUpgrades;
}

@property (readonly) PLLibraryServicesManager *libraryServicesManager;

+ (BOOL)canAutomaticallyCreateLibrary;

- (BOOL)createPhotoLibraryDatabaseWithOptions:(id)a0 error:(id *)a1;
- (id)initWithLibraryServicesManager:(id)a0 reportInProgressUpgrades:(BOOL)a1;
- (BOOL)lightweightPermissionCheckWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)openPhotoLibraryDatabaseWithAutoUpgrade:(BOOL)a0 autoCreate:(BOOL)a1 error:(id *)a2;
- (BOOL)lightweightPermissionCheckWithPath:(id)a0 isDir:(BOOL)a1 error:(id *)a2;

@end
