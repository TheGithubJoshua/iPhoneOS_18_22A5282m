@class NSError, VSIdentityProvider, NSArray;

@interface VSIdentityProviderUserAccountUpdateOperation : VSAsyncOperation

@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) VSIdentityProvider *provider;
@property (readonly, nonatomic) NSArray *userAccounts;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)_allowedBundleIDs;
- (id)_userAccountsForJSUserAccounts;
- (id)initWithIdentityProvider:(id)a0 userAccounts:(id)a1;

@end
