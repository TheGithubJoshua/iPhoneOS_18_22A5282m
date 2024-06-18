@class NSTimer, NSString, WebBookmarkReadonlyCollection, NSArray, UISegmentedControl, NSMutableDictionary, _UINavigationBarPalette, NSObject, UIBarButtonItem, WebBookmarkCollection;
@protocol _SFNavigationIntentHandling, TabGroupProvider, BookmarksNavigationControllerDelegate, LinkPreviewProvider, OS_dispatch_queue;

@interface BookmarksNavigationController : UINavigationController <WBTabGroupManagerObserver, BookmarksTableViewControllerDelegate, HistoryTableViewControllerDelegate, ReadingListViewControllerDelegate, _SFBookmarkInfoViewControllerDelegate, UINavigationBarDelegate, UINavigationControllerDelegate, _SFNavigationIntentHandling> {
    WebBookmarkCollection *_bookmarkCollection;
    WebBookmarkReadonlyCollection *_readonlyCollection;
    NSObject<OS_dispatch_queue> *_readonlyCollectionQueue;
    NSTimer *_bookmarkSyncTimer;
    BOOL _hasScheduledBookmarkSyncTimer;
    BOOL _isEditing;
    BOOL _needsReloadSavedState;
    BOOL _contentDirtyFlag;
    UIBarButtonItem *_createFolderButtonItem;
    UIBarButtonItem *_editButtonItem;
    UIBarButtonItem *_editingDoneButtonItem;
    UIBarButtonItem *_flexibleSpaceItem;
    BOOL _showCollections;
    UISegmentedControl *_collectionSegmentedControl;
    NSArray *_topLevelCollections;
    NSMutableDictionary *_savedCollectionState;
    _UINavigationBarPalette *_palette;
    UIBarButtonItem *_doneButtonItem;
}

@property (class, retain, nonatomic, setter=test_setSavedStateCollection:) NSString *test_savedStateCollection;

@property (nonatomic) BOOL doneButtonHidden;
@property (nonatomic) BOOL allowsEditing;
@property (weak, nonatomic) id<BookmarksNavigationControllerDelegate> bookmarksNavigationControllerDelegate;
@property (weak, nonatomic) id<LinkPreviewProvider> linkPreviewProvider;
@property (weak, nonatomic) id<_SFNavigationIntentHandling> navigationIntentHandler;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tableSeparatorInset;
@property (nonatomic) BOOL hasTranslucentAppearance;
@property (nonatomic, getter=isContentBorrowed) BOOL contentBorrowed;
@property (nonatomic) BOOL prefersHalfHeightSheetPresentationWithLoweredBar;
@property (retain, nonatomic) NSString *currentCollection;
@property (copy, nonatomic) id /* block */ importHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<TabGroupProvider> tabGroupProvider;

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_keyboardWillShow:(id)a0;
- (void)tabGroupManager:(id)a0 didUpdateTabGroupWithUUID:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)_folderContentsDidChange:(id)a0;
- (void)handleNavigationIntent:(id)a0 completion:(id /* block */)a1;
- (void)tabGroupManager:(id)a0 didUpdateScopedBookmarkList:(id)a1;
- (void).cxx_destruct;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (void)tabGroupManagerDidUpdateTabGroups:(id)a0;
- (void)dispatchNavigationIntent:(id)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_doneButtonPressed;
- (BOOL)safari_prefersHalfHeightSheetPresentationWithLoweredBar;
- (BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)a0;
- (id)rootBookmark;
- (id)tabGroupProviderForBookmarkInfoViewController:(id)a0;
- (void)_savePanelState;
- (id)_lastExistingBookmarkWithUUIDs:(id)a0;
- (id)_toolbarItemsForViewController:(id)a0;
- (id)topBookmarksTableViewController;
- (void)_applicationSuspended:(id)a0;
- (void)_bookmarkCollectionHasBecomeAvailable:(id)a0;
- (void)_bookmarkSyncTimerDidFire:(id)a0;
- (void)_clearBookmarkSyncTimer;
- (BOOL)_createSavedPanelStateForTesting;
- (void)_createToolbarItemsIfNecessary;
- (void)_didPressEditButton;
- (void)_didPressEditingDoneButton;
- (void)_didPressNewFolderButton;
- (id)_favoritesFolderBasedOnContentRestriction;
- (id)_initWithBookmarksDelegate:(id)a0 linkPreviewProvider:(id)a1 topBookmark:(id)a2 skipOffset:(unsigned int)a3 activeCollection:(id)a4 showsOnlyActiveCollection:(BOOL)a5;
- (BOOL)_isVisibleFolderID:(int)a0;
- (void)_loadSavedPanelState;
- (id)_pathForBookmark:(id)a0 startingFromAncestor:(id)a1;
- (void)_reloadFailed;
- (void)_reloadFolderContentsForFolderIDIfNeeded:(int)a0;
- (void)_reloadSucceeded;
- (void)_restoreCurrentCollectionState;
- (void)_restorePanelState;
- (id)_segmentedControlItemForCollection:(id)a0;
- (void)_selectedCollectionChanged:(id)a0;
- (void)_setContentsDirty;
- (void)_setEditingFromToolbarButton:(BOOL)a0;
- (void)_setupCollectionSegmentedControlIfNeeded;
- (void)_setupCollections;
- (BOOL)_shouldShowPaletteForViewController:(id)a0;
- (void)_updateBookmarkCollection;
- (void)_updateClearHistoryButton;
- (void)_updateDoneButtonItemForViewController:(id)a0;
- (void)_updateToolbarItemsForViewController:(id)a0 animated:(BOOL)a1;
- (void)_updateToolbarVisibility;
- (void)_webBookmarksDidReload:(id)a0;
- (void)bookmarkSourceContentsChanged:(id)a0;
- (void)bookmarksTableViewControllerDidBeginEditing:(id)a0;
- (void)bookmarksTableViewControllerDidEndEditing:(id)a0;
- (BOOL)bookmarksTableViewIsReadOnly:(id)a0;
- (BOOL)bookmarksTableViewShouldDispatchNavigationIntent:(id)a0 forSelectedBookmark:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetForBookmarksTableViewController:(id)a0;
- (void)historyTableViewControllerDidBeginEditing:(id)a0;
- (void)historyTableViewControllerDidEndEditing:(id)a0;
- (id)initWithBookmarksDelegate:(id)a0 linkPreviewProvider:(id)a1;
- (id)initWithBookmarksDelegate:(id)a0 linkPreviewProvider:(id)a1 collection:(id)a2 showsOnlyActiveCollection:(BOOL)a3;
- (id)initWithBookmarksDelegate:(id)a0 linkPreviewProvider:(id)a1 topBookmark:(id)a2 skipOffset:(unsigned int)a3;
- (id)makeHistoryViewController;
- (id)newBookmarksTableViewControllerWithFolder:(id)a0 skipOffset:(unsigned int)a1;
- (id)newRootViewControllerForCollection:(id)a0;
- (void)panelViewController:(id)a0 updateToolbarItemsAnimated:(BOOL)a1;
- (BOOL)panelViewControllerShouldTranslucentAppearance:(id)a0;
- (void)readingListViewController:(id)a0 setBookmark:(id)a1 asRead:(BOOL)a2;
- (void)readingListViewController:(id)a0 updateUnreadFilterShowingAllBookmarks:(BOOL)a1;
- (id)readingListViewControllerCurrentReadingListItem:(id)a0;
- (void)readingListViewControllerDidBeginEditing:(id)a0;
- (void)readingListViewControllerDidEndEditing:(id)a0;
- (BOOL)rebaseOnAncestorBookmark:(id)a0 skipOffset:(unsigned int)a1;
- (BOOL)rebaseOnDescendentBookmark:(id)a0;
- (void)reloadViewControllers;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInsetForBookmarksTableViewController:(id)a0;
- (void)setPinnedPaletteForPanelViewController:(id)a0;
- (void)setRootBookmark:(id)a0 skipOffset:(unsigned int)a1;
- (void)setRootBookmarkUUIDString:(id)a0;
- (void)toggleEditBookmarks;
- (id)topHistoryTableViewController;
- (id)topReadingListViewController;
- (id)topmostBookmarksTableViewController;

@end