@class PKTableHeaderView, NSArray, PKAddPaymentPassRequestConfiguration;
@protocol PKAddPaymentPassDevicePickerDelegate;

@interface PKAddPaymentPassDevicePickerViewController : UITableViewController {
    PKTableHeaderView *_headerView;
    NSArray *_webServices;
    PKAddPaymentPassRequestConfiguration *_configuration;
    BOOL _viewHasAppeared;
    BOOL _sentViewHasAppearedEvent;
}

@property (weak, nonatomic) id<PKAddPaymentPassDevicePickerDelegate> delegate;

- (id)initWithStyle:(long long)a0;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithPaymentWebServices:(id)a0 configuration:(id)a1;
- (void)noteNavigationUserInterfaceDidDisappear;
- (void)reloadContentFromWebServices;

@end
