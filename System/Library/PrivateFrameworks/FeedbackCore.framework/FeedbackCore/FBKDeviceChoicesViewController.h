@class NSArray, NSSet, NSMutableSet, _UIContentUnavailableView;
@protocol FBKDeviceChoiceDelegate;

@interface FBKDeviceChoicesViewController : UITableViewController

@property (retain, nonatomic) NSMutableSet *selectedDevices;
@property (retain, nonatomic) _UIContentUnavailableView *contentUnavailableView;
@property (retain, nonatomic) NSArray *sortedChoices;
@property (weak, nonatomic) id<FBKDeviceChoiceDelegate> choiceDelegate;
@property (retain, nonatomic) NSSet *deviceChoices;
@property BOOL isMultiSelect;

- (id)init;
- (void)didCancel;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)didTapDone;
- (void)hideContentUnavailableView;
- (void)showContentUnavailableView;

@end
