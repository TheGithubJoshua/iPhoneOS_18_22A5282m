@class BookmarksTableViewController, NSString, UIBarButtonItem, WebBookmarkCollection, NSObject, WebBookmark;
@protocol _SFNavigationIntentHandling, TabGroupProvider, WBBookmarkProvider, OS_dispatch_queue, LinkPreviewProvider;

@interface BookmarkFolderLibraryItemController : LibraryItemController <WBTabGroupManagerObserver, BookmarksTableViewControllerDelegate, _SFNavigationIntentHandling, _SFBookmarkInfoViewControllerDelegate> {
    BookmarksTableViewController *_viewController;
    UIBarButtonItem *_createFolderButtonItem;
    UIBarButtonItem *_editButtonItem;
    UIBarButtonItem *_editingDoneButtonItem;
    UIBarButtonItem *_flexibleSpaceItem;
    BOOL _allowsEditing;
    BOOL _isEditing;
}

@property (readonly, nonatomic) WebBookmark *folder;
@property (retain, nonatomic) WebBookmarkCollection *collection;
@property (retain, nonatomic) id<WBBookmarkProvider> bookmarkProvider;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bookmarkProviderQueue;
@property (weak, nonatomic) id<_SFNavigationIntentHandling> navigationIntentHandler;
@property (weak, nonatomic) id<LinkPreviewProvider> linkPreviewProvider;
@property (weak, nonatomic) id<TabGroupProvider> tabGroupProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tabGroupManager:(id)a0 didUpdateTabGroupWithUUID:(id)a1;
- (void)_folderContentsDidChange:(id)a0;
- (void)handleNavigationIntent:(id)a0 completion:(id /* block */)a1;
- (void)tabGroupManager:(id)a0 didUpdateScopedBookmarkList:(id)a1;
- (id)topViewController;
- (void).cxx_destruct;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSpringLoaded;
- (void)tabGroupManagerDidUpdateTabGroups:(id)a0;
- (void)dispatchNavigationIntent:(id)a0;
- (void)dealloc;
- (id)viewController;
- (BOOL)selectionFollowsFocus;
- (BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)a0;
- (id)tabGroupProviderForBookmarkInfoViewController:(id)a0;
- (id)_toolbarItemsForViewController:(id)a0;
- (void)updateListContentConfiguration:(id)a0;
- (void)_createToolbarItemsIfNecessary;
- (void)_didPressEditButton;
- (void)_didPressEditingDoneButton;
- (void)_didPressNewFolderButton;
- (void)_reloadFolderContentsForFolderIDIfNeeded:(int)a0;
- (void)_setEditingFromToolbarButton:(BOOL)a0;
- (void)_updateToolbarItemsForViewController:(id)a0 animated:(BOOL)a1;
- (void)bookmarksTableViewControllerDidBeginEditing:(id)a0;
- (void)bookmarksTableViewControllerDidEndEditing:(id)a0;
- (void)bookmarksTableViewControllerWillDisappear:(id)a0;
- (BOOL)bookmarksTableViewIsReadOnly:(id)a0;
- (BOOL)bookmarksTableViewShouldDispatchNavigationIntent:(id)a0 forSelectedBookmark:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetForBookmarksTableViewController:(id)a0;
- (long long)dropIntentForSession:(id)a0;
- (unsigned long long)dropOperationForSession:(id)a0;
- (id)initWithConfiguration:(id)a0 sectionController:(id)a1 folder:(id)a2;
- (void)performDropWithProposal:(id)a0 session:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInsetForBookmarksTableViewController:(id)a0;
- (void)toggleEditBookmarks;
- (void)updateToolbarIfNeeded;

@end
