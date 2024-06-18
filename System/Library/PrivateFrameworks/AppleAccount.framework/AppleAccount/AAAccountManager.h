@class ACAccountStore, NSMutableArray;

@interface AAAccountManager : NSObject {
    ACAccountStore *_accountStore;
    NSMutableArray *_accounts;
    NSMutableArray *_originalAccounts;
    id _accountStoreDidChangeObserver;
}

@property (class, readonly) AAAccountManager *sharedManager;

- (id)primaryAccount;
- (void)addAccount:(id)a0;
- (void)updateAccount:(id)a0;
- (void)saveAllAccounts;
- (id)accountWithIdentifier:(id)a0;
- (id)accountWithPersonID:(id)a0;
- (void)reloadAccounts;
- (id)accountsEnabledForDataclass:(id)a0;
- (id)_accountStore;
- (id)accounts;
- (id)accountWithUsername:(id)a0;
- (void).cxx_destruct;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)dealloc;
- (void)removeAccount:(id)a0;
- (void)_stopObservingAccountStoreDidChangeNotification;

@end
