@interface NewsUI2.SearchHomeViewController : TUViewController <TSTabBarSplitViewAutoObserver, UISearchBarDelegate> {
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ lazySearchViewController;
    void /* unknown type, empty encoding */ lazySearchResultsViewController;
    void /* unknown type, empty encoding */ blueprintViewController;
    void /* unknown type, empty encoding */ recentSearchManager;
    void /* unknown type, empty encoding */ preservedSearchText;
    void /* unknown type, empty encoding */ afterLoad;
}

- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)tabBarSplitViewDidChangeCollapseStateToCollapseState:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;

@end
