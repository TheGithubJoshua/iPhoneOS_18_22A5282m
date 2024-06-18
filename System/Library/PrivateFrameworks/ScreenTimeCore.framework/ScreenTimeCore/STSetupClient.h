@class NSXPCConnection;

@interface STSetupClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)applyUpdatedConfiguration:(id)a0 error:(id *)a1;
- (void)collectPasscodeFromUserWithCompletionHandler:(id /* block */)a0;
- (id)currentConfigurationForUser:(id)a0 error:(id *)a1;

@end
