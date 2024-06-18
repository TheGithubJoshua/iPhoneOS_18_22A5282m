@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobDeferredRenderDerivativesBaseWorker : PLBackgroundJobWorker {
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)_criteriaToUse;

- (id)imageConversionClient;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_predicateToFetchDeferredAssets;
- (BOOL)isInterruptible;
- (void)stopWorkingOnItem:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (id)videoConversionClient;

@end
