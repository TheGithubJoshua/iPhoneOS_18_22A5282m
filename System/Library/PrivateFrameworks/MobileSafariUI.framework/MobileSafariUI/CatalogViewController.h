@class UniversalSearchSession, CompletionList, UIPopoverPresentationController, CompletionDetailViewController, UIViewController, CompletionListTableViewController, UIButton, UIView, UIColor, NSString, BrowserController, PopoverCatalogViewController, StartPageController, NSMutableSet, NSTimer, SFStartPageViewController, CompletionListDismissalAnalyticsReporter, UnifiedField, UniversalSearchFirstTimeExperienceViewController, UIImage;
@protocol SFStartPageScrollObserver, _SFNavigationBarCommon, LoadProgressObserver, CompletionItem, CatalogViewControllerDelegate;

@interface CatalogViewController : AbstractCatalogViewController <SFStartPageDelegate, CompletionItemActionHandler, CompletionListDelegate, UITableViewDataSource, UITableViewDelegate, UnifiedFieldDelegate, UIPopoverPresentationControllerDelegate, SKStoreProductViewControllerDelegatePrivate, UniversalSearchFeedbackDelegate, UniversalSearchFirstTimeExperienceViewControllerDelegate, TabSnapshotContentProvider> {
    BrowserController *_browserController;
    PopoverCatalogViewController *_popoverCatalogViewController;
    BOOL _transitioningToNewSizeClass;
    UIViewController *_completionDetailViewController;
    UIViewController *_completionDetailViewControllerBeingPresented;
    BOOL _startPageGeometryIsFrozen;
    BOOL _startPageGeometryWasFrozenDuringLastLayout;
    UIButton *_sidebarButton;
    unsigned long long _lastTopHitMatchLength;
    BOOL _dismissingPopover;
    CompletionDetailViewController *_detailViewController;
    BOOL _completionTableIsReloading;
    double _lastScrollOffset;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    NSMutableSet *_seenVisibleResults;
    BOOL _feedbackIsBeingGenerated;
    BOOL _lastFeedbackSentWasScrolling;
    BOOL _hasKeyboardBeenDismissedForThisQuery;
    BOOL _waitingOnFirstCompletionListUpdateForTelemetry;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentOverlayInsets;
    BOOL _lastInputWasSearchTextCompletion;
    BOOL _voiceSearchWasInProgress;
    BOOL _hasPendingVoiceSearchUpdate;
    NSTimer *_pendingVoiceSearchTimer;
    CompletionListDismissalAnalyticsReporter *_completionDismissalReporter;
    BOOL _nextSnapshotRequiresScreenUpdates;
    CompletionListTableViewController *_completionsViewController;
    SFStartPageViewController *_startPageViewController;
    UniversalSearchFirstTimeExperienceViewController *_universalSearchFirstTimeExperienceViewController;
}

@property (retain, nonatomic) id<CompletionItem> lastTopHitMatch;
@property (retain, nonatomic) UniversalSearchSession *parsecSearchSession;
@property (retain, nonatomic) UnifiedField *textField;
@property (retain, nonatomic) CompletionList *completionList;
@property (nonatomic, getter=isContentBorrowed) BOOL contentBorrowed;
@property (weak, nonatomic) id<CatalogViewControllerDelegate> delegate;
@property (weak, nonatomic) id<LoadProgressObserver> loadProgressObserver;
@property (readonly, nonatomic) BOOL isShowingUniversalSearchFirstTimeExperience;
@property (readonly, nonatomic) BOOL isShowingUniversalSearchPrivacyDetails;
@property (retain, nonatomic) id<_SFNavigationBarCommon> navigationBar;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } obscuredInsets;
@property (readonly, nonatomic) BOOL popoverIsShowing;
@property (readonly, nonatomic) BOOL startPageDidAppearAtLeastOnce;
@property (retain, nonatomic) NSString *queryString;
@property (nonatomic) BOOL usesPopoverStyleForFavorites;
@property (readonly, nonatomic) UIPopoverPresentationController *popoverPresentationController;
@property (readonly, nonatomic) StartPageController *startPageController;
@property (retain, nonatomic) id<SFStartPageScrollObserver> startPageScrollObserver;
@property (copy, nonatomic) NSString *libraryType;
@property (readonly, nonatomic) double chromelessScrollDistance;
@property (readonly, nonatomic) UIButton *sidebarButton;
@property (readonly, nonatomic) double navigationBarHeight;
@property (readonly, nonatomic) BOOL completionDetailIsPresented;
@property (nonatomic, getter=isShowingCompletions) BOOL showingCompletions;
@property (readonly, nonatomic, getter=isShowingCompletionDetail) BOOL showingCompletionDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIImage *snapshotContentImage;
@property (readonly, nonatomic) UIView *snapshotContentView;
@property (readonly, nonatomic) UIColor *snapshotBackgroundColor;
@property (readonly, nonatomic) BOOL snapshotContentShouldUnderlapTopBackdrop;

- (void)toggleVoiceSearch;
- (id)browserController;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(inout id *)a2;
- (void)switchToTabWithUUID:(id)a0 inWindowWithUUID:(id)a1 forTabGroupWithUUID:(id)a2;
- (void)updateStartPageCustomizationPolicy;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)clearCachedTabCompletionData;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)unifiedTextField;
- (void)_textFieldEditingChanged;
- (void)reloadNavigationItemAnimated:(BOOL)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)unifiedField:(id)a0 didEndEditingWithParsecTopHit:(id)a1;
- (void)unifiedField:(id)a0 didEngageWithQuerySuggestion:(id)a1 forQueryString:(id)a2;
- (void)dismissCompletionsForSizeClassTransition;
- (void)goToURL:(id)a0;
- (void)unifiedFieldDidUpdateUserTypedText:(id)a0 forQueryString:(id)a1 didUpdateSuggestions:(BOOL)a2;
- (void)startPageUpdatePolicyDidChange;
- (void)_showCompletionsPopoverIfNecessary;
- (void)updateStartPageTopSpacing;
- (void)_beginParsecSessionIfNeeded;
- (void)endTransitionToNewSizeClassWithState:(id)a0;
- (void)_updateVisibilityForCompletionListTableView:(id)a0;
- (void)_updateStartPageSafeAreaInsets;
- (void)_showStartPageInPopover;
- (void)searchTextCompletionAccessoryButtonTappedForCompletionItem:(id)a0;
- (void)_dismissPopoverAnimated:(BOOL)a0 dismissalReason:(long long)a1 completionHandler:(id /* block */)a2;
- (void)feedbackButtonWasTappedWithProblemURL:(id)a0;
- (id)universalSearchFirstTimeExperienceViewController;
- (void)popoverPresentationControllerWillDismissPopover:(id)a0;
- (void)didGainOwnershipOfCompletionsViewController;
- (void)textFieldDidEndEditing:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)_updateVoiceSearchState;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)cancelFavoritesGestures;
- (BOOL)checkAndResetIfNextSnapshotRequiresScreenUpdates;
- (void)dismissCompletionDetailWindowAndResumeEditingIfNeeded:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)startPageViewControllerDidUpdateContent:(id)a0;
- (void)firstTimeExperienceContinueButtonPressed;
- (void)unifiedField:(id)a0 moveCompletionSelectionBySectionOffset:(long long)a1;
- (id)_completionItemAtIndexPath:(id)a0;
- (double)requiredContentWidth;
- (long long)_completionListQueryID;
- (id)tableView:(id)a0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)a1;
- (void)_reloadCompletionTable;
- (void)resetFavorites;
- (void)_clearParsecSearchSession;
- (void)_keyboardWillShow:(id)a0;
- (double)startPageViewControllerTopPadding:(id)a0;
- (void)startPageControllerDidCompleteUnfocusGesture:(id)a0;
- (void)setShowingCompletions:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)goToURLString:(id)a0;
- (void)viewDidLoad;
- (id)startPageViewController:(id)a0 leadingBarItemsForSection:(id)a1;
- (BOOL)startPageViewControllerShouldDeferLoadingContentUntilKeyboardAnimatesIn:(id)a0;
- (void)unifiedFieldExternalSearchDidEnd:(id)a0;
- (void)_updateAlternateContentViewController;
- (void)completionListDidRestoreCachedCompletions:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)childViewControllerForStatusBarStyle;
- (void)unifiedFieldSelectCompletionItemIfAvailable:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)completionsViewController;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_logTopHitWasChosen:(BOOL)a0;
- (void)test_simulateTyping:(id)a0 inGroup:(id)a1 startIndex:(unsigned long long)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)_shouldPresentCompletionDetailViewControllerAfterSizeTransition:(id)a0;
- (id)startPageViewController:(id)a0 trailingBarItemsForSection:(id)a1;
- (void)didTogglePrivateBrowsing;
- (void)startPageControllerDidCompleteDismissGesture:(id)a0;
- (void)search:(id)a0;
- (void)_dismissUniversalSearchFirstTimeExperience:(id)a0 dismissalReason:(long long)a1 completionHandler:(id /* block */)a2;
- (void)updateStartPageControlTintColor;
- (void)_presentPopoverWithViewController:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_shouldUsePopoverForCompletions;
- (void)resumeSearchWithQuery:(id)a0;
- (void)_invalidatePendingVoiceSearchTimer;
- (void)_dismissUniversalSearchFirstTimeExperience:(id)a0 dismissalReason:(long long)a1;
- (id)startPageViewController;
- (id)initWithDelegate:(id)a0 browserController:(id)a1;
- (void).cxx_destruct;
- (void)unifiedField:(id)a0 didEndEditingWithAddress:(id)a1;
- (void)productViewController:(id)a0 didFinishWithResult:(long long)a1;
- (void)_parsecEnabledDidChange:(id)a0;
- (long long)_relevanceForItem:(id)a0;
- (void)stopCompleting;
- (void)relinquishOwnershipOfUniversalSearchFirstTimeExperienceViewControllerFromCurrentParent;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)unifiedFieldReflectedItemDidChange:(id)a0;
- (void)unifiedField:(id)a0 focusNextKeyView:(BOOL)a1;
- (void)_presentStagedCompletionDetailViewControllerAnimated:(BOOL)a0;
- (BOOL)_completionsViewControllerIsTranslucent;
- (void)_keyboardWillHide:(id)a0;
- (void)startPageViewController:(id)a0 willPresentCustomizationViewController:(id)a1;
- (long long)_relevanceForResult:(id)a0;
- (void)didGainOwnershipOfStartPageViewController;
- (void)scrollViewDidScroll:(id)a0;
- (void)findOnPage;
- (void)resume;
- (void)openURLInExternalApplication:(id)a0;
- (BOOL)_showCompletionsInPopover;
- (void)relinquishOwnershipOfCompletionsViewControllerFromCurrentParent;
- (void)startPageViewControllerDidScroll:(id)a0 animated:(BOOL)a1;
- (void)_deselectCompletionsViewControllerSelectedRow;
- (void)_ensureCompletionListAndParsecSession;
- (void)_popoverDismissCompletion;
- (void)updateQuerySuggestionsFromResponse:(id)a0;
- (void)_keyboardDidShow:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)willUpdateObscuredInsetsForSizeTransition;
- (void)beginTransitionToNewSizeClassWithState:(id)a0;
- (void)unifiedField:(id)a0 willUpdateUserTypedText:(id)a1 toText:(id)a2;
- (void)viewSafeAreaInsetsDidChange;
- (void)_generateVisibleResultsFeedbackForEvent:(long long)a0;
- (void)_logQueryEngagement;
- (BOOL)unifiedField:(id)a0 shouldWaitForTopHitForText:(id)a1;
- (void)dealloc;
- (void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
- (long long)startPageCustomizationPolicy;
- (void)didInteractWithUniversalSearchFirstTimeExperienceViewController:(id)a0;
- (void)didCancelUniversalSearchFirstTimeExperienceViewController:(id)a0;
- (void)completionList:(id)a0 didRemoveItem:(id)a1 wasLastInSection:(BOOL)a2 atIndexPath:(id)a3 withCompletionHandler:(id /* block */)a4;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)completionList:(id)a0 topHitDidBecomeReadyForString:(id)a1;
- (void)updatePreferredContentSize;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (BOOL)unifiedFieldShouldMoveCompletionSelection:(id)a0;
- (void)_selectedCompletionItemAtIndexPath:(id)a0;
- (id)startPageViewControllerTitleForRootView:(id)a0;
- (void)presentDetail:(id)a0;
- (void)displayPopover;
- (void)completionListDidUpdate:(id)a0 forQuery:(id)a1;
- (void)tableViewDidFinishReload:(id)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)didUpdateObscuredInsetsForSizeTransition;
- (void)startPageViewControllerDidAppear:(id)a0;
- (id)unifiedField:(id)a0 topHitForText:(id)a1;
- (void)unifiedFieldShouldPasteAndNavigate:(id)a0;
- (void)unifiedFieldVoiceSearchStateDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })snapshotContentRectInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setShowingCompletions:(BOOL)a0 popoverDismissalReason:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_presentPopoverWithViewController:(id)a0;
- (id)completionsViewControllerIfLoaded;
- (void)_updateBackgroundColorWhenShowingFavoritesNavigationController;
- (void)_commitVoiceSearchIfNecessary;
- (void)unifiedField:(id)a0 didEndEditingWithSearch:(id)a1;
- (void)updateStartPageHidesEmptyRootViewNavigationBar;
- (BOOL)_shouldTakeOwnershipOfCompletionsViewController;
- (void)cancelUnifiedFieldSearch;
- (void)unifiedField:(id)a0 moveCompletionSelectionByRowOffset:(long long)a1;
- (void)showUniversalSearchFirstTimeExperienceIfNotShowing;

@end
