@class NSString, NSURL, AKAppleIDAuthenticationContext;

@interface AKAccountRecoveryContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsMasterKeyRecovery;
@property (nonatomic) BOOL mandatesRecoveryKey;
@property (copy, nonatomic) NSString *encodedRecoveryIdentityToken;
@property (copy, nonatomic) NSString *encodedRecoveryPET;
@property (copy, nonatomic) NSURL *recoveryContinuationURL;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authContext;
@property (readonly, nonatomic) NSString *decodedRecoveryIdentityTokenString;
@property (readonly, nonatomic) NSString *decodedRecoveryPETString;

+ (id)recoveryContextWithServerInfo:(id)a0;

- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end