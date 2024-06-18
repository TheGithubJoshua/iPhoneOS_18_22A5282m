@class ACAccountStore, NSObject;
@protocol OS_dispatch_queue, DMCAccountSpecifierProviderDelegate;

@interface DMCAccountSpecifierProvider : NSObject {
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_updateQueue;
}

@property (weak, nonatomic) id<DMCAccountSpecifierProviderDelegate> delegate;

+ (id)itemSpecifierIDForReauthAccountUsername:(id)a0;
+ (id)itemSpecifierIDForAccountUsername:(id)a0;
+ (id)itemSpecifierIDPrefix;
+ (id)groupSpecifierID;

- (id)initWithAccountStore:(id)a0;
- (id)specifiersWithTitle:(BOOL)a0 includePrimaryAccounts:(BOOL)a1;
- (id)_specifierForManagedAccountGroupWithTitle:(BOOL)a0 plural:(BOOL)a1;
- (void)appleAccountsDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_specifierForManagedAccount:(id)a0;
- (void)specifiersWithCompletion:(id /* block */)a0;
- (id)_reauthSpecifierForAccount:(id)a0;
- (void)dealloc;
- (void)_accountCellWasTappedWithSpecifier:(id)a0;

@end
