@class NSString, PKPaymentPass;

@interface PKBusinessChatPhysicalCardContext : NSObject <PKBusinessChatContext> {
    PKPaymentPass *_paymentPass;
    long long _intent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bodyText;
- (void).cxx_destruct;
- (BOOL)requiresAuthorization;
- (id)groupParameters;
- (id)businessIdentifier;
- (id)initWithPaymentPass:(id)a0 intent:(long long)a1;
- (id)intentParameters;

@end
