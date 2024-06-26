@class NSString, SKProductPageViewController, SUBarButtonItem;

@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController {
    SUBarButtonItem *_cancelButtonItem;
}

@property (weak, nonatomic) SKProductPageViewController *productPageViewController;
@property (nonatomic) BOOL showsCancelButton;
@property (copy, nonatomic) NSString *cancelButtonTitle;

- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_cancelButtonItem;
- (void)_addCancelButtonToNavigationItem:(id)a0;
- (void)_storeSheetCancelButtonAction:(id)a0;
- (void)handleFailureWithError:(id)a0;
- (BOOL)presentDialogForError:(id)a0 pendUntilVisible:(BOOL)a1;
- (void)resetNavigationItem:(id)a0;

@end
