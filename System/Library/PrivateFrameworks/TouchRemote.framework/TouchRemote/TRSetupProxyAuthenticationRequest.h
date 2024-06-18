@class NSString, ACAccount, NSSet;

@interface TRSetupProxyAuthenticationRequest : TRRequestMessage

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSString *rawPassword;
@property (retain, nonatomic) NSSet *targetedAccountServices;
@property (nonatomic) BOOL shouldUseAIDA;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
