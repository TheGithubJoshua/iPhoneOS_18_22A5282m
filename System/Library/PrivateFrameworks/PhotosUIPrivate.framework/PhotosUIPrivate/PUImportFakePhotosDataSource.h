@class PXImportAssetsDataSource;

@interface PUImportFakePhotosDataSource : PXPhotosDataSource

@property (retain, nonatomic) PXImportAssetsDataSource *importDataSource;

- (long long)numberOfItemsInSection:(long long)a0;
- (id)prepareForPhotoLibraryChange:(id)a0;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)a0 reverseOrder:(BOOL)a1;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)initWithImportDataSource:(id)a0;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;

@end
