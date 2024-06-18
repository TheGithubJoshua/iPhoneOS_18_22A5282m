@class CNAuthorizationContext;

@interface CNAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizationContext;

+ (id)logger;

- (id)init;
- (id)initWithAssumedIdentity:(id)a0;
- (id)initWithAuthorizationContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAccessRestrictedForEntityType:(long long)a0;
- (long long)authorizationStatusForEntityType:(long long)a0;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;

@end
