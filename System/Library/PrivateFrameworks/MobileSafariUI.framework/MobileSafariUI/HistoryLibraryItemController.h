@class NSString, HistoryTableViewController;

@interface HistoryLibraryItemController : LibraryItemController <HistoryTableViewControllerDelegate> {
    HistoryTableViewController *_viewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)viewController;
- (BOOL)selectionFollowsFocus;
- (void)updateListContentConfiguration:(id)a0;
- (BOOL)panelViewControllerShouldTranslucentAppearance:(id)a0;

@end
