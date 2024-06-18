@class NSString;

@interface TRSetupNetworkRequest : TRRequestMessage

@property (copy, nonatomic) NSString *networkSSID;
@property (copy, nonatomic) NSString *networkPassword;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
