@class NSString, AWDLServiceDiscoveryManager;

@interface _AWDLServiceDiscoveryManagerExportedObject : NSObject <AWDLServiceDiscoveryManagerXPCDelegate>

@property (weak) AWDLServiceDiscoveryManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidatedActiveTrafficRegistration:(id)a0;

@end
