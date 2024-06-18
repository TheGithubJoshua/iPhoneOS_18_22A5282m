@class UIView, NSString, NSArray, UIKeyboard, NSIndexPath, NSMutableDictionary, NSDictionary, UITableView, NSMutableArray, PSURLControllerHandler, UIColor;
@protocol PSSpecifierDataSource, PSListControllerAppearanceProvider, PSListControllerNavigationCoordinator;

@interface PSListController : PSViewController <UIAppearance, UITableViewDelegate, UITableViewDataSource, UITableViewDataSourcePrefetching, UIAlertViewDelegate, UIPopoverPresentationControllerDelegate, PSSpecifierObserver, PSViewControllerOffsetProtocol, PSURLControllerHandlerDelegate> {
    NSMutableArray *_prequeuedReusablePSTableCells;
    NSMutableDictionary *_cells;
    BOOL _cachesCells;
    BOOL _reusesCells;
    UITableView *_table;
    NSArray *_specifiers;
    NSMutableDictionary *_specifiersByID;
    NSMutableArray *_groups;
    NSString *_specifierID;
    NSMutableArray *_bundleControllers;
    BOOL _bundlesLoaded;
    BOOL _keyboardWasVisible;
    BOOL _popupIsModal;
    BOOL _hasAppeared;
    float _verticalContentOffset;
    NSString *_offsetItemName;
    struct CGPoint { double x; double y; } _contentOffsetWithKeyboard;
    NSString *_highlightItemName;
    BOOL _isVisible;
    id<PSSpecifierDataSource> _dataSource;
    BOOL _requestingSpecifiersFromDataSource;
    BOOL _sectionContentInsetInitialized;
    UIView *_containerView;
    UIKeyboard *_keyboard;
    NSIndexPath *_savedSelectedIndexPath;
    id<PSListControllerAppearanceProvider> _appearanceProvider;
    id<PSListControllerNavigationCoordinator> _navigationCoordinator;
}

@property (retain, nonatomic) id<PSListControllerAppearanceProvider> appearanceProvider;
@property (retain, nonatomic) id<PSListControllerNavigationCoordinator> navigationCoordinator;
@property (readonly, nonatomic) NSArray *unprotectedSpecifiers;
@property (retain, nonatomic) PSURLControllerHandler *urlHandler;
@property (nonatomic) BOOL contentSizeDidChange;
@property (nonatomic) BOOL usesDarkTheme;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIColor *cellHighlightColor;
@property (retain, nonatomic) UIColor *padSelectionColor;
@property (retain, nonatomic) UIColor *cellAccessoryColor;
@property (retain, nonatomic) UIColor *cellAccessoryHighlightColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *altTextColor;
@property (retain, nonatomic) UIColor *buttonTextColor;
@property (retain, nonatomic) UIColor *editableTextColor;
@property (retain, nonatomic) UIColor *editablePlaceholderTextColor;
@property (retain, nonatomic) UIColor *editableInsertionPointColor;
@property (retain, nonatomic) UIColor *editableSelectionBarColor;
@property (retain, nonatomic) UIColor *editableSelectionHighlightColor;
@property (retain, nonatomic) UIColor *footerHyperlinkColor;
@property (retain, nonatomic) UIColor *segmentedSliderTrackColor;
@property (retain, nonatomic) id<PSSpecifierDataSource> specifierDataSource;
@property (nonatomic, getter=isShowingSetupController) BOOL showingSetupController;
@property (nonatomic) BOOL forceSynchronousIconLoadForCreatedCells;
@property (nonatomic) BOOL edgeToEdgeCells;
@property (retain, nonatomic) NSDictionary *pendingURLResourceDictionary;
@property (copy, nonatomic) NSString *specifierIDPendingPush;
@property (copy, nonatomic) id /* block */ urlHandlingCompletion;
@property (nonatomic, getter=isPrefetchingEnabled) BOOL prefetchingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long observerType;

+ (id)appearance;
+ (id)appearanceForTraitCollection:(id)a0 whenContainedInInstancesOfClasses:(id)a1;
+ (id)appearanceForTraitCollection:(id)a0;
+ (id)appearanceForTraitCollection:(id)a0 whenContainedIn:(Class)a1;
+ (id)appearanceWhenContainedIn:(Class)a0;
+ (id)appearanceWhenContainedInInstancesOfClasses:(id)a0;
+ (id)aggregateReportingDomainOverride;
+ (BOOL)displaysButtonBar;
+ (void)registerDefaultAppearanceProviderClass:(Class)a0;
+ (void)registerDefaultNavigationCoordinatorClass:(Class)a0;
+ (void)setAggregateReportingDomainOverride:(id)a0;

- (void)reload;
- (id)specifiers;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)_keyboardDidHide:(id)a0;
- (id)init;
- (void)clearCache;
- (void)insertSpecifier:(id)a0 afterSpecifier:(id)a1;
- (id)specifier;
- (void)loadView;
- (long long)indexOfSpecifier:(id)a0;
- (void)lazyLoadBundle:(id)a0;
- (void)setSpecifiers:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)insertContiguousSpecifiers:(id)a0 afterSpecifier:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didBecomeActive:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0 urlDictionary:(id)a1;
- (void)_keyboardWillShow:(id)a0;
- (void)insertContiguousSpecifiers:(id)a0 atIndex:(long long)a1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (id)specifierForID:(id)a0;
- (void)viewDidLoad;
- (void)dismissPopover;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (id)selectSpecifier:(id)a0;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (void)reloadSpecifier:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)showPINSheet:(id)a0;
- (void)_returnKeyPressed:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (id)bundle;
- (Class)tableViewClass;
- (void)beginUpdates;
- (void)contentSizeDidChange:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)reloadSpecifiers;
- (BOOL)shouldDeferPushForSpecifierID:(id)a0;
- (void)reloadSpecifierAtIndex:(long long)a0;
- (BOOL)handlePendingURL;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)endUpdates;
- (void)dealloc;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)insertSpecifier:(id)a0 atIndex:(long long)a1;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)a0;
- (void)setTitle:(id)a0;
- (void)setSpecifier:(id)a0;
- (id)table;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)removeSpecifier:(id)a0;
- (void)dismissPopoverAnimated:(BOOL)a0;
- (void)removeSpecifierAtIndex:(long long)a0;
- (void)_setContentInset:(double)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 detailTextForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 prefetchRowsAtIndexPaths:(id)a1;
- (long long)tableView:(id)a0 titleAlignmentForFooterInSection:(long long)a1;
- (long long)tableView:(id)a0 titleAlignmentForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (long long)tableViewStyle;
- (void)viewDidUnload;
- (long long)indexOfGroup:(long long)a0;
- (void)showController:(id)a0;
- (id)cachedCellForSpecifier:(id)a0;
- (void)highlightSpecifierWithID:(id)a0;
- (BOOL)prepareHandlingURLForSpecifierID:(id)a0 resourceDictionary:(id)a1 animatePush:(BOOL *)a2;
- (BOOL)prepareHandlingURLForSpecifierID:(id)a0 resourceDictionary:(id)a1 animatePush:(BOOL *)a2 withCompletion:(id /* block */)a3;
- (void)pushController:(id)a0 animate:(BOOL)a1;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)dismissPopoverAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (long long)numberOfGroups;
- (BOOL)_isRegularWidth;
- (void)setCachesCells:(BOOL)a0;
- (void)setSpecifierID:(id)a0;
- (void)clearPendingURL;
- (void)setReusesCells:(BOOL)a0;
- (void)_addIdentifierForSpecifier:(id)a0;
- (id)_createGroupIndices:(id)a0;
- (id)_customViewForSpecifier:(id)a0 class:(Class)a1 isHeader:(BOOL)a2;
- (void)_ensureAppearanceProviderAndNavigationCoordinator;
- (BOOL)_getGroup:(long long *)a0 row:(long long *)a1 ofSpecifierAtIndex:(long long)a2 groups:(id)a3;
- (double)_getKeyboardIntersectionHeightFromUserInfo:(id)a0;
- (void)_insertContiguousSpecifiers:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (BOOL)_isEmptyGroup:(unsigned long long)a0;
- (void)_loadBundleControllers;
- (void)_moveSpecifierAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (long long)_nextGroupInSpecifiersAfterIndex:(long long)a0 inArray:(id)a1;
- (void)_performHighlightForSpecifierWithID:(id)a0;
- (void)_performHighlightForSpecifierWithID:(id)a0 tryAgainIfFailed:(BOOL)a1;
- (void)_removeContiguousSpecifiers:(id)a0 animated:(BOOL)a1;
- (void)_removeIdentifierForSpecifier:(id)a0;
- (void)_scrollToSpecifierNamed:(id)a0;
- (void)_scrollToSpecifierWithID:(id)a0 animated:(BOOL)a1;
- (void)_setNotShowingSetupController;
- (double)_tableView:(id)a0 heightForCustomInSection:(long long)a1 isHeader:(BOOL)a2;
- (id)_tableView:(id)a0 viewForCustomInSection:(long long)a1 isHeader:(BOOL)a2;
- (void)_unloadBundleControllers;
- (void)_updateSectionContentInsetWithAnimation:(BOOL)a0;
- (void)addSpecifier:(id)a0;
- (void)addSpecifier:(id)a0 animated:(BOOL)a1;
- (void)addSpecifiersFromArray:(id)a0;
- (void)addSpecifiersFromArray:(id)a0 animated:(BOOL)a1;
- (id)cachedCellForSpecifierID:(id)a0;
- (void)confirmationViewAcceptedForSpecifier:(id)a0;
- (void)confirmationViewAlternateAcceptedForSpecifier:(id)a0;
- (void)confirmationViewCancelledForSpecifier:(id)a0;
- (BOOL)containsSpecifier:(id)a0;
- (id)controllerForRowAtIndexPath:(id)a0;
- (id)controllerForSpecifier:(id)a0;
- (void)createGroupIndices;
- (void)createPrequeuedPSTableCells:(unsigned long long)a0;
- (void)dataSource:(id)a0 performUpdates:(id)a1;
- (void)delayedContentSizeDidChange;
- (void)dismissConfirmationViewAnimated:(BOOL)a0;
- (void)dismissPopoverWithCompletion:(id /* block */)a0;
- (id)findFirstVisibleResponder;
- (void)formSheetViewWillDisappear;
- (BOOL)getGroup:(long long *)a0 row:(long long *)a1 ofSpecifier:(id)a2;
- (BOOL)getGroup:(long long *)a0 row:(long long *)a1 ofSpecifierAtIndex:(long long)a2;
- (BOOL)getGroup:(long long *)a0 row:(long long *)a1 ofSpecifierID:(id)a2;
- (id)getGroupSpecifierForSpecifier:(id)a0;
- (id)getGroupSpecifierForSpecifierID:(id)a0;
- (long long)indexForIndexPath:(id)a0;
- (long long)indexForRow:(long long)a0 inGroup:(long long)a1;
- (long long)indexOfSpecifierID:(id)a0;
- (id)indexPathForIndex:(long long)a0;
- (id)indexPathForSpecifier:(id)a0;
- (id)initForContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)insertContiguousSpecifiers:(id)a0 afterSpecifier:(id)a1 animated:(BOOL)a2;
- (void)insertContiguousSpecifiers:(id)a0 afterSpecifierID:(id)a1;
- (void)insertContiguousSpecifiers:(id)a0 afterSpecifierID:(id)a1 animated:(BOOL)a2;
- (void)insertContiguousSpecifiers:(id)a0 atEndOfGroup:(long long)a1;
- (void)insertContiguousSpecifiers:(id)a0 atEndOfGroup:(long long)a1 animated:(BOOL)a2;
- (void)insertContiguousSpecifiers:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)insertSpecifier:(id)a0 afterSpecifier:(id)a1 animated:(BOOL)a2;
- (void)insertSpecifier:(id)a0 afterSpecifierID:(id)a1;
- (void)insertSpecifier:(id)a0 afterSpecifierID:(id)a1 animated:(BOOL)a2;
- (void)insertSpecifier:(id)a0 atEndOfGroup:(long long)a1;
- (void)insertSpecifier:(id)a0 atEndOfGroup:(long long)a1 animated:(BOOL)a2;
- (void)insertSpecifier:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)invalidateSpecifiersForDataSource:(id)a0;
- (BOOL)isValidCellStyle:(long long)a0;
- (id)loadSpecifiersFromPlistName:(id)a0 target:(id)a1;
- (id)loadSpecifiersFromPlistName:(id)a0 target:(id)a1 bundle:(id)a2;
- (void)loseFocus;
- (void)migrateSpecifierMetadataFrom:(id)a0 to:(id)a1;
- (BOOL)performActionForSpecifier:(id)a0;
- (BOOL)performButtonActionForSpecifier:(id)a0;
- (BOOL)performConfirmationActionForSpecifier:(id)a0;
- (BOOL)performConfirmationAlternateActionForSpecifier:(id)a0;
- (BOOL)performConfirmationCancelActionForSpecifier:(id)a0;
- (BOOL)performLoadActionForSpecifier:(id)a0;
- (void)performSpecifierUpdates:(id)a0;
- (id)popupStylePopoverController;
- (void)popupViewWillDisappear;
- (void)prefetchResourcesFor:(id)a0;
- (void)prepareSpecifiersMetadata;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSpecifiersInGroupID:(id)a0;
- (void)reloadIconForSpecifierForBundle:(id)a0;
- (void)reloadSpecifier:(id)a0 animated:(BOOL)a1;
- (void)reloadSpecifierAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)reloadSpecifierID:(id)a0;
- (void)reloadSpecifierID:(id)a0 animated:(BOOL)a1;
- (void)removeContiguousSpecifiers:(id)a0;
- (void)removeContiguousSpecifiers:(id)a0 animated:(BOOL)a1;
- (void)removeLastSpecifier;
- (void)removeLastSpecifierAnimated:(BOOL)a0;
- (void)removeSpecifier:(id)a0 animated:(BOOL)a1;
- (void)removeSpecifierAtIndex:(long long)a0 animated:(BOOL)a1;
- (void)removeSpecifierID:(id)a0;
- (void)removeSpecifierID:(id)a0 animated:(BOOL)a1;
- (void)replaceContiguousSpecifiers:(id)a0 withSpecifiers:(id)a1;
- (void)replaceContiguousSpecifiers:(id)a0 withSpecifiers:(id)a1 animated:(BOOL)a2;
- (void)returnPressedAtEnd;
- (long long)rowsForGroup:(long long)a0;
- (void)selectRowForSpecifier:(id)a0;
- (void)setDesiredVerticalContentOffset:(float)a0;
- (BOOL)shouldSelectResponderOnAppearance;
- (void)showConfirmationViewForSpecifier:(id)a0;
- (void)showConfirmationViewForSpecifier:(id)a0 useAlert:(BOOL)a1;
- (void)showConfirmationViewForSpecifier:(id)a0 useAlert:(BOOL)a1 swapAlertButtons:(BOOL)a2;
- (void)showPINSheet:(id)a0 allowOptionsButton:(BOOL)a1;
- (id)specifierAtIndex:(long long)a0;
- (id)specifierAtIndexPath:(id)a0;
- (id)specifierID;
- (id)specifiersForIDs:(id)a0;
- (id)specifiersInGroup:(long long)a0;
- (void)updateSpecifiers:(id)a0 withSpecifiers:(id)a1;
- (void)updateSpecifiersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withSpecifiers:(id)a1;
- (float)verticalContentOffset;

@end