@interface MagnifierSupport.DoorDetectionSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIColorPickerViewControllerDelegate> {
    void /* unknown type, empty encoding */ availableDoorDetectionFeedbacks;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ speechFeedbackSubscription;
    void /* unknown type, empty encoding */ colorPickerController;
    void /* unknown type, empty encoding */ doorAttributesController;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)colorPickerViewControllerDidSelectColor:(id)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)didToggleBackTapSwitch:(id)a0;
- (void)didToggleDecorationsSwitch:(id)a0;
- (void)didToggleFeedbackSwitch:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)viewWillAppear:(BOOL)a0;

@end