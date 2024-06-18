@class NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, WiFiP2PXPCConnectionDelegate;

@interface WiFiP2PXPCConnection : NSObject {
    unsigned long long _endpointType;
    NSObject<OS_dispatch_queue> *_queue;
    long long _retryTimeout;
    NSXPCConnection *_connection;
    id _remoteObject;
    int _notifyToken;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSMutableArray *_queuedRequests;
}

@property (weak) id<WiFiP2PXPCConnectionDelegate> delegate;

+ (long long)defaultRetryTimeout;
+ (id)frameworkBundle;
+ (BOOL)supportsWiFiP2P;
+ (const char *)wifiPeerToPeerAvailableNotification;
+ (id)directQueryOnEndpointType:(unsigned long long)a0 error:(id *)a1 querying:(id /* block */)a2;
+ (id)wifiPeerToPeerWorkloop;
+ (id)localization;
+ (BOOL)directRequestOnEndpointType:(unsigned long long)a0 error:(id *)a1 requesting:(id /* block */)a2;
+ (id)convertError:(long long)a0;
+ (id)directQueryOnEndpointType:(unsigned long long)a0 exportedObject:(id)a1 withExportedInterface:(id)a2 error:(id *)a3 querying:(id /* block */)a4;
+ (id)endpointForEndpointType:(unsigned long long)a0;

- (void)cleanUpRemovingNotifyToken:(BOOL)a0;
- (void)withRemoteObjectProxy:(id /* block */)a0;
- (void)withRemoteObjectProxy:(id /* block */)a0 clientErrorHandler:(id /* block */)a1;
- (void)handleError:(long long)a0;
- (void)stop;
- (void)attemptConnection;
- (void)start;
- (void)handleConnectionInvalidated;
- (void)invalidate;
- (void).cxx_destruct;
- (void)withRemoteObjectProxy:(id /* block */)a0 clientCompletionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)reconnectOnAvailableNotification;
- (id)initWithEndpointType:(unsigned long long)a0 queue:(id)a1 retryTimeout:(long long)a2;

@end
