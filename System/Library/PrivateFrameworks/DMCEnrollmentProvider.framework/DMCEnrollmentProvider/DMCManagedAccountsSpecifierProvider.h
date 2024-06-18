@class NSArray;

@interface DMCManagedAccountsSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) NSArray *managedAccounts;
@property (nonatomic) BOOL isReloadingManagedAccounts;

- (id)initWithAccountManager:(id)a0;
- (id)specifiers;
- (void)_reloadManagedAccounts;
- (void).cxx_destruct;
- (void)reloadNotificationPosted:(id)a0;
- (void)_accountCellWasTappedWithSpecifier:(id)a0;

@end
