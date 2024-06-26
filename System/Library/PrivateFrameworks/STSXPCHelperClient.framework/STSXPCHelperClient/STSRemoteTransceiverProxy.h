@class NSXPCConnection;

@interface STSRemoteTransceiverProxy : NSObject

@property (retain, nonatomic) NSXPCConnection *xpc;

- (id)initWithListenerEndpoint:(id)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)asynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)transceive:(id)a0 outError:(id *)a1;

@end
