@class NSString, PLLibraryServicesManager;

@interface PHAssetCrashRecoverySupport : NSObject <PLXPCUserInfo> {
    PLLibraryServicesManager *_libraryServicesManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isCrashRecoveryFilename:(id)a0;
- (void)recoverFromCrashIfNeeded;
- (BOOL)_isSafeToRecoverAfterCrashForCrashRecoveryFileURL:(id)a0;
- (id)persistentStoreCoordinator;
- (void).cxx_destruct;
- (void)_commitRequest:(id)a0 reply:(id /* block */)a1;
- (id)initWithLibraryServicesManager:(id)a0;
- (id)libraryServicesManager;

@end
