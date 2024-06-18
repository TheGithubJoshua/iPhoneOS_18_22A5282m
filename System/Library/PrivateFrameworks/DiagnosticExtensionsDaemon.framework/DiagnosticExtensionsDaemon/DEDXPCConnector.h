@class NSXPCListener, NSMutableDictionary, NSXPCConnection, NSArray, NSString, NSObject;
@protocol OS_os_log, DEDXPCConnectorDelegate, DEDXPCProtocol;

@interface DEDXPCConnector : NSObject <NSXPCListenerDelegate>

@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSXPCConnection *diagnosticextensionsdConnection;
@property (retain) NSMutableDictionary *appConnections;
@property (retain) NSXPCListener *listener;
@property unsigned long long connType;
@property BOOL isDaemon;
@property BOOL started;
@property (weak) id<DEDXPCConnectorDelegate> xpcConnectorDelegate;
@property unsigned long long connectionRestartCount;
@property (readonly) id<DEDXPCProtocol> diagnosticextensionsdXPCInterface;
@property (readonly) NSArray *clientConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validateConnection:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)configureDaemonMode;
- (void)start;
- (void)configureConnectionType:(unsigned long long)a0;
- (void)_initializeDiagnosticextensionsdConnection;
- (void).cxx_destruct;
- (void)startForDaemon;
- (id)connectionWithEndpoint:(id)a0 forMachService:(id)a1;
- (id)remoteXPCObjectForApplicationPid:(id)a0;
- (id)clientXPCInterfaceFromInbound:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startForApp;
- (void)_releaseAppConnectionWithPid:(int)a0;
- (id)_connectionForPid:(id)a0;
- (id)_whitelistedXPCInterface;
- (void)_storeAppConnection:(id)a0;

@end
