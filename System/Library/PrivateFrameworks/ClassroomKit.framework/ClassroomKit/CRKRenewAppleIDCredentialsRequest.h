@class NSString;

@interface CRKRenewAppleIDCredentialsRequest : CATTaskRequest

@property (nonatomic) BOOL force;
@property (copy, nonatomic) NSString *reason;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
