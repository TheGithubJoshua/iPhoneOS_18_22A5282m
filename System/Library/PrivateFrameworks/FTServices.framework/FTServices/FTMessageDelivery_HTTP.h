@class IDSServerBag;
@protocol FTMessageDeliveryRemoteURLConnectionFactory, FTMessageDeliveryRemoteURLConnection, FTMessageDeliveryHTTPMobileNetworkManager;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {
    id<FTMessageDeliveryRemoteURLConnectionFactory> _remoteConnectionFactory;
    id<FTMessageDeliveryRemoteURLConnection> _remoteConnection;
    id<FTMessageDeliveryHTTPMobileNetworkManager> _mobileNetworkManager;
    BOOL _pendingRetryAfterAirplaneMode;
    double _retryTimeAfterAirplaneMode;
    id /* block */ _retryBackoffProvider;
    IDSServerBag *_idsServerBag;
    IDSServerBag *_iMessageServerBag;
}

- (BOOL)busy;
- (void)cancelMessage:(id)a0;
- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (id)init;
- (id)initWithIDSServerBag:(id)a0;
- (void)_serverBagLoaded:(id)a0;
- (id)_processResultData:(id)a0 forMessage:(id)a1 error:(id *)a2;
- (void)_notifyDelegateAboutError:(id)a0;
- (void)_clearRetryTimer;
- (void)_cleanupURLConnection;
- (void)_urlRequestWithURL:(id)a0 andData:(id)a1 message:(id)a2 completionBlock:(id /* block */)a3;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)sendMessage:(id)a0;
- (void)_updateWiFiAssertions;
- (BOOL)sendMessageAtTopOfTheQueue:(id)a0;
- (void)dealloc;
- (id)initWithIDSServerBag:(id)a0 iMessageServerBag:(id)a1 remoteConnectionFactory:(id)a2 mobileNetworkManager:(id)a3 retryBackoffProvider:(id /* block */)a4;
- (void)networkStateChanged;
- (BOOL)_sendMessageAsynchronously:(id)a0 error:(id *)a1;
- (void)_informDelegatesOfMessage:(id)a0 result:(id)a1 resultCode:(long long)a2 error:(id)a3;
- (BOOL)_tryRetryMessageWithTimeInterval:(double)a0;
- (void)_dequeueIfNeeded;

@end
