@class NSXPCConnection;

@interface TSXClient : NSObject {
    BOOL _invalidated;
}

@property (readonly) NSXPCConnection *serverConnection;

+ (id)serviceName;
+ (id)serverProtocol;
+ (id)clientProtocol;

- (id)exportedObject;
- (id)init;
- (void)interruptedConnection;
- (void).cxx_destruct;
- (void)invalidatedConnection;
- (void)dealloc;

@end
