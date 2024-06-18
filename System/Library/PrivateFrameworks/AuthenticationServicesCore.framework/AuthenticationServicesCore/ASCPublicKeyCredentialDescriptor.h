@class NSData, NSArray;

@interface ASCPublicKeyCredentialDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *credentialID;
@property (readonly, nonatomic) NSArray *transports;
@property (readonly, nonatomic) BOOL hasInternalTransport;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCredentialID:(id)a0 transports:(id)a1;

@end
