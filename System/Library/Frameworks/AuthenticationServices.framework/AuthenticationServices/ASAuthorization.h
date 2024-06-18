@protocol ASAuthorizationProvider, ASAuthorizationCredential;

@interface ASAuthorization : NSObject

@property (readonly, nonatomic) id<ASAuthorizationProvider> provider;
@property (readonly, nonatomic) id<ASAuthorizationCredential> credential;

+ (id)new;
+ (id)authorizationFromCredential:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithCorePlatformKeyCredentialAssertion:(id)a0;
- (id)initWithCorePlatformKeyCredentialRegistration:(id)a0;
- (id)initWithProvider:(id)a0 credential:(id)a1;

@end
