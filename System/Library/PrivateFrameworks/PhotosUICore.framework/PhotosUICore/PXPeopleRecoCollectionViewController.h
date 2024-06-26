@class PXPeopleRecoDataSource, NSString, UICollectionViewSupplementaryRegistration;

@interface PXPeopleRecoCollectionViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, PXPeopleRecoCollectionViewDelegate, PXPeopleRecoDataSourceDelegate>

@property (readonly, nonatomic) PXPeopleRecoDataSource *dataSource;
@property (readonly, nonatomic) UICollectionViewSupplementaryRegistration *headerRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recoControllerForPerson:(id)a0;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)collectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)_tagMoreTapped:(id)a0;
- (void)_doneTapped:(id)a0;
- (id)_initWithPerson:(id)a0;
- (void)collectionView:(id)a0 frameDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)recoDataSourceDataChanged:(id)a0;

@end
