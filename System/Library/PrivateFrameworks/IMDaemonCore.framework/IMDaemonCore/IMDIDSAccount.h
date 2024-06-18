@class IDSAccount;

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;

- (void)writeAccountDefaults:(id)a0;
- (id)accountDefaults;
- (void).cxx_destruct;
- (id)description;
- (BOOL)canMakeDowngradeRoutingChecks;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2 idsAccount:(id)a3;
- (BOOL)multiplePhoneNumbersTiedToAccount;

@end
