@class NSArray, NSOperationQueue, VSIdentityProvider, NSError;

@interface VSIdentityProviderUserAccountFetchOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (readonly, nonatomic) VSIdentityProvider *provider;
@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithIdentityProvider:(id)a0;

@end
