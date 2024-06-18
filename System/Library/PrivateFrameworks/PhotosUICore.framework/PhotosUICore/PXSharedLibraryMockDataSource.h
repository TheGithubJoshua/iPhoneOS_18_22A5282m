@class NSArray;

@interface PXSharedLibraryMockDataSource : PXSharedLibraryDataSource {
    NSArray *_mocks;
}

- (long long)numberOfItemsInSection:(long long)a0;
- (id)sharedLibraryAtItemIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })indexPathForObjectReference:(id)a0;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (id)initWithMocks:(id)a0;

@end
