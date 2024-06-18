@class AMSAuthenticateOptions, NSString, NSDictionary, ACAccount;

@interface AMSAuthenticateRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *logKey;
@property (retain, nonatomic) AMSAuthenticateOptions *options;
@property (retain, nonatomic) NSDictionary *userInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAccount:(id)a0 options:(id)a1;
- (id)initWithDSID:(id)a0 altDSID:(id)a1 username:(id)a2 options:(id)a3;

@end
