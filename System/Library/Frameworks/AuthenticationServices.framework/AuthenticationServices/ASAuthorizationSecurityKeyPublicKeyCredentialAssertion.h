@class NSData, NSString, ASPublicKeyCredentialBase;

@interface ASAuthorizationSecurityKeyPublicKeyCredentialAssertion : NSObject <ASAuthorizationPublicKeyCredentialAssertion> {
    ASPublicKeyCredentialBase *_baseCredential;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *rawAuthenticatorData;
@property (readonly, copy, nonatomic) NSData *userID;
@property (readonly, copy, nonatomic) NSData *signature;
@property (readonly, copy, nonatomic) NSData *rawClientDataJSON;
@property (readonly, copy, nonatomic) NSData *credentialID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithBaseCredential:(id)a0 userID:(id)a1 signature:(id)a2 rawAuthenticatorData:(id)a3;
- (id)initWithCoreCredential:(id)a0;

@end
