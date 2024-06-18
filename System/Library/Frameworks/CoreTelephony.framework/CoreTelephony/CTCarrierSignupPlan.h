@class NSString;

@interface CTCarrierSignupPlan : CTPlan

@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *type;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithUrl:(id)a0 type:(id)a1;

@end
