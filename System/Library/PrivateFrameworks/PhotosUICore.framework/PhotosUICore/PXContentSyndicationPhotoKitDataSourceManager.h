@class NSString, PXContentSyndicationPhotoKitDataSource, PHPhotoLibrary;
@protocol PXContentSyndicationAssetFetchResultProvider, PXContentSyndicationSocialLayerHighlightProvider, PXUIImageProvider;

@interface PXContentSyndicationPhotoKitDataSourceManager : PXContentSyndicationDataSourceManager <PXPhotoLibraryUIChangeObserver> {
    PHPhotoLibrary *_photoLibrary;
    id<PXContentSyndicationAssetFetchResultProvider> _assetFetchResultProvider;
    id<PXUIImageProvider> _imageProvider;
    id<PXContentSyndicationSocialLayerHighlightProvider> _highlightProvider;
}

@property (readonly, nonatomic) PXContentSyndicationPhotoKitDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createCountsController;

- (id)imageProvider;
- (id)initWithPhotoLibrary:(id)a0;
- (id)init;
- (id)createAssetsDataSourceManager;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (id)createInitialDataSource;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0 withPreparedInfo:(id)a1;
- (void).cxx_destruct;
- (id)allAssetsFetchResult;
- (void)setDataSource:(id)a0 changeDetails:(id)a1;
- (id)assetFetchResultProvider;
- (id)socialLayerHighlightProvider;

@end
