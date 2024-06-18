@class UIViewController, PSKeyboardNavigationSearchBar;
@protocol PSKeyboardNavigationSearchResultsController;

@interface PSKeyboardNavigationSearchController : UISearchController

@property (retain, nonatomic) PSKeyboardNavigationSearchBar *searchBar;
@property (retain, nonatomic) UIViewController<PSKeyboardNavigationSearchResultsController> *searchResultsController;

- (void)_upArrowKeyPressed;
- (void)_escapeKeyPressed;
- (void)_downArrowKeyPressed;
- (id)initWithSearchResultsController:(id)a0;
- (void).cxx_destruct;

@end
