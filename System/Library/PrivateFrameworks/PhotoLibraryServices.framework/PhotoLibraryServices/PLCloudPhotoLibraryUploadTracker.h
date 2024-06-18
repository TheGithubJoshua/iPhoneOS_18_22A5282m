@class NSMutableSet, NSMutableDictionary;

@interface PLCloudPhotoLibraryUploadTracker : NSObject {
    unsigned long long _totalNumberOfPushedMasters;
    unsigned long long _totalSizeOfPushedOriginals;
    NSMutableSet *_mastersToUpload;
    NSMutableSet *_deferredAssetsToUpload;
    NSMutableDictionary *_trackedResourceProgressSize;
    NSMutableDictionary *_trackedResourceMasterUploaded;
    NSMutableDictionary *_masterRecordUploadState;
    NSMutableSet *_mastersToUploadTrackingSize;
}

@property unsigned long long totalNumberOfUnpushedMasters;
@property unsigned long long totalNumberOfUploadedMasters;
@property unsigned long long totalNumberOfDeferredAssets;
@property unsigned long long totalSizeOfUnpushedOriginals;
@property unsigned long long totalUploadedOriginalSize;

- (id)init;
- (BOOL)_isMasterRecordUploaded:(id)a0;
- (void)resetIfNeededWithLibrary:(id)a0 isInitialUpload:(BOOL)a1;
- (void)setupFromLibrary:(id)a0 isInitialUpload:(BOOL)a1;
- (void)addSizeForUnpushedOriginals:(unsigned long long)a0 forMasterScopedIdentifier:(id)a1 forAssetScopedIdentifier:(id)a2;
- (void)trackDeferredAssetForScopedIdentifier:(id)a0;
- (id)currentStateForDebug;
- (void)uploadFinishedForMasterRecordWithScopedIdentifier:(id)a0 didUpdateStatus:(BOOL *)a1;
- (void)_setBatchUploadStateForTrackedMasters:(id)a0 withState:(BOOL)a1;
- (id)_constructKeyForScopedIdentifier:(id)a0 type:(int)a1;
- (void).cxx_destruct;
- (BOOL)_trackingScopedIdentifier:(id)a0;
- (void)setupFromCPLManager:(id)a0;
- (void)dealloc;
- (void)_stopTrackingResourceWithScopedIdentifier:(id)a0 fileSize:(unsigned long long)a1 type:(int)a2;
- (void)updateForMasterResourceUploadWithScopedIdentifier:(id)a0 progress:(float)a1 fileSize:(unsigned long long)a2 type:(int)a3;
- (void)reset;
- (void)uploadFinishedForMasterResourceWithScopedIdentifier:(id)a0 fileSize:(unsigned long long)a1 type:(int)a2 withError:(BOOL)a3;
- (void)stopTrackingMaster:(id)a0;

@end
