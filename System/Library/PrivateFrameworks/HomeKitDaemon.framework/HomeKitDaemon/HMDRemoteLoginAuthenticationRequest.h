@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage

@property (nonatomic) unsigned long long targetedAccountType;

+ (BOOL)supportsSecureCoding;
+ (id)messageName;
+ (id)objWithMessage:(id)a0;
+ (id)objWithDict:(id)a0;
+ (id)xpcMessageName;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)messagePayload;
- (id)messageName;
- (id)xpcMessageName;

@end
