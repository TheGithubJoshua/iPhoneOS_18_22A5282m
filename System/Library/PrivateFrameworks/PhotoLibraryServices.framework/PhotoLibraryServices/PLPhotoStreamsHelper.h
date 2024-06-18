@interface PLPhotoStreamsHelper : NSObject {
    BOOL _appHasPolledOnceThisForegroundSession;
}

+ (BOOL)writeBreadcrumbContent:(id)a0 forHashString:(id)a1;
+ (id)iCloudServiceAccount;
+ (id)sharedPhotoStreamsHelper;
+ (void)deletePhotoStreamAssetsWithLibraryServiceManager:(id)a0 withReason:(id)a1 jobStreamID:(id)a2 completion:(id /* block */)a3;
+ (BOOL)photoStreamsEnabledForPhotoLibraryBundle:(id)a0;
+ (BOOL)_photoStreamsEnabled;
+ (BOOL)photoStreamsEnabledForPhotoLibraryURL:(id)a0;

- (void)_accountStoreDidChange:(id)a0;
- (id)init;
- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;
- (void)resume_mstreamd:(id)a0;
- (BOOL)removeBreadcrumbsForHashString:(id)a0;
- (void)initiateDeletionOfOriginalAssets:(id)a0;
- (long long)friendsLimit;
- (void)clearCachedAccountState;
- (id)psHashAsString:(id)a0;
- (BOOL)isValidUploadAsset:(id)a0 type:(id)a1 fileSize:(id)a2;
- (id)imageLimitsByAssetType;
- (void)fetchMPSStateWithLibrary:(id)a0 completion:(id /* block */)a1;
- (void)resetServerState;
- (struct CGSize { double x0; double x1; })derivedAssetSizeForMasterSizeWidth:(double)a0 height:(double)a1;
- (BOOL)dequeueAssetsForPSPublishing:(id)a0;
- (id)pathToSavedMetadataForAssetHash:(id)a0 streamID:(id)a1 createIntermediateDirs:(BOOL)a2;
- (id)lastPhotoStreamUpdateDate;
- (BOOL)enqueueAssetForPSPublishing:(id)a0 fullPath:(id)a1 fileSize:(id)a2 reenqueueCount:(unsigned long long)a3 publicGlobalUUID:(id *)a4;
- (id)derivedAssetForMasterAsset:(id)a0;
- (void)pollForNewSubscriptionContent;
- (void)initiateDeletionOfPhotoStreamAssets:(id)a0;
- (void)savePhotoStreamMetadata:(id)a0 forAsset:(id)a1;
- (id)temporaryPathForRecentlyUploadedAsset:(id)a0;
- (void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)a0 withBlock:(id /* block */)a1;
- (id)psHashForData:(id)a0;
- (long long)maxPixelSizeForDerivative;
- (void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)a0 forStreamID:(id)a1;
- (void)writeDidPublishBreadcrumbforHash:(id)a0 imagePath:(id)a1;
- (void)dealloc;
- (id)temporaryPathForConvertedAssetWithUUID:(id)a0;
- (id)photoStreamsPublishStreamID;
- (void)_clearPhotoStreamAccountSettings;
- (long long)imageLimitForOwnStream;
- (long long)imageLimitForFriendStream;
- (void)_appDidEnterBackground:(id)a0;
- (void)handleMPSStateIfNecessaryInLibrary:(id)a0;
- (long long)_serverIntegerLimitForKey:(id)a0 debugDefaultKey:(id)a1;
- (void)writeDidEnqueueBreadcrumbForHash:(id)a0 imagePath:(id)a1;
- (void)writeWillEnqueueBreadcrumbForHash:(id)a0 imagePath:(id)a1;
- (BOOL)shouldPublishScreenShots;
- (id)pause_mstreamd;

@end
