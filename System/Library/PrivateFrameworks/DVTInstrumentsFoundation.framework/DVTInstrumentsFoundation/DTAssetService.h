@class NSString, DTAssetHTTPServer, NSXPCConnection;

@interface DTAssetService : DTXService <DTAssetServiceProtocol>

@property (retain) DTAssetHTTPServer *server;
@property (retain) NSXPCConnection *ondemandConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerCapabilities:(id)a0;
+ (id)translatedManifest:(id)a0 withAssetServicePort:(unsigned int)a1;

- (void).cxx_destruct;
- (id)startServer;
- (void)messageReceived:(id)a0;
- (void)appendAllowedResources:(id)a0;
- (void)connectToOnDemandDaemon;
- (id)registerApplicationIdentifier:(id)a0 manifest:(id)a1;
- (id)startServerForApplicationWithDevicePath:(id)a0;

@end
