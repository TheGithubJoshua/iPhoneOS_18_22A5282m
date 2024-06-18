@class NSURL, PKSecureElementPass, NSString;

@interface PKPaymentProvisioningPassData : NSObject

@property (readonly, copy, nonatomic) NSURL *passURL;
@property (retain, nonatomic) PKSecureElementPass *secureElementPass;
@property (readonly, nonatomic) BOOL willProvisionWithAuthenticationDisabled;
@property (readonly, nonatomic) BOOL suppressMakeDefaultPaymentPassOffer;
@property (readonly, copy, nonatomic) NSString *ownershipToken;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithSecureElementPass:(id)a0;

@end
