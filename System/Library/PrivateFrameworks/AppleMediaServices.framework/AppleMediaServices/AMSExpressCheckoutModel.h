@interface AMSExpressCheckoutModel : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ paymentChoices;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMode:(long long)a0 paymentChoices:(id)a1;

@end
