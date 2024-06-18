@class NSMutableDictionary, PHMomentShare, NSDictionary, PHAssetCreationPhotoStreamPublishingRequest, NSMutableArray, PHAssetCreationDerivativeContext, PHAssetCreationAdjustmentBakeInOptions, PHRelationshipChangeRequestHelper, NSString, PLIndicatorFileCoordinator, NSManagedObjectID, PHAssetCreationMetadataCopyOptions, NSNumber, PHAssetResourceBag;

@interface PHAssetCreationRequest : PHAssetChangeRequest <PHInsertChangeRequest> {
    NSMutableArray *_assetResources;
    NSMutableDictionary *_movedFiles;
    BOOL _duplicateAllowsPrivateMetadata;
    BOOL _shouldCreateScreenshot;
    NSString *_resourceHoldingDirectoryPath;
    PLIndicatorFileCoordinator *_fileCoordinator;
    PHAssetCreationDerivativeContext *_derivativeContext;
}

@property (retain, nonatomic, setter=_setPhotoStreamPublishingRequest:) PHAssetCreationPhotoStreamPublishingRequest *_photoStreamPublishingRequest;
@property (readonly, nonatomic) NSDictionary *_movedFiles;
@property (nonatomic, setter=_setDuplicateAllowsPrivateMetadata:) BOOL duplicateAllowsPrivateMetadata;
@property (nonatomic, getter=_shouldCreateScreenshot, setter=_setShouldCreateScreenshot:) BOOL shouldCreateScreenshot;
@property (retain, nonatomic, getter=_limitedLibraryFetchFilterObjectID, setter=_setLimitedLibraryFetchFilterObjectID:) NSManagedObjectID *limitedLibraryFetchFilterObjectID;
@property (retain, nonatomic) NSNumber *assetExistsWithSyndicationIdentifier;
@property (retain, nonatomic) NSString *syndicationIdentifier;
@property (nonatomic) BOOL crashBeforeCreation;
@property (retain, nonatomic) PHAssetResourceBag *assetResourceBag;
@property (nonatomic) int retryCount;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *momentShareHelper;
@property (retain, nonatomic, setter=_setDuplicateAssetIdentifier:) NSString *duplicateAssetIdentifier;
@property (nonatomic, setter=_setDuplicateAssetPhotoLibraryType:) unsigned short duplicateAssetPhotoLibraryType;
@property (nonatomic, setter=_setDuplicateStillSourceTime:) struct { long long value; int timescale; unsigned int flags; long long epoch; } duplicateStillSourceTime;
@property (nonatomic, setter=_setDuplicateLivePhotoAsStill:) BOOL duplicateLivePhotoAsStill;
@property (nonatomic, setter=_setDuplicateAsOriginal:) BOOL duplicateAsOriginal;
@property (nonatomic, setter=_setDuplicateSinglePhotoFromBurst:) BOOL duplicateSinglePhotoFromBurst;
@property (nonatomic, setter=_setDuplicateAsAlternateAsset:) BOOL duplicateAsAlternateAsset;
@property (copy, nonatomic, setter=_setAdjustmentBakeInOptions:) PHAssetCreationAdjustmentBakeInOptions *adjustmentBakeInOptions;
@property (copy, nonatomic, setter=_setMetadataCopyOptions:) PHAssetCreationMetadataCopyOptions *metadataCopyOptions;
@property (readonly, nonatomic) NSString *forcePairingIdentifier;
@property (nonatomic) short importedBy;
@property (retain, nonatomic) PHMomentShare *momentShare;
@property (readonly, nonatomic) NSString *momentShareUUID;
@property (nonatomic) unsigned short bundleScope;
@property (retain, nonatomic) NSDictionary *customAssetProperties;
@property (nonatomic, setter=_setUseRecoverableStagingDirectory:) BOOL useRecoverableStagingDirectory;
@property (retain, nonatomic) NSString *importSessionID;
@property (retain, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *importedByBundleIdentifier;
@property (nonatomic) BOOL createAsCompanionSyncedAsset;
@property (readonly) BOOL isNewRequest;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)creationRequestForAsset;
+ (id)creationRequestForAssetFromVideoComplementBundle:(id)a0;
+ (id)creationRequestForAssetWithSyndicationIdentifier:(id)a0;
+ (id)creationRequestForAssetFromGuestAsset:(id)a0 checkForMomentShareAsset:(BOOL)a1;
+ (id)_creationRequestForAssetUsingUUID:(id)a0;
+ (id)_imageIOThumbnailCreationOptionsFromDerivativeContext:(id)a0;
+ (id)_jpegDataFromRAWData:(id)a0 derivativeContext:(id)a1;
+ (long long)_originalResourceTypeFromAdjustedResourceType:(long long)a0 sourceAssetIsLoopingVideo:(BOOL)a1;
+ (BOOL)_shouldGenerateThumbnailsDuringCreationForImageSource:(struct CGImageSource { } *)a0 contentType:(id)a1;
+ (id)_uuidForAssetWithSyndicationIdentifier:(id)a0 inLibrary:(id)a1;
+ (id)creationRequestForAssetCopyFromAsset:(id)a0;
+ (id)creationRequestForAssetCopyFromAsset:(id)a0 options:(id)a1;
+ (id)creationRequestForAssetFromAssetBundle:(id)a0;
+ (id)creationRequestForAssetFromGuestAsset:(id)a0;
+ (id)creationRequestForAssetFromImage:(id)a0;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)a0;
+ (id)creationRequestForAssetFromImageData:(id)a0;
+ (id)creationRequestForAssetFromImageData:(id)a0 options:(id)a1;
+ (id)creationRequestForAssetFromImageData:(id)a0 usingUUID:(id)a1;
+ (id)creationRequestForAssetFromScreenshotImage:(id)a0;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)a0;
+ (id)creationRequestForAssetWithOptions:(id)a0;
+ (id)creationRequestForAssetWithUUID:(id)a0;
+ (id)creationRequestForAssetWithUUID:(id)a0 options:(id)a1;
+ (BOOL)supportsAssetResourceTypes:(id)a0;
+ (BOOL)supportsImportAssetResourceTypes:(id)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)isNew;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addResourceWithType:(long long)a0 fileURL:(id)a1 options:(id)a2;
- (BOOL)isDuplicateAssetCreationRequest;
- (id)initWithHelper:(id)a0;
- (BOOL)_accessWritableURLForUUID:(id)a0 imageUTI:(id)a1 originalFilename:(id)a2 photoLibrary:(id)a3 withHandler:(id /* block */)a4;
- (void)_addResourceWithType:(long long)a0 data:(id)a1 orFileURL:(id)a2 options:(id)a3;
- (void)_copyMediaAnalysisProperties:(id)a0;
- (void)_copyMetadataFromAsset:(id)a0;
- (void)_copyUserSpecificMetadataFromAsset:(id)a0;
- (BOOL)_createAssetAsAdjusted:(id)a0 fromValidatedResources:(id)a1 mainFileMetadata:(id)a2 error:(id *)a3;
- (BOOL)_createAssetAsPhotoIris:(id)a0 fromValidatedResources:(id)a1 mainFileMetadata:(id)a2 error:(id *)a3;
- (id)_createAssetFromValidatedResources:(id)a0 withUUID:(id)a1 assetAlreadyExistsAsPlaceholder:(BOOL)a2 inPhotoLibrary:(id)a3 error:(id *)a4;
- (BOOL)_createAudioResourceForAsset:(id)a0 fromValidatedResources:(id)a1 photoLibrary:(id)a2 error:(id *)a3;
- (BOOL)_createOriginalResourceForAsset:(id)a0 fromValidatedResource:(id)a1 resourceType:(unsigned int)a2 photoLibrary:(id)a3 destinationURL:(id)a4 error:(id *)a5;
- (BOOL)_createRAWSidecarForAsset:(id)a0 fromValidatedResources:(id)a1 mainFileMetadata:(id)a2 photoLibrary:(id)a3 error:(id *)a4;
- (BOOL)_createSocResourceForAsset:(id)a0 fromValidatedResources:(id)a1 photoLibrary:(id)a2 error:(id *)a3;
- (BOOL)_createXmpResourceForAsset:(id)a0 fromValidatedResources:(id)a1 photoLibrary:(id)a2 error:(id *)a3;
- (void)_didMoveFileFromURL:(id)a0 toURL:(id)a1;
- (id)_externalLivePhotoResourceForAsset:(id)a0;
- (id)_filteredImagePropertiesByConditionallyRemovingLivePhotoIdentifiersFromSourceImageProperties:(id)a0;
- (struct CGImageSource { } *)_imageSourceForDerivatives;
- (id)_ingestOriginalFromSrcURL:(id)a0 toDstURL:(id)a1 useSecureMove:(BOOL)a2 resource:(id)a3 resourceType:(unsigned int)a4 asset:(id)a5 error:(id *)a6;
- (BOOL)_ingestOriginalInPlaceSrcURL:(id)a0 dstURL:(id)a1 asset:(id)a2 error:(id *)a3;
- (id)_managedAssetFromPrimaryResourceData:(id)a0 validatedResources:(id)a1 withUUID:(id)a2 photoLibrary:(id)a3 mainFileMetadata:(id *)a4 getImageSource:(struct CGImageSource **)a5 imageData:(id *)a6;
- (long long)_mediaTypeForCreatedAsset;
- (id)_mutableMomentShareObjectIDsAndUUIDs;
- (BOOL)_populateDuplicatingAssetCreationRequest:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (void)_prepareMomentShareHelperIfNeeded;
- (void)_resetMovedFiles;
- (id)_resolveResourceHoldingDirectoryPath;
- (BOOL)_restoreMovedFilesOnFailure;
- (short)_savedAssetTypeForAsset;
- (id)_secureMove:(BOOL)a0 assetResource:(id)a1 photoLibrary:(id)a2 error:(id *)a3;
- (id)_secureMove:(BOOL)a0 fileAtURL:(id)a1 toURL:(id)a2 capabilities:(id)a3 error:(id *)a4;
- (void)_setCreatingAssetIsBusy:(BOOL)a0;
- (void)_setupDerivativeCreationContextForAsset:(id)a0 imageSource:(struct CGImageSource { } *)a1 imageData:(id)a2;
- (void)_updateMutationsForDuplicatingPrivateMetadataFromAsset:(id)a0;
- (BOOL)_validateNewObjectUUID:(id)a0 inPhotoLibrary:(id)a1 error:(id *)a2;
- (BOOL)_writeDataToDisk:(id)a0 imageUTIType:(id)a1 exifProperties:(id)a2 mainFileURL:(id)a3 thumbnailData:(id)a4;
- (void)addResourceWithType:(long long)a0 data:(id)a1 options:(id)a2;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createAssetFromValidatedResources:(id)a0 withUUID:(id)a1 assetAlreadyExistsAsPlaceholder:(BOOL)a2 inPhotoLibrary:(id)a3 error:(id *)a4;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)didSendChangeToServiceHandlerWithResult:(BOOL)a0;
- (id)duplicatedAssetResourcesFromAsset:(id)a0 stillSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 flattenLivePhotoIntoStillPhoto:(BOOL)a2 duplicateAsOriginal:(BOOL)a3 duplicateWithAdjustmentsBakedIn:(BOOL)a4 duplicatePhotoAsData:(BOOL)a5 error:(id *)a6;
- (void)encodeToXPCDict:(id)a0;
- (void)finalizeRequestWithBatchSuccess:(BOOL)a0;
- (id)initForNewObject;
- (id)initForNewObjectWithUUID:(id)a0;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)makeSubstitueRenderImageFileFromPath:(id)a0 primaryResource:(id)a1 fileSuffix:(id)a2 error:(id *)a3;
- (void)performConcurrentWork;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)a0;
- (id)placeholderForCreatedAsset;
- (BOOL)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;

@end