@class NSString;

@interface PSGDeviceNameEditingController : PSListController

@property (retain, nonatomic) id effectiveSettingsChangedNotificationObserver;
@property (retain, nonatomic) NSString *originalDeviceName;

- (id)specifiers;
- (void)suspend;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBeShownFromSuspendedState;
- (BOOL)shouldSelectResponderOnAppearance;
- (id)deviceName:(id)a0;
- (id)_editedDeviceName;

@end
