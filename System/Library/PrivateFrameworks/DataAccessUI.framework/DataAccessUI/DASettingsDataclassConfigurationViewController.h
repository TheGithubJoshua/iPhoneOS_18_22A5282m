@class DAAccount;

@interface DASettingsDataclassConfigurationViewController : ACUIDataclassConfigurationViewController {
    BOOL _haveRegisteredForAccountsChanged;
}

@property (retain, nonatomic) DAAccount *daAccount;

- (id)specifiers;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_accountsChanged:(id)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)cancelButtonClicked:(id)a0;
- (id)_navTitle;
- (void)reloadAccount;
- (id)otherSpecifiers;
- (Class)accountInfoControllerClass;
- (void)operationsHelper:(id)a0 didRemoveAccount:(id)a1 withSuccess:(BOOL)a2 error:(id)a3;
- (BOOL)shouldVerifyBeforeAccountSave;
- (void)_listenForAccountsChangedNotifications;
- (id)accountDescriptionForFirstTimeSetup;
- (id)accountFromSpecifier;

@end
