@class SFSyntheticBookmarkFolder, NSString, WebBookmarkList, WebBookmarkCollection, NSArray, UISearchBar, WebBookmark;
@protocol LinkPreviewProvider, BookmarksTableViewControllerDelegate, _SFNavigationIntentHandling;

@interface BookmarksTableViewController : SFPopoverSizingTableViewController <UISearchBarDelegate, UITableViewDragDelegate, UITableViewDropDelegate, _SFBookmarkInfoViewControllerDelegate, _SFWebBookmarkActionHandler, BookmarksPanelStateRestoring> {
    WebBookmarkList *_bookmarkList;
    WebBookmark *_favoritesFolder;
    SFSyntheticBookmarkFolder *_activeSyntheticFolder;
    NSArray *_allSyntheticFolders;
    UISearchBar *_searchBar;
    NSString *_userTypedFilter;
    unsigned long long _skipOffset;
    BOOL _needsInitialContentOffsetUpdateForTableHeaderView;
    BOOL _needsContentOffsetUpdate;
    BOOL _shouldDeferReload;
}

@property (retain, nonatomic) WebBookmarkCollection *collection;
@property (readonly, nonatomic) int folderID;
@property (retain, nonatomic) WebBookmark *folder;
@property (weak, nonatomic) id<BookmarksTableViewControllerDelegate> delegate;
@property (weak, nonatomic) id<LinkPreviewProvider> linkPreviewProvider;
@property (weak, nonatomic) id<_SFNavigationIntentHandling> navigationIntentHandler;
@property (readonly, nonatomic) BOOL canCreateNewFolder;
@property (nonatomic, getter=isPreviewing) BOOL previewing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (id)bookmarksNavigationController;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateTitle;
- (void)searchBarSearchButtonClicked:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidChangeAdjustedContentInset:(id)a0;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (void)deleteBookmark:(id)a0 userInfo:(id)a1;
- (void)updateUserActivityState:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)editBookmark:(id)a0 userInfo:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)bookmark:(id)a0 didProduceNavigationIntent:(id)a1 userInfo:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_updateContentOffsetIfNeeded;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)willMoveToParentViewController:(id)a0;
- (id)tableView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canHandleDropSession:(id)a1;
- (long long)_tableView:(id)a0 dataOwnerForDragSession:(id)a1 atIndexPath:(id)a2;
- (long long)_tableView:(id)a0 dataOwnerForDropSession:(id)a1 withDestinationIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canFocusRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 itemsForAddingToDragSession:(id)a1 atIndexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)tableView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)tableView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (id)tableView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (BOOL)tableView:(id)a0 shouldSpringLoadRowAtIndexPath:(id)a1 withContext:(id)a2;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (void)tableView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (BOOL)hasTranslucentAppearance;
- (long long)minimumNumberOfRows;
- (BOOL)safari_wantsDoneButtonInModalBookmarksPanel;
- (id)currentStateDictionary;
- (BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)a0;
- (id)tabGroupProviderForBookmarkInfoViewController:(id)a0;
- (void)updateSeparatorInset;
- (void)reloadBookmarks;
- (id)_bookmarkAtIndexPath:(id)a0;
- (BOOL)_bookmarkAtIndexPathIsFolder:(id)a0;
- (void)_deleteBookmark:(id)a0 atIndexPath:(id)a1;
- (id)_dragItemsAtIndexPath:(id)a0 includingFolders:(BOOL)a1;
- (id)_fontForCurrentTraitCollection;
- (void)_handleBookmarkItemDeleted:(BOOL)a0 atIndexPath:(id)a1 bookmarkCountBeforeDeletion:(unsigned long long)a2 lockedDatabase:(BOOL)a3;
- (BOOL)_inRootFolder;
- (BOOL)_isShowingAllSyntheticFolders;
- (void)_moveBookmarks:(id)a0 toFolderID:(int)a1 toIndex:(unsigned int)a2 shouldReorder:(BOOL)a3 isAddingBookmark:(BOOL)a4;
- (id)_newViewControllerForFolder:(id)a0 syntheticFolder:(id)a1 showAllSyntheticFolders:(BOOL)a2;
- (void)_pushInfoViewControllerForBookmark:(id)a0;
- (void)_recreateBookmarkLists;
- (id)_syntheticFolderAtIndexPath:(id)a0;
- (id)_tableViewCellForBookmark:(id)a0 syntheticFolder:(id)a1;
- (void)_updateTableViewCellsTextStyleForEditing:(BOOL)a0;
- (id)bookmarksTableViewCellWithReuseIdentifier:(id)a0;
- (id)initWithFolder:(id)a0 inCollection:(id)a1;
- (id)initWithFolder:(id)a0 inCollection:(id)a1 activeSyntheticFolder:(id)a2 showAllSyntheticFolders:(BOOL)a3 skipOffset:(unsigned int)a4;
- (id)initWithFolder:(id)a0 inCollection:(id)a1 skipOffset:(unsigned int)a2;
- (void)reloadAllSyntheticFolders;
- (BOOL)restoreStateWithDictionary:(id)a0;
- (id)safari_tableViewScrollPositionSaveIdentifier;
- (id)selectedBookmarks;
- (void)setScrollViewScrollsToTop:(BOOL)a0;

@end