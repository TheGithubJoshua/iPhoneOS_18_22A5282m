@class NSData, NSString;

@interface DCCredentialAuthorizationToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *credentialAuthorizationToken;
@property (readonly) NSString *credentialPairingID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCredentialAuthorizationToken:(id)a0 pairingID:(id)a1;

@end
