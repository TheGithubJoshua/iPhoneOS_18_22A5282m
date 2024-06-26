@class NSString, AMSFDSOptions, ACAccount, NSNumber;

@interface AMSFDSRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSString *logKey;
@property (readonly, nonatomic) AMSFDSOptions *options;
@property (readonly, copy, nonatomic) NSNumber *purchaseIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPurchaseIdentifier:(id)a0 account:(id)a1 options:(id)a2;

@end
