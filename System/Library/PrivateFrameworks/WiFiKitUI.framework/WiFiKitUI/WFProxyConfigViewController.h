@class WFAppearanceProxy, UISwitch, WFNetworkSettingsConfig, WFTextFieldCell;

@interface WFProxyConfigViewController : WFInsetTableViewController

@property (retain, nonatomic) WFNetworkSettingsConfig *originalConfig;
@property (retain, nonatomic) WFNetworkSettingsConfig *modifiedConfig;
@property (retain, nonatomic) UISwitch *authSwitch;
@property (retain, nonatomic) WFTextFieldCell *serverCell;
@property (retain, nonatomic) WFTextFieldCell *portCell;
@property (retain, nonatomic) WFTextFieldCell *userCell;
@property (retain, nonatomic) WFTextFieldCell *passwordCell;
@property (retain, nonatomic) WFTextFieldCell *urlCell;
@property (retain, nonatomic) WFAppearanceProxy *appearanceProxy;
@property (copy, nonatomic) id /* block */ saveHandler;

- (void)save:(id)a0;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithConfig:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_updateSaveEnabled;
- (id)initWithConfig:(id)a0 appearanceProxy:(id)a1;
- (void)_changeProxyAuthentication:(id)a0;
- (double)_configCellLeadingInset;
- (void)_setFirstResponderAfterCell:(id)a0;

@end
