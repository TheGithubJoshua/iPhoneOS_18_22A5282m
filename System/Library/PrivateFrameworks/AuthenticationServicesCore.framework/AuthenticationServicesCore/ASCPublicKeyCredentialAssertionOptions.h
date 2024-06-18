@class NSString, NSArray, NSData, ASCWebAuthenticationExtensionsClientInputs, NSNumber;

@interface ASCPublicKeyCredentialAssertionOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long credentialKind;
@property (readonly, copy, nonatomic) NSString *relyingPartyIdentifier;
@property (readonly, copy, nonatomic) NSData *challenge;
@property (copy, nonatomic) NSData *clientDataHash;
@property (readonly, copy, nonatomic) NSString *userVerificationPreference;
@property (copy, nonatomic) NSNumber *timeout;
@property (copy, nonatomic) ASCWebAuthenticationExtensionsClientInputs *extensions;
@property (copy, nonatomic) NSData *extensionsCBOR;
@property (readonly, copy, nonatomic) NSArray *allowedCredentials;
@property (copy, nonatomic) NSString *destinationSiteForCrossSiteAssertion;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKind:(unsigned long long)a0 relyingPartyIdentifier:(id)a1 challenge:(id)a2 userVerificationPreference:(id)a3 allowedCredentials:(id)a4;
- (id)initWithKind:(unsigned long long)a0 relyingPartyIdentifier:(id)a1 clientDataHash:(id)a2 userVerificationPreference:(id)a3 allowedCredentials:(id)a4;
- (void)logRequest;

@end
