@class CNAuthorizationContext;

@interface CNAccessAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizer;

+ (BOOL)canSetContactProperty:(id)a0;
+ (id)new;
+ (id)unauthorizedKeysWithAuthorizer:(id)a0;
+ (id)allAuthorizationKeys;
+ (void)removeUnavailableKeysFromContactKeyVector:(id)a0;
+ (id)unauthorizedKeysVectorWithAuthorizer:(id)a0;
+ (id)allAuthorizationKeysVector;

- (id)init;
- (id)initWithAuditToken:(id)a0;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (id)initWithAuthorizer:(id)a0;
- (id)authorizedKeysForContactKeys:(id)a0;
- (void).cxx_destruct;
- (void)performWork:(id /* block */)a0 authorizingFetchRequest:(id)a1 failureHandler:(id /* block */)a2;
- (BOOL)authorizeFetchRequest:(id)a0 accessError:(id *)a1;
- (id)unauthorizedKeysVector;
- (void)resetUnauthorizedKeysForFetchRequest:(id)a0;

@end
