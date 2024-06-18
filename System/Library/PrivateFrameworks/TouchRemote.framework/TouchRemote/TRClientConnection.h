@class SFSession;

@interface TRClientConnection : TRConnection

@property (retain) SFSession *session;

- (id /* block */)invalidationHandler;
- (id /* block */)requestMessageHandler;
- (void)sendRequest:(id)a0;
- (void)setInvalidationHandler:(id /* block */)a0;
- (void)sendEvent:(id)a0;
- (void)setInterruptionHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)sendResponse:(id)a0;
- (void)setRequestMessageHandler:(id /* block */)a0;
- (id /* block */)eventMessageHandler;
- (void)setEventMessageHandler:(id /* block */)a0;
- (id /* block */)interruptionHandler;
- (void)connectToNearbyDevice:(id)a0 withCompletion:(id /* block */)a1;

@end
