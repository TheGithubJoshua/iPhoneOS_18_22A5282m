@class NSString, SSMachineDataRequest;

@interface ISMachineDataActionOperation : ISOperation {
    BOOL _blocksPurchaseRequests;
    BOOL _hidesServerDrivenDialogs;
    SSMachineDataRequest *_request;
    id /* block */ _resultBlock;
    NSString *_syncState;
    NSString *_userAgent;
}

@property (readonly) SSMachineDataRequest *machineDataRequest;
@property BOOL blocksPurchaseRequests;
@property BOOL hidesServerDrivenDialogs;
@property (copy) id /* block */ resultBlock;
@property (copy) NSString *userAgent;
@property (readonly) NSString *syncState;

- (id)uniqueKey;
- (BOOL)_shouldRetryAfterError:(id)a0;
- (void).cxx_destruct;
- (void)run;
- (id)initWithMachineDataRequest:(id)a0;
- (BOOL)_eraseProvisioning;
- (BOOL)_provisionWithRequest:(id)a0 error:(id *)a1;
- (BOOL)_syncMachineWithRequest:(id)a0 error:(id *)a1;

@end
