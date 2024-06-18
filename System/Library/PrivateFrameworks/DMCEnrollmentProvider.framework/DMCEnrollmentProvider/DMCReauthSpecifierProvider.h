@class PSListController;

@interface DMCReauthSpecifierProvider : DMCSpecifierProvider

@property (readonly, weak, nonatomic) PSListController *presenter;

- (id)specifiers;
- (id)initWithAccount:(id)a0;
- (BOOL)handleURL:(id)a0;
- (BOOL)_shouldAutoPresentReauthFlow;
- (void)presentReauthFlow:(id)a0;
- (id)initWithAccountManager:(id)a0 presenter:(id)a1;
- (id)_reauthSpecifier;
- (void).cxx_destruct;

@end
