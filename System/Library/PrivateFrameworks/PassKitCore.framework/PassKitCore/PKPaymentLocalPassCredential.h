@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential

@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *nonce;
@property (readonly, copy, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;
@property (nonatomic) BOOL suppressSuperEasyProvisioning;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescription;
- (id)initWithPaymentPass:(id)a0;
- (BOOL)supportsSuperEasyProvisioning;

@end
