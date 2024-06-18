@class NSString, NSData;

@interface STSPeerPaymentTransferRequest : STSPaymentRequestBase

@property (retain, nonatomic) NSString *appleTransactionHash;
@property (retain, nonatomic) NSString *publicTransactionHash;
@property (retain, nonatomic) NSData *nonce;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTransactionAmount:(id)a0 currencyCode:(id)a1 countryCode:(id)a2 transactionDate:(id)a3 appleTransactionHash:(id)a4 publicTransactionHash:(id)a5 nonce:(id)a6;
- (id)toNFPeerPaymentTransferRequest;

@end
