@class NSXPCConnection;

@interface TSXAnonymousClient : NSObject {
    BOOL _invalidated;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)serverProtocol;
+ (id)clientProtocol;

- (id)exportedObject;
- (void)interruptedConnection;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)invalidatedConnection;
- (void)dealloc;

@end
