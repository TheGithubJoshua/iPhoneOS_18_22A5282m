@class NSArray, NSExtension, PKIssuerProvisioningExtensionPaymentPassEntry;

@interface PKPaymentIssuerProvisioningExtensionCredential : PKPaymentCredential

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) PKIssuerProvisioningExtensionPaymentPassEntry *entry;
@property (readonly, copy, nonatomic) NSArray *metadata;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)detailDescription;
- (id)initWithExtension:(id)a0 entry:(id)a1;

@end
