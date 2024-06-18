@interface _EXExtensionContext : NSExtensionContext <_EXConnectionHandler>

- (id)init;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (void)invalidate;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)completeRequestReturningItems:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeRequestWithHandler:(id /* block */)a0;

@end
