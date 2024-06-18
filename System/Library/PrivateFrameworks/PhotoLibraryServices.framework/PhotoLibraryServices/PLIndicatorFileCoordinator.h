@class NSString, PLPhotoLibraryPathManager;

@interface PLIndicatorFileCoordinator : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    int _activityIndicatorFid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityIndicatorLock;
    NSString *_resourceHoldingDirectoryPath;
}

+ (void)setSystemLibraryAvailableIndicatorState:(BOOL)a0;
+ (BOOL)systemLibraryAvailableIndicatorState;

- (void)writeDisableICloudPhotosMarker;
- (void)forceSoftResetSync;
- (BOOL)isEnableICloudPhotos;
- (BOOL)isUserPause;
- (void)updateICloudPhotosMarkerForEnable:(BOOL)a0;
- (id)initWithPathManager:(id)a0;
- (BOOL)clearPauseMarkerForReason:(short)a0;
- (BOOL)_canSetPauseMarkerWithUnpauseTime:(id)a0 onPauseData:(id)a1;
- (void)_writeDict:(id)a0 withFilename:(id)a1;
- (id)_pauseDataOnPath:(id)a0;
- (BOOL)isDisableICloudPhotos;
- (id)initWithResourceHoldingDirectoryPath:(id)a0;
- (void)getDownloadPhotoCount:(unsigned long long *)a0 downloadVideoCount:(unsigned long long *)a1;
- (void)setIsRebuildingPersons:(BOOL)a0;
- (void)setDupeAnalysisNeeded:(BOOL)a0;
- (void)deleteCPLDownloadFinishedMarkerFilePath;
- (BOOL)isICloudPhotosPaused;
- (void)setStreamsLibraryUpdatingExpired:(BOOL)a0;
- (id)_rebuildingPersonsIndicatorFilePath;
- (BOOL)isDupeAnalysisNeeded;
- (BOOL)isForceSoftResetSync;
- (void).cxx_destruct;
- (void)setDownloadCountsForImages:(unsigned long long)a0 videos:(unsigned long long)a1;
- (BOOL)hasItemToDownload;
- (id)unpauseTime;
- (void)setImageWriter:(id)a0 isBusy:(BOOL)a1 crashRecoverySupport:(id)a2;
- (void)createPauseMarkerWithUnpauseTime:(id)a0 reason:(short)a1;
- (void)clearWipeCPLOnOpen;
- (BOOL)isStreamsLibraryUpdatingExpired;
- (BOOL)needsRecoveryAfterCrashOptionallyRemoveAllIndicatorFiles:(BOOL)a0;
- (BOOL)isWipeCPLOnOpen;
- (void)_createPauseMarkerForReason:(short)a0 withUnpauseTime:(id)a1 withPath:(id)a2;
- (void)dealloc;
- (void)_setActivityIndicatorWithPath:(id)a0 flag:(BOOL)a1 crashRecovery:(id /* block */)a2;
- (void)setCreatingAssetIsBusy:(BOOL)a0;
- (void)logCloudServiceEnableEvent:(BOOL)a0 serviceName:(id)a1 reason:(id)a2;
- (id)_readPListWithFilename:(id)a0;
- (void)setWipeCPLOnOpen;
- (void)writeEnableICloudPhotosMarker;
- (void)setTakingPhotoIsBusy:(BOOL)a0;
- (short)currentPauseReason;
- (BOOL)isRebuildingPersons;
- (id)dupeAnalysisNeededFilePath;

@end
