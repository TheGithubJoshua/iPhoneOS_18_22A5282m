@class UIView, NSString, NSArray, TIUserWordsManager, SearchUserWordsController, UISearchController, UIImageView, UITableView, UIToolbar, UILocalizedIndexedCollation, UILabel;

@interface ListUserWordsController : PSViewController <UINavigationControllerDelegate, UISearchControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate> {
    UILabel *_noWordsLabel;
    NSArray *_propertiesToShow;
    UILabel *_noContentLabel;
    UIImageView *_noContentImage;
    UIView *_contentView;
    NSArray *filteredListContent;
    SearchUserWordsController *_searchResultsController;
    BOOL _restoreEditing;
    BOOL _manualEditing;
    id _observerToken;
    UIToolbar *_toolbar;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) TIUserWordsManager *dictionaryController;
@property (retain, nonatomic) UILocalizedIndexedCollation *collation;
@property (retain, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSString *savedSearchTerm;
@property (nonatomic) BOOL searchIsActive;
@property (retain, nonatomic) UISearchController *searchController;
@property (nonatomic) unsigned long long searchNavControllerChanges;
@property (retain, nonatomic) NSString *currentShortcut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willDismissSearchController:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)loadView;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void)didDismissSearchController:(id)a0;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)shouldAutorotate;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewSafeAreaInsetsDidChange;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_hideSearchBar;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)reloadSections;
- (void)_showSearchBar;
- (id)_mainContentView;
- (id)mainTableView;
- (void)inlineUserDictionaryDoneEditing;
- (BOOL)_shouldHideIndex;
- (void)addUserWord;
- (void)userWordDidUpdate:(id)a0;

@end
