@class NSString;

@interface PKPeerPaymentQuoteDynamicFraudContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *header;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *defaultButtonTitle;
@property (readonly, copy, nonatomic) NSString *otherButtonTitle;

+ (id)dynamicFraudContentWithDictionary:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
