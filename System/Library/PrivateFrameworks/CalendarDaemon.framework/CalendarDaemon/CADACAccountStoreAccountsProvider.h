@class ACAccountStore;

@interface CADACAccountStoreAccountsProvider : NSObject <CADACAccountsProvider>

@property (readonly, nonatomic) ACAccountStore *accountStore;

- (id)initWithAccountStore:(id)a0;
- (id)accountWithIdentifier:(id)a0;
- (id)accounts;
- (void).cxx_destruct;

@end
