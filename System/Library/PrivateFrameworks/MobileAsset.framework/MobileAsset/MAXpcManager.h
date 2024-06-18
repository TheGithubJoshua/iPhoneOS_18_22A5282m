@class NSString, NSMutableDictionary, MAXpcConnection, NSObject;
@protocol OS_dispatch_queue;

@interface MAXpcManager : NSObject {
    MAXpcConnection *_maConnection;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_progressQueue;
    NSString *_serviceName;
    NSMutableDictionary *_progressHandlers;
}

- (void)setClientName:(id)a0;
- (id)initWithServiceName:(id)a0 callbackQueue:(id)a1;
- (void)attachProgressHandler:(id)a0 assetId:(id)a1 callBack:(id /* block */)a2 withPurpose:(id)a3;
- (void)clearConnection:(id)a0;
- (void)sendAsync:(id)a0 clientHandler:(id /* block */)a1 taskDescriptor:(id)a2;
- (void).cxx_destruct;
- (id)sendSync:(id)a0 gettingResponseCode:(long long *)a1 codeForXpcError:(long long)a2 loggingName:(id)a3;
- (void)setClientConnectionHandler;
- (void)notifyClientsOfProgress:(id)a0;
- (void)ensureConnection;
- (void)sendAsync:(id)a0 clientHandler:(id /* block */)a1 taskDescriptor:(id)a2 withRetry:(BOOL)a3;

@end
