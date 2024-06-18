@class PKPaymentPass, CNContact, PKPaymentApplication, PKCurrencyAmount;

@interface PKPaymentCardDataItem : PKPaymentDataItem

@property (nonatomic) BOOL showPeerPaymentBalance;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property (readonly, nonatomic) BOOL requiresBillingAddress;
@property (readonly, nonatomic) CNContact *billingAddress;
@property (readonly, nonatomic) BOOL shouldShowCardArt;

+ (long long)dataType;

- (long long)context;
- (void).cxx_destruct;
- (long long)status;
- (BOOL)isValidWithError:(id *)a0;
- (id)errors;
- (id)paymentContactFormatErrors;

@end
