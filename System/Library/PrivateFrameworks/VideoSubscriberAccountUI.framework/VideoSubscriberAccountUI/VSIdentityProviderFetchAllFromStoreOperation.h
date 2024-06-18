@class NSOperationQueue, VSOptional, VSAuditToken;

@interface VSIdentityProviderFetchAllFromStoreOperation : VSAsyncOperation

@property (retain, nonatomic) VSOptional *result;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) VSAuditToken *auditToken;

- (id)init;
- (void)cancel;
- (void).cxx_destruct;
- (void)executionDidBegin;

@end
