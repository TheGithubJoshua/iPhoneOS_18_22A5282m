@class HMHome, NSString, HFPinCodeManager;
@protocol HUAddPeopleViewControllerDelegate;

@interface HUAddPersonRoleViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, HUPresentationDelegate>

@property (retain, nonatomic) HMHome *home;
@property (weak, nonatomic) id<HUAddPeopleViewControllerDelegate> delegate;
@property (retain, nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (void)cancelButtonPressed:(id)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (id)initWithHome:(id)a0;
- (BOOL)_disableAddGuest;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;

@end
