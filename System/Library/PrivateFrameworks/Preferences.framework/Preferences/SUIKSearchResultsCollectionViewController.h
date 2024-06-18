@class NSObject, UICollectionViewDiffableDataSource, _SUIKSearchResultsUpdateOperation;
@protocol SUIKSearchResultsCollectionViewControllerDelegate;

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController <PSKeyboardNavigationSearchResultsController>

@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) _SUIKSearchResultsUpdateOperation *updateOperation;
@property (weak, nonatomic) NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *delegate;

- (void)selectPreviousSearchResult;
- (id)init;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)setResults:(id)a0;
- (unsigned long long)totalSearchResults;
- (void)viewDidLoad;
- (void)selectNextSearchResult;
- (void)searchQueryStarted;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (double)iconWidth;
- (void)showSelectedSearchResult;
- (void)searchQueryFoundItems:(id)a0;
- (void)searchQueryCompleted;
- (void)_selectAndScrollToIndexPath:(id)a0;

@end
