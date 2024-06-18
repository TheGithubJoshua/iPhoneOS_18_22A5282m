@interface CKDBackingPlatformAccount : CKDBackingAccount

- (id)ckAccount;
- (long long)accountType;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)a0;
- (id)initWithAppleAccount:(id)a0;

@end
