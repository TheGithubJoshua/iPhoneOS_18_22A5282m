@interface PXSharedLibraryEmptyDataSourceManager : PXSharedLibraryDataSourceManager

- (id)createInitialDataSource;
- (id)fetchPreview;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchExiting;
- (id)fetchSharedLibrary;

@end
