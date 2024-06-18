@class NSString, NSArray, UISearchBar, _SFPageFormatMenuController;
@protocol _SFBrowserDocument;

@interface SFManageExtensionsViewController : UITableViewController <WBSExtensionsControllerObserver, UISearchBarDelegate> {
    id<_SFBrowserDocument> _browserDocument;
    NSArray *_extensions;
    UISearchBar *_searchBar;
    NSString *_userTypedQuery;
    double _indentationWidthOfCell;
}

@property (weak, nonatomic) _SFPageFormatMenuController *presentingPageFormatMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)_reload;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)_enableExtensionPromptingForNewTabOverrideIfNecessary:(id)a0;
- (void)_enableExtensionWithNewTabOverridePage:(id)a0;
- (void)_extensionStateWasToggled:(id)a0;
- (void)_setExtensionStateForExtension:(id)a0 isOn:(BOOL)a1;
- (void)_updateLastViewedDate;
- (void)extensionsControllerExtensionListDidChange:(id)a0;
- (id)initFromPageFormatMenu:(id)a0 activeDocument:(id)a1;
- (BOOL)safari_prefersHalfHeightSheetPresentationWithLoweredBar;

@end
