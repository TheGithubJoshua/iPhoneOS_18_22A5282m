@class NSString, NSData;

@interface PKApplePayTrustHashResponse : PKAccountWebServiceResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *referenceIdentifier;
@property (readonly, copy, nonatomic) NSData *nonce;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
