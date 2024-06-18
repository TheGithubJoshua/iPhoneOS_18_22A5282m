@class NSString, NSXPCInterface, NSXPCConnection;

@interface TransparencyXPCConnection : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSString *machName;
@property (retain) NSXPCInterface *interface;

+ (void)setupTestConnection:(id)a0 forMachName:(id)a1;
+ (id)mainInstance;
+ (id)cachedConnection:(id)a0 interface:(Class)a1;
+ (void)invokeXPCAsynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;
+ (void)invokeXPCWithBlock:(id /* block */)a0 synchronous:(BOOL)a1 errorHandler:(id /* block */)a2;
+ (id)transparencySupportInstance;
+ (id)idsInstance;
+ (void)invokeXPCSynchronousCallWithBlock:(id /* block */)a0 errorHandler:(id /* block */)a1;

- (id)createConnection;
- (void)setTestEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)initWithMachName:(id)a0 interface:(id)a1;
- (void)dealloc;

@end
