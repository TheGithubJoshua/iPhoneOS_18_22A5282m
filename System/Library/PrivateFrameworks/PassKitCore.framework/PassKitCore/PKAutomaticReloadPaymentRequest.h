@class NSString, NSURL, PKAutomaticReloadPaymentSummaryItem;

@interface PKAutomaticReloadPaymentRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *paymentDescription;
@property (retain, nonatomic) PKAutomaticReloadPaymentSummaryItem *automaticReloadBilling;
@property (copy, nonatomic) NSString *billingAgreement;
@property (retain, nonatomic) NSURL *managementURL;
@property (retain, nonatomic) NSURL *tokenNotificationURL;

+ (long long)version;
+ (id)automaticReloadPaymentRequestWithProtobuf:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)protobuf;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPaymentDescription:(id)a0 automaticReloadBilling:(id)a1 managementURL:(id)a2;
- (BOOL)isEqualToAutomaticReloadPaymentRequest:(id)a0;
- (void)sanitize;

@end
