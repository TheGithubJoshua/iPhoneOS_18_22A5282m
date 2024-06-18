@class PSSpecifier;

@interface PSAccountsClientListController : PSListController {
    BOOL _noAccountsSetUp;
    BOOL _showExtraVC;
    PSSpecifier *_accountSpecifier;
    id _acObserver;
    int accountUpdateThrottle;
}

- (id)init;
- (void)setSpecifiers:(id)a0;
- (id)specifierForID:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_isAccountModificationDisabledByRestrictions;
- (id)_visibleAccountTypeIDs;
- (id)requestedAccountDataclass;
- (void)updateAccountSpecifier;

@end
