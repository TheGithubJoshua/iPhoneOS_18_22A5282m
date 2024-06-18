@class NSString, PXPhotosDataSource;

@interface PUPhotoKitDataSourceManager : PUAssetsDataSourceManager <PXPhotosDataSourceChangeObserver>

@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithPhotosDataSource:(id)a0 andDataSourceChange:(id)a1;
- (id)init;
- (id)initWithAssetsDataSourceManager:(id)a0;
- (id)photosDataSourceInterestingAssetReferences:(id)a0;
- (void)photosDataSource:(id)a0 didChange:(id)a1;
- (void).cxx_destruct;
- (id)initWithPhotosDataSource:(id)a0;
- (void)dealloc;

@end
