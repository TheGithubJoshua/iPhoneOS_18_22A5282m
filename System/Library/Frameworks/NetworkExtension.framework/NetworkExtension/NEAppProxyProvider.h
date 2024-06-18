@interface NEAppProxyProvider : NETunnelProvider

@property (nonatomic) unsigned long long maxWriteSize;

- (void)cancelProxyWithError:(id)a0;
- (BOOL)handleNewFlow:(id)a0;
- (BOOL)handleNewUDPFlow:(id)a0 initialRemoteEndpoint:(id)a1;
- (void)startProxyWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopProxyWithReason:(long long)a0 completionHandler:(id /* block */)a1;

@end