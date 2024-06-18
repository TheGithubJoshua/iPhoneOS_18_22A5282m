@class NSXPCConnection;

@interface VSUserAccountServiceConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (id)serviceWithErrorHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
