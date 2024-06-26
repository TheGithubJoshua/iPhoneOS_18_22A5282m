@interface HKHealthRecordsDaemonProxyProvider : HKProxyProvider

- (id)proxyServiceEndpointFromSource:(id)a0 serviceIdentifier:(id)a1 error:(id *)a2;
- (id)initWithConnection:(id)a0 serviceIdentifier:(id)a1 exportedObject:(id)a2;
- (void)fetchProxyServiceEndpointFromSource:(id)a0 serviceIdentifier:(id)a1 endpointHandler:(id /* block */)a2 errorHandler:(id /* block */)a3;

@end
