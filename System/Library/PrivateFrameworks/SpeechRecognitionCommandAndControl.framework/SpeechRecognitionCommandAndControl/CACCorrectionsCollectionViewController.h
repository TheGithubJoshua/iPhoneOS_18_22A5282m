@class NSString, NSArray;
@protocol CACCorrectionsCollectionViewControllerDelegate;

@interface CACCorrectionsCollectionViewController : UICollectionViewController

@property (weak, nonatomic) id<CACCorrectionsCollectionViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSArray *emojis;

- (id)init;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)a0;
- (void)_didTapCancel:(id)a0;
- (id)_itemsInSection:(long long)a0;

@end
