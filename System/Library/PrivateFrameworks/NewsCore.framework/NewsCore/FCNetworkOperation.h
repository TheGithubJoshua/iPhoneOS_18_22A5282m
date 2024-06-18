@interface FCNetworkOperation : FCOperation

@property (readonly, nonatomic) double preferredTimeoutIntervalForRequest;

- (BOOL)canRetryWithError:(id)a0 retryAfter:(id *)a1;
- (unsigned long long)maxRetries;
- (BOOL)shouldStartThrottlingWithError:(id)a0 retryAfter:(double *)a1;

@end
