@class NSMutableDictionary, NSXPCConnection;

@interface CAReportingClient : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableDictionary *clientReporters;

+ (id)getClient;
+ (id)sharedInstance;
+ (void)destroyClient;

- (id)getConfigurationForReporterID:(long long)a0;
- (void)destroyReporterWithID:(long long)a0;
- (void)setServiceType:(unsigned short)a0 reporterID:(long long)a1;
- (void)startReporters:(id)a0;
- (void)reconnectReporter:(id)a0;
- (void)stopReporters:(id)a0;
- (id)reporterWithID:(long long)a0;
- (void)addReporter:(id)a0;
- (unsigned short)getServiceTypeForReporterID:(long long)a0;
- (void)setConfiguration:(id)a0 reporterID:(long long)a1;
- (long long)createReporterID:(unsigned int)a0;
- (void).cxx_destruct;
- (id)initWithXPC:(BOOL)a0 endpoint:(id)a1;
- (void)destroyService;
- (id)listClientReporterIDs;
- (void)dealloc;
- (void)disconnectReporters;
- (void)reconnectReporters;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2 reporters:(id)a3;
- (id)listServerReporterIDs;

@end
