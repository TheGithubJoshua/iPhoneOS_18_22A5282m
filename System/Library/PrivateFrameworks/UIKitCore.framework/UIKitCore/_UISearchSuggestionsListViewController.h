@class UISearchController, UICollectionViewDiffableDataSource, NSString;

@interface _UISearchSuggestionsListViewController : UICollectionViewController <UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, weak, nonatomic) UISearchController *searchController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (BOOL)collectionView:(id)a0 canPerformPrimaryActionForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 performPrimaryActionForItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSearchController:(id)a0;
- (void)updateList;

@end
