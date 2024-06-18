@class NSMutableDictionary, NSXPCConnection;

@interface ASDRequestBroker : NSObject {
    NSMutableDictionary *_activeRequests;
    NSXPCConnection *_connection;
}

+ (id)interface;

- (id)init;
- (void)cancelAllRequestsWithErrorHandler:(id /* block */)a0;
- (void)submitRequest:(id)a0 withReplyHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)description;

@end
