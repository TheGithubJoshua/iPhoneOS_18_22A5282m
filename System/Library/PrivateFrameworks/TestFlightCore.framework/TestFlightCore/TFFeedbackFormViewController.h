@class UITableView, TFFeedbackFormPresenter, UIActivityIndicatorView, TFFeedbackFormViewDataSource, UIBarButtonItem;

@interface TFFeedbackFormViewController : UIViewController <TFFeedbackFormPresenterView>

@property (readonly, nonatomic) TFFeedbackFormViewDataSource *viewDataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) UIBarButtonItem *submitButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *activityItem;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (readonly, nonatomic) TFFeedbackFormPresenter *presenter;

- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithPresenter:(id)a0;
- (void)viewDidLoad;
- (void)unregisterNotifications;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)registerNotifications;
- (void)adjustContentOffsetForKeyboardNotification:(id)a0;
- (void)prepareForEntryType:(unsigned long long)a0;
- (void)reloadEntriesAtIndexPaths:(id)a0;
- (void)reloadEntryGroupsAtIndices:(id)a0;
- (void)setNavigationItemTitle:(id)a0;
- (void)showErrorAlertWithTitle:(id)a0 message:(id)a1;
- (void)showSubmitButtonForSubmissionPendingState:(BOOL)a0;
- (void)submitButtonPressed:(id)a0;

@end
