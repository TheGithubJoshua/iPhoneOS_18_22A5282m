@interface IMDCKCacheDeleteManager : NSObject

@property (nonatomic) BOOL alreadyCapturedErrorWithAutoBugCapture;
@property (nonatomic) BOOL allowsWritingToDisk;
@property (nonatomic, getter=isDeviceLowOnDiskSpace) BOOL deviceLowOnDiskSpace;
@property (nonatomic) BOOL isUsingCentralizedModel;
@property BOOL isUpdatingAttachmentFileSizes;

+ (id)sharedInstance;

- (id)init;
- (id)reportAvailableSpaceToBeDeleted:(id)a0 urgency:(int)a1;
- (void)_cacheDeleteSetUp;
- (long long)purgeAttachments:(long long)a0;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)a0;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)a0 diskVolume:(id)a1 urgency:(int)a2 requestedSize:(unsigned long long)a3;
- (id)_copyAttachmentRecord:(id)a0;
- (void)registerWithCacheDelete;
- (void)updateAttachmentFileSizesWithActivity:(id)a0;
- (BOOL)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)a0;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)a0 urgency:(int)a1;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)a0 urgency:(int)a1;
- (id)_ckUtilitiesSharedInstance;
- (id)_fileTransfersToDelete:(id)a0;
- (long long)purgeableAttachmentSize;
- (unsigned long long)_indexOfNextBatch:(id)a0 totalTransfers:(id)a1 indexOfTransfers:(unsigned long long)a2;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)a0 urgency:(int)a1;
- (void)_fetchTransfersFromCloudKit:(id)a0 indexOfTransfers:(unsigned long long)a1 numberOfBatchesToFetch:(unsigned long long)a2 activity:(id)a3 withCompletion:(id /* block */)a4;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)a0;
- (BOOL)canWriteFileOfEstimatedSize:(unsigned long long)a0 refreshCachedValue:(BOOL)a1;
- (void)resetAttachmentWatermark;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)a0 urgency:(int)a1;
- (BOOL)isUsingCentralizeCacheDelete;
- (BOOL)_shouldFetchNextBatch:(unsigned long long)a0 totalTransfers:(id)a1;
- (long long)_purgeableSpaceGivenUrgency:(int)a0;
- (id)_getIndexSetForBatch:(id)a0 indexOfTransfers:(unsigned long long)a1;
- (void)_postTransferInfoOfDeletedTransfers:(id)a0;
- (void)metricAttachmentsToPurge:(long long)a0 withActivity:(id)a1;
- (id)_fileTransfersToValidate:(id)a0;
- (BOOL)shouldDownloadAssetsOfSize:(unsigned long long)a0 refreshCachedValue:(BOOL)a1;
- (void)__wrapperAroundCacheDeletePurgeNotificationCallback:(id)a0;
- (void)_fetchTransfersFromCloudKit:(id)a0 withActivity:(id)a1;

@end
