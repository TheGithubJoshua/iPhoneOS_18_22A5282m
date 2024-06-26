@class MSASPersonModel, MSASAssetDownloader, MSBackoffManager, NSDictionary, NSObject, MSASAssetUploader, NSMutableArray, MSASPhoneInvitations, NSString, NSArray, MSASProtocol, MSAlbumSharingDaemon, MSImageScalingSpecification;
@protocol OS_dispatch_queue;

@interface MSASStateMachine : NSObject <MSBackoffManagerDelegate, MSASAssetUploaderDelegate, MSASAssetDownloaderDelegate> {
    int _commandState;
    MSASPersonModel *_model;
    NSString *_currentCommand;
    long long _currentCommandID;
    NSDictionary *_currentCommandParams;
    MSBackoffManager *_metadataBackoffManager;
    MSBackoffManager *_MMCSBackoffManager;
    MSASAssetUploader *_assetUploader;
    MSASAssetDownloader *_assetDownloader;
}

@property (nonatomic) BOOL isRetryingOutstandingActivities;
@property (retain, nonatomic, setter=_setAssetInfoToReauthForDownload:) NSMutableArray *_assetInfoToReauthForDownload;
@property (copy, nonatomic, setter=_setStopHandlerBlock:) id /* block */ _stopHandlerBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serverSideConfigQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic) BOOL hasShutDown;
@property (retain, nonatomic) NSDictionary *metadataBackoffManagerParameters;
@property (retain, nonatomic) NSDictionary *MMCSBackoffManagerParameters;
@property (copy, nonatomic) id /* block */ postCommandCompletionBlock;
@property (weak, nonatomic) MSAlbumSharingDaemon *daemon;
@property (nonatomic) int maxMetadataRetryCount;
@property (retain, nonatomic) NSDictionary *serverSideConfiguration;
@property (readonly, retain, nonatomic) NSString *serverSideConfigurationVersion;
@property (retain, nonatomic) MSASProtocol *protocol;
@property (retain, nonatomic) MSASPhoneInvitations *phoneInvitations;
@property (retain, nonatomic) NSString *focusAlbumGUID;
@property (retain, nonatomic) NSString *focusAssetCollectionGUID;
@property (readonly, retain, nonatomic) NSArray *derivativeSpecifications;
@property (readonly, retain, nonatomic) MSImageScalingSpecification *derivativeImageScalingSpecification;
@property (readonly, retain, nonatomic) MSImageScalingSpecification *thumbnailImageScalingSpecification;
@property (weak, nonatomic) id delegate;
@property (retain, nonatomic) NSString *personID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)retryOutstandingActivities;
- (id)_metadataBackoffManager;
- (id)memberQueueMetadataBackoffManager;
- (void)_updateAlbumDisposition:(int)a0 params:(id)a1;
- (void)refreshServerSideConfig;
- (void)workQueueApplyServerSideConfiguration;
- (id)init;
- (void)_removeSharingRelationshipsDisposition:(int)a0 params:(id)a1;
- (void)continueAddingAssetCollections:(id)a0 skipAssetCollections:(id)a1 toAlbum:(id)a2 info:(id)a3;
- (void)workQueueCheckForNextCommand;
- (void)checkForChangesResetSync:(BOOL)a0 info:(id)a1;
- (void)_subscribeToAlbumDisposition:(int)a0 params:(id)a1;
- (void)cancelOutstandingCommandsForAlbumWithGUID:(id)a0;
- (void)unsubscribeFromAlbum:(id)a0 info:(id)a1;
- (void)cancelOutstandingCommandsForAssetCollectionWithGUID:(id)a0;
- (void)setMultipleContributorsEnabled:(BOOL)a0 forAlbum:(id)a1 info:(id)a2 completionBlock:(id /* block */)a3;
- (void)workQueueCancelAllCommandsFilteredByAlbumGUID:(id)a0 assetCollectionGUID:(id)a1;
- (id)_assetUploader;
- (void)scheduleEvent:(id)a0 assetCollectionGUID:(id)a1 albumGUID:(id)a2 info:(id)a3;
- (void)shutDownCompletionBlock:(id /* block */)a0;
- (void)deleteComments:(id)a0 inAssetCollection:(id)a1 inAlbum:(id)a2 info:(id)a3;
- (void)stopAssetDownloadsCompletionBlock:(id /* block */)a0;
- (id)_URLReauthFailureWithUnderlyingError:(id)a0;
- (void)addAssetCollections:(id)a0 toAlbum:(id)a1 info:(id)a2;
- (void)_checkForChangesDisposition:(int)a0 params:(id)a1;
- (void)workQueueDidFinishCommandDueToCancellation;
- (void)_createAlbumDisposition:(int)a0 params:(id)a1;
- (void)acceptInvitationWithToken:(id)a0 info:(id)a1 completionBlock:(id /* block */)a2;
- (void)_didFinishCheckingUpdatesInAlbumsDisposition:(int)a0 params:(id)a1;
- (BOOL)hasEnqueuedActivities;
- (void)workQueueDidFinishCommandByLeavingCommandInQueue;
- (void)retrieveAssets:(id)a0 inAlbumWithGUID:(id)a1;
- (void)serverSideQueueSetServerSideConfiguration:(id)a0;
- (void)workQueueRetryOutstandingActivities;
- (void)markAsSpamInvitationForToken:(id)a0 info:(id)a1;
- (void)setAssetCollectionSyncedState:(id)a0 forAssetCollection:(id)a1 album:(id)a2 info:(id)a3;
- (void)workQueuePerformNextCommand;
- (void)workQueueRefreshServerSideConfig;
- (void)_checkForAlbumSyncedStateDisposition:(int)a0 params:(id)a1;
- (id)latestNextActivityDate;
- (void)checkForAlbumSyncedStateChangesInAlbums:(id)a0 info:(id)a1;
- (id)_model;
- (void)_addAssetCollectionsDisposition:(int)a0 params:(id)a1;
- (void)start;
- (void)checkForAssetCollectionUpdates:(id)a0 inAlbum:(id)a1 info:(id)a2;
- (void)subscribeToAlbum:(id)a0 info:(id)a1;
- (void)removeSharingRelationships:(id)a0 fromOwnedAlbum:(id)a1 info:(id)a2;
- (void)_sendGetServerSideConfigurationDisposition:(int)a0 params:(id)a1;
- (void)_checkForUpdatesInAlbumDisposition:(int)a0 params:(id)a1;
- (id)_stoppedError;
- (void)_addSharingRelationshipsDisposition:(int)a0 params:(id)a1;
- (void)addSharingRelationships:(id)a0 toOwnedAlbum:(id)a1 info:(id)a2;
- (void)_sendGetUploadTokensDisposition:(int)a0 params:(id)a1;
- (void)setRootCtagFromPendingRootCtag;
- (void)checkForChangesIfMissingRootCtag;
- (void)_markAsSpamInvitationForAlbumDisposition:(int)a0 params:(id)a1;
- (void)updateAlbum:(id)a0 updateAlbumFlags:(int)a1 info:(id)a2;
- (id)initWithPersonID:(id)a0;
- (void)setPersistentObject:(id)a0 forKey:(id)a1;
- (void)_deleteAssetFilesInAssetCollections:(id)a0;
- (void).cxx_destruct;
- (void)_continueAddingAssetCollectionsDisposition:(int)a0 params:(id)a1;
- (id)_assetDownloader;
- (void)MSBackoffManagerDidUpdateNextExpiryDate:(id)a0;
- (id)persistentObjectForKey:(id)a0;
- (id)initWithPersonID:(id)a0 eventQueue:(id)a1;
- (void)addComments:(id)a0 toAssetCollection:(id)a1 inAlbum:(id)a2 info:(id)a3;
- (void)_unsubscribeFromAlbumDisposition:(int)a0 params:(id)a1;
- (BOOL)isInRetryState;
- (void)workQueueDidFailToFinishCommandDueToTemporaryError:(id)a0;
- (void)cancelCompletionBlock:(id /* block */)a0;
- (void)_deleteCommentDisposition:(int)a0 params:(id)a1;
- (id)serverSideQueueServerSideConfiguration;
- (void)_scheduleEventDisposition:(int)a0 params:(id)a1;
- (id)_serverSideConfigDictionaryByApplyingDefaultsToDictionary:(id)a0;
- (void)purgeEverythingCompletionBlock:(id /* block */)a0;
- (void)_setAssetCollectionSyncedStateDisposition:(int)a0 params:(id)a1;
- (void)videoURLForAssetCollection:(id)a0 inAlbum:(id)a1 completionBlock:(id /* block */)a2;
- (void)_getAccessControlsDisposition:(int)a0 params:(id)a1;
- (void)_cancelOutstandingCommandsDisposition:(int)a0 params:(id)a1;
- (void)workQueueDidFinishCommandByReplacingCurrentCommandWithCommand:(id)a0 params:(id)a1 personID:(id)a2 albumGUID:(id)a3 assetCollectionGUID:(id)a4;
- (void)setAlbumSyncedState:(id)a0 forAlbum:(id)a1 info:(id)a2;
- (void)_checkForCommentChangesDisposition:(int)a0 params:(id)a1;
- (id)_assetCollectionFailedError;
- (void)getAccessControlsForAlbums:(id)a0 info:(id)a1;
- (void)setPendingRootCtag:(id)a0;
- (void)checkForUpdatesInAlbums:(id)a0 resetSync:(BOOL)a1 info:(id)a2;
- (void)markAsSpamInvitationForAlbum:(id)a0 invitationGUID:(id)a1 info:(id)a2;
- (void)_sendUploadCompleteDisposition:(int)a0 params:(id)a1;
- (void)workQueueScheduleReauthForAssets:(id)a0 inAlbum:(id)a1;
- (id)serverCommunicationBackoffDate;
- (void)_deleteAssetFilesInAssetCollection:(id)a0;
- (void)createAlbum:(id)a0 info:(id)a1;
- (id)_assetCollectionRejectedError;
- (void)MSASAssetDownloader:(id)a0 willBeginBatchCount:(unsigned long long)a1;
- (void)_deleteAssetCollectionsDisposition:(int)a0 params:(id)a1;
- (void)setPublicAccessEnabled:(BOOL)a0 forAlbum:(id)a1 info:(id)a2 completionBlock:(id /* block */)a3;
- (BOOL)workQueueEndCommandWithError:(id)a0 command:(id)a1 params:(id)a2 albumGUID:(id)a3 assetCollectionGUID:(id)a4;
- (id)_createCopiedAssetsInAssetCollections:(id)a0;
- (void)_deleteAlbumDisposition:(int)a0 params:(id)a1;
- (id)rootCtagToCheckForChanges;
- (void)videoURLsForAssetCollection:(id)a0 forMediaAssetType:(unsigned long long)a1 inAlbum:(id)a2 completionBlock:(id /* block */)a3;
- (void)_checkForAssetCollectionUpdatesDisposition:(int)a0 params:(id)a1;
- (void)_sendReauthorizeAssetsForDownloadDisposition:(int)a0 params:(id)a1;
- (void)_markAsSpamInvitationForTokenDisposition:(int)a0 params:(id)a1;
- (void)workQueueUpdateNextActivityDate;
- (id)_canceledError;
- (void)deleteAlbum:(id)a0 info:(id)a1;
- (void)_addCommentDisposition:(int)a0 params:(id)a1;
- (void)checkForCommentChanges:(id)a0 inAlbumWithGUID:(id)a1;
- (void)MSASAssetDownloader:(id)a0 didFinishDownloadingAsset:(id)a1 inAlbumGUID:(id)a2 error:(id)a3;
- (void)deleteAssetCollections:(id)a0 inAlbum:(id)a1 info:(id)a2;
- (void)MSASAssetDownloaderDidFinishBatch:(id)a0;
- (void)_getAlbumURLDisposition:(int)a0 params:(id)a1;
- (void)_workQueueEmptyFileTransferQueuesCompletionBlock:(id /* block */)a0;
- (void)_sendPutAssetCollectionsDisposition:(int)a0 params:(id)a1;
- (void)workQueueDidFinishCommand;
- (void)MSASAssetUploader:(id)a0 didFinishUploadingAssetCollection:(id)a1 intoAlbum:(id)a2 error:(id)a3;
- (void)_setAlbumSyncedStateDisposition:(int)a0 params:(id)a1;
- (void)validateInvitationForAlbum:(id)a0 completionBlock:(id /* block */)a1;
- (void)workQueueCancelCompletionBlock:(id /* block */)a0;

@end
