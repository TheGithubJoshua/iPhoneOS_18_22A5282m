@class PKPaymentInstallmentConfiguration;

@interface PKApplyWebServiceAugmentedProductRequest : PKApplyWebServiceRequest

@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)a0 appleAccountInformation:(id)a1;

@end
