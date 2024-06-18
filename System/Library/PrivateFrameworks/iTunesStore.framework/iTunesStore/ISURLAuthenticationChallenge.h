@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge

+ (id)_messageForProtectionSpace:(id)a0;
+ (id)_titleForProtectionSpace:(id)a0;

- (id)user;
- (BOOL)hasPassword;
- (long long)failureCount;
- (id)password;
- (id)sender;
- (void)cancelAuthentication;
- (id)initWithAuthenticationChallenge:(id)a0;
- (void)useCredential:(id)a0;

@end
