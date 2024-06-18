@class NSString, PKPaymentTransaction, PKPaymentApplication;

@interface PKTransactionMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    PKPaymentTransaction *_transaction;
    PKPaymentApplication *_paymentApplication;
}

@property (nonatomic, getter=isClearingAttempt) BOOL clearingAttempt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isRefund;
- (BOOL)isSettlement;
- (id)mapsURL;
- (void).cxx_destruct;
- (id)identifier;
- (long long)type;
- (id)initWithTransaction:(id)a0 paymentApplication:(id)a1;
- (id)mapsMerchantLookupRequest;

@end
