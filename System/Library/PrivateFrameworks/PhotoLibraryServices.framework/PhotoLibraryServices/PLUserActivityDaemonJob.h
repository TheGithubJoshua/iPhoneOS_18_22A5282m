@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob

@property long long actionType;
@property (copy, nonatomic) NSString *albumUUID;
@property (retain, nonatomic) NSArray *assetUUIDs;
@property (nonatomic) long long cloudFeedContent;
@property (copy, nonatomic) NSString *suggestedCMMUUID;
@property (copy, nonatomic) NSString *momentShareUUID;

+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)a0;
+ (void)userDidViewSharedLibraryParticipantAssetTrashNotification;
+ (void)userDidLeavePhotosApplication;
+ (void)userDidReadCommentOnSharedAsset:(id)a0;
+ (void)userDidChangeStatusForMomentShare:(id)a0;
+ (void)userDidDeleteSharedAssets:(id)a0;
+ (void)userDidChangeStatusForSuggestedCMM:(id)a0;
+ (void)userDidNavigateIntoSharedAlbum:(id)a0;
+ (void)userDidViewCloudFeedContent:(long long)a0;
+ (id)newUserActivityDaemonJob;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)a0;
+ (void)userDidDeleteSharedAlbum:(id)a0;

- (void)encodeToXPCObject:(id)a0;
- (long long)daemonOperation;
- (void).cxx_destruct;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (id)initWithAssetsdClient:(id)a0;
- (void)runDaemonSide;
- (void)run;

@end
