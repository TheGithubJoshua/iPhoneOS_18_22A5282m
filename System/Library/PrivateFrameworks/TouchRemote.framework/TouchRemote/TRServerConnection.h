@class SFService;

@interface TRServerConnection : TRConnection

@property (weak, nonatomic) SFService *service;

- (id)initWithService:(id)a0;
- (void)sendRequest:(id)a0;
- (void)sendEvent:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sendResponse:(id)a0;

@end
