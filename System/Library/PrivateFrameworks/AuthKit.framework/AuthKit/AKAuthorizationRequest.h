@class NSString, NSArray, NSDictionary, ACAccount;

@interface AKAuthorizationRequest : AKCredentialRequest {
    NSString *_altDSID;
}

@property (nonatomic) long long existingStatus;
@property (readonly, nonatomic) ACAccount *internalAuthKitAccount;
@property (nonatomic) BOOL _isSilentAppTransfer;
@property (nonatomic) BOOL _clientAuthenticatedExternallyWithPassword;
@property (copy, nonatomic) NSString *_externalAuthToken;
@property (copy, nonatomic) NSArray *requestedScopes;
@property (copy, nonatomic) NSDictionary *appProvidedData;
@property (nonatomic) BOOL isEligibleForUpgradeFromPassword;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *nonce;
@property (copy, nonatomic) NSString *clientID;
@property (copy, nonatomic) NSString *teamID;
@property (retain, nonatomic) ACAccount *authkitAccount;

+ (BOOL)supportsSecureCoding;

- (id)altDSID;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAltDSID:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_sanitizedCopy;

@end
