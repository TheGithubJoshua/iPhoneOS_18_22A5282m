@class PKPeerPaymentPassDetailsResponse, PKPeerPaymentAccount, NSString, PKCurrencyAmount;

@interface PKPeerPaymentCredential : PKPaymentCredential {
    NSString *_pendingPaymentSenderName;
}

@property (readonly, nonatomic) PKPeerPaymentAccount *account;
@property (retain, nonatomic) PKPeerPaymentPassDetailsResponse *passDetailsResponse;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) PKCurrencyAmount *amount;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *pendingPaymentSenderAddress;
@property (readonly, copy, nonatomic) NSString *pendingPaymentSenderName;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)longDescription;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescription;
- (id)initWithPeerPaymentAccount:(id)a0;

@end
