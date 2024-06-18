@class NSXPCConnection;

@interface STCommunicationClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (id)init;
- (id)currentConfigurationWithError:(id *)a0;
- (void).cxx_destruct;
- (void)authenticateForCommunicationConfigurationOverrideWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;

@end
